#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define BUTTON_PIN 2  // Push button connected to pin 2

unsigned long startTime = 0;
unsigned long elapsedTime = 0;
bool running = false;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true); // Stop if OLED initialization fails
  }

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("STOPWATCH");
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200); // Debounce delay

    if (!running) {
      running = true;
      startTime = millis();
    } else {
      running = false;
      elapsedTime = millis() - startTime;
    }
  }

  display.clearDisplay();
  display.setCursor(0, 0);
  
  unsigned long time = running ? millis() - startTime : elapsedTime;
  
  int seconds = (time / 1000) % 60;
  int minutes = (time / 60000) % 60;
  
  display.print(minutes);
  display.print(":");
  if (seconds < 10) display.print("0");
  display.print(seconds);
  
  display.display();
}
