#ifndef __ESP_IDF_PORT_H_
#define __ESP_IDF_PORT_H_

// From https://github.com/jgromes/RadioLib/blob/master/examples/NonArduino/ESP-IDF/main/EspHal.h
#include "EspHal.h"
#include "freertos/queue.h"

struct FakeESP {
  static uint32_t getFreeHeap() { return esp_get_free_heap_size(); }
};
static constexpr FakeESP ESP;

#define byte int8_t
#define NOT_AN_INTERRUPT RADIOLIB_NC
#define digitalPinToInterrupt(x) x
#define CHANGE		 	    (RISING|FALLING)

#endif
