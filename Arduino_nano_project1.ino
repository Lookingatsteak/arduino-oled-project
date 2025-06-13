#include <Wire.h> // Enables I2C Communication
#include <Adafruit_GFX.h> // Graphics functions (text, shapes, bitmaps)
#include <Adafruit_SSD1306.h> // OLED control functions

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1 // Resets pin not used on Nano
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
