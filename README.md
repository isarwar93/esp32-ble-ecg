# esp32-ble-ecg

## To idf.py make available globally:
. $HOME/esp/esp-idf/export.sh


## To add user in the usergroup to avoid permission error

sudo usermod -a -G dialout $USER
Then log out and back in.

## Config the ESP32C6
Goto: idf.py menuconfig

then Component config -> Bluetooth -> Host -> NimBLE - BLE only

Enable BLE client features like NIMBLE_ROLE_CENTRAL.

## Following example is being used to create BLE Server

https://github.com/espressif/esp-idf/blob/master/examples/bluetooth/nimble/blehr/tutorial/blehr_walkthrough.md
