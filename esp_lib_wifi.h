#ifndef ESP_LIB_WIFI_H
#define ESP_LIB_WIFI_H

#include <stdbool.h>

#define MAXIMUM_RETRY 5
#define DEFAULT_AP_SSID "ESP32 AP"
#define DEFAULT_AP_PASS "password"

void init_wifi_sta(char *ssid, char *pass);
void init_wifi_ap();
bool get_wifi_status();


#endif 