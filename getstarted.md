Notes on Getting Started
=========================

These notes document the process followed to get started.

USB - UART Bridge
------------------

1. Download and install the [usb to uart bridge](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers) here.
1. Check this is working on Windows, open an Explorer, right-click on Computer and select Manage
1. In Computer Management, open System Tools and select Device Manager.
1. Plug in the ESP32 usb connected board
1. Select Ports. Here you should see Silicon Labs CP210x USB UART bridge (COMx)

If you can, this will verify that the driver is present. 

Connection to ESP32 Board
-------------------------

1. Plug in your board.
1. In the Windows Start, use the search to find and start Terminal
1. Select the COM port (x) from port shown in the Ports list in the section above (e.g. COM3
1. With Speed set to 115200, connect
1. Press the reset button on the ESP32 board
1. You should see a response in the terminal window

Flash the firmware
-------------------
1. With a terminal program still connected, press reset while holding down the Boot button.
1. You should see the board respond in the terminal with "Waiting for download"
