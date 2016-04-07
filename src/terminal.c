#include <terminal.h>

void terminal_initialize(void)
{
  simple_uart_config(RTS_PIN_NUMBER, TX_PIN_NUMBER, CTS_PIN_NUMBER, RX_PIN_NUMBER, HWFC);

  simple_uart_put(27);
  simple_uart_putstring((const uint8_t*) "[2J"); //Clear Screen
  simple_uart_put(27);
  simple_uart_putstring((const uint8_t*) "[H"); //Cursor to Home

  simple_uart_putstring((const uint8_t*) "--------------------------------------------------\r\n");
  simple_uart_putstring((const uint8_t*) "Terminal started, compile date: ");
  simple_uart_putstring((const uint8_t*) __DATE__);
  simple_uart_putstring((const uint8_t*) " ");
  simple_uart_putstring((const uint8_t*) __TIME__);
  simple_uart_putstring((const uint8_t*) ", v");
  simple_uart_putstring((const uint8_t*) int_to_string(APP_VERSION_MAIN));
  simple_uart_putstring((const uint8_t*) ".");
  simple_uart_putstring((const uint8_t*) int_to_string(APP_VERSION_SUB));
  simple_uart_putstring((const uint8_t*) ", nRF51s ");
  simple_uart_putstring((const uint8_t*) dfu_device_name_with_id());
  simple_uart_putstring((const uint8_t*) "\r\n--------------------------------------------------\r\n");
}

void terminal_process_input(void)
{

}