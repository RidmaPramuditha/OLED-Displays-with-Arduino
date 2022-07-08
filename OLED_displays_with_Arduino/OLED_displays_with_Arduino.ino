#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 64, &Wire);

void setup() {

  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);

}

void loop() {

  oled.clearDisplay();
  oled.setTextColor(WHITE);

  oled.setTextSize(2);
  oled.setCursor(1, 0);
  oled.print("Mercury LABS");
  oled.setTextSize(2);
  oled.display();

}
