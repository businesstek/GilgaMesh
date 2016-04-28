#include <gap.h>

#include "cmocka_includes.h"

#if defined(TESTING) && !defined(GAP_TEST)

void ble_initialize(void) {

}

void start_advertising(void) {

}

void start_scanning(void) {

}

void handle_gap_event(ble_evt_t * bleEvent) {
   check_expected_ptr(bleEvent);
}

void receiveBroadcastMessage(ble_evt_t * bleEvent) {
   check_expected_ptr(bleEvent);
}

void disconnect_from_peer(uint16_t connectionHandle) {
  check_expected(connectionHandle);
}

#endif