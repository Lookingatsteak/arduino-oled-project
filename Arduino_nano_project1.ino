#include <Wire.h> // Enables I2C Communication
#include <Adafruit_GFX.h> // Graphics functions (text, shapes, bitmaps)
#include <Adafruit_SSD1306.h> // OLED control functions

// Defining global variables
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET -1 // Resets pin not used on Nano
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); // Declaring an object

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColour(SSD1306_WHITE);
  display.setCursor(0, 20);
  display.print("You're ");
  display.print("Loved");

  display.display();

}

void loop() {
  // put your main code here, to run repeatedly:

}
