Notes on Getting Started
=========================

Below are notes on starting with VSCode and Platformio
----------------------------------------------------------
1. Follow instructions here https://randomnerdtutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/
1. Run the serial example here https://randomnerdtutorials.com/esp32-bluetooth-classic-arduino-ide/



Below are notes on starting using Eclipse
------------------------------------------
These notes document the process followed to get started.

1. Follow the instructions https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html#
  1. In this installation there were a number of problems to overcome
  * When installing python be sure to tick the box to set the PATH env to include python
  * To install Eclipse, download the zip and extract. When it runs you need to ensure it is running with Java 11
  * First install the JDK11 from here https://www.oracle.com/java/technologies/javase-jdk15-downloads.html
  * Run the eclipse.exe from the install directory of eclipse. Set a workspace and check in this directory
    and find the \eclipse-workspace\.metadata Open the .log file. Ensure Eclipse is starting with Java 11. If not, 
    the esp-idf plugins wont work and eclipse wont start once they are installed.
  * You must set the paths in the ESP-IDF Tool Manager (See Ecplise Help>IDF-Tool Manager>Install Tools. Make sure the ESP-IDF path point the the esp-idf directort
    and not the directory in which you place the esp-idf directory!
    
  * Follow the instructions https://github.com/espressif/idf-eclipse-plugin
  * Changing the baud rate in the sdkconfig file for the project did not change the acutal serial flasher baud rate. I manually changed it to 115200 in \esp-idf\tools\idf_py_actions\serial_ext.py. This work and my first program compiled and loaded to the board. Using the serial monitor I can see the programming is running.
