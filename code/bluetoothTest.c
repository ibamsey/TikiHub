//This example creates a bridge between Serial and Classical Bluetooth (SPP)
//It send a fake set of NMEA sentences to the setial BT. Using Mock GPS enabled on an 
//Android phone, this program should result in the phone reading the GPS
//data sent below as if it were real GPS data. 
//This test helps establish a vaild set of NMEA sentences for use later.

#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;
char source[] = "$GPGGA,210230,3855.4487,N,09446.0071,W,1,07,1.1,370.5,M,-29.5,M,,*7A\r\n";
char nmea[][97] =
  {"$GPVTG,13.10,T,,M,0.000,N,0.000,K,A*0E",
"$GPVTG,13.10,T,,M,0.000,N,0.000,K,A*0E",
"$PMTKTSX1,368449,2374.249,0.172,61.692,2c180000,0.118364,0.237425,-0.405631,0.000000,0.000000*27",
"$GPACCURACY,3.9*02",
"$GPGGA,185249.000,5047.9000,N,00330.5971,W,1,5,1.96,40.0,M,50.4,M,,*72"
};


void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32testIan"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  Serial.println(sizeof(source));
}

void loop() {

  int i,j;
  for (j = 0; j < 5; j++) {
    for (i = 0; i < strlen(nmea[j]); i++) {
      SerialBT.write(nmea[j][i]);
    }
    SerialBT.write('\r');
    SerialBT.write('\n');
    delay(100);
  }
  
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());    
  }

}
