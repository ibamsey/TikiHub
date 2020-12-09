Notes on Getting Started
=========================

These notes document the process followed to get started.

1. Follow the instructions https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html#
  1. In this installation there were a number of problems to overcome
  * When installing python be sure to tick the box to set the PATH env to include python
  * To install Eclipse, download the zip and extract. When it runs you need to ensure it is running with Java 11
  * First install the JDK11 from here https://www.oracle.com/java/technologies/javase-jdk15-downloads.html
  * Run the eclipse.exe from the install directory of eclipse. Set a workspace and check in this directory
    and find the \eclipse-workspace\.metadata Open the .log file. Ensure Eclipse is starting with Java 11. If not, 
    the esp-idf plugins wont work and eclipse wont start once they are installed.
    
