# This file was automatically generated for projects
# without default 'CMakeLists.txt' file.

FILE(GLOB_RECURSE app_sources ${CMAKE_SOURCE_DIR}/src/*.*)

#idf_component_register(SRCS ${app_sources} REQUIRES driver)

idf_component_register(
    SRCS "main.c"
         "ble_client.c"
         "heart_rate.c"
         "ecg_sensor.c"
         "gatt_svr.c"
    INCLUDE_DIRS "."
    PRIV_INCLUDE_DIRS "$ENV{IDF_PATH}/components/bt/host/nimble/esp-hci/include"
)
