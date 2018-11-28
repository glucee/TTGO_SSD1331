#include "../lib/SSD1331/SSD1331.h"
#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  
  setup_ssd1331();
  
}

void loop()
{
  run_ssd1331(true, true, true);
}