#include "M5StampC3LED.h"

#define LED_PIN ((uint16_t)2)

M5StampC3LED::M5StampC3LED() {
  this->pixels = new Adafruit_NeoPixel(1, LED_PIN, NEO_GRB + NEO_KHZ800);
  this->pixels->begin();
}

M5StampC3LED::~M5StampC3LED() {
  this->clear();
  delete this->pixels;
}

void M5StampC3LED::show(uint8_t r, uint8_t g, uint8_t b) {
  this->pixels->setPixelColor(0, this->pixels->Color(r, g, b));
  this->pixels->show();
}

void M5StampC3LED::clear() {
  this->pixels->setPixelColor(0, this->pixels->Color(0, 0, 0));
  this->pixels->show();
  this->pixels->clear();
}
