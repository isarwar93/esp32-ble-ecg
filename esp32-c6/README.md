I am using ESP32-C6 from DFrobot also called as Firebeetle-2. For code compilation and flashing using ESP-IDF. 

https://www.dfrobot.com/product-2771.html


As, I am using Ubuntu for the development, to connect with the serial port of the ESP32 following command is necessary:
sudo chmod a+rw /dev/ttyACM0

idf.py build ../medical-IoT/ecg-esp32-c6


nano ~/.bashrc
. $HOME/esp/export.sh

