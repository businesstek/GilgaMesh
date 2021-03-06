#include <system/ble_gap.h>

#include "cmocka_includes.h"

#if defined(TESTING) && !defined(GAP_TEST)

void check_advertising_status(char **parsedCommandArray, uint8_t numCommands) {
  check_expected_ptr(parsedCommandArray);
}

void check_scanning_status(char **parsedCommandArray, uint8_t numCommands) {
  check_expected_ptr(parsedCommandArray);
}

bool gap_initialize(void) {
  return true;
}

void set_advertising_data(void) { }
void start_advertising(void) { }
void start_scanning(void) { }
void disconnect_from_peer(uint16_t connectionHandle) { }
void handle_gap_event(ble_evt_t * bleEvent) { }

#endif