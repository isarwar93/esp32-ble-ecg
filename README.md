# esp32-ble-ecg

I am using ESP32-C6 from DFrobot also called as Firebeetle-2. For code compilation and flashing using ESP-IDF. 

https://www.dfrobot.com/product-2771.html

## To idf.py make available globally:
. $HOME/esp/esp-idf/export.sh


## To add user in the usergroup to avoid permission error
As, I am using Ubuntu for the development, to connect with the serial port of the ESP32 following command is necessary:

sudo usermod -a -G dialout $USER
Then log out and back in.

## Config the ESP32C6
Goto: idf.py menuconfig

then Component config -> Bluetooth -> Host -> NimBLE - BLE only

Enable BLE client features like NIMBLE_ROLE_CENTRAL.

## Following example is being used to create BLE Server

https://github.com/espressif/esp-idf/blob/master/examples/bluetooth/nimble/blehr/tutorial/blehr_walkthrough.md
