#ifndef M5StampC3LED_h
#define M5StampC3LED_h

#include <Adafruit_NeoPixel.h>

class M5StampC3LED {

public:
  M5StampC3LED();
  ~M5StampC3LED();

  void show(uint8_t r, uint8_t g, uint8_t b);
  void clear();

private:
  Adafruit_NeoPixel* pixels;

};

#endif
