#ifndef SSD1331_H
#define SSD1331_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1331.h>
#include <SPI.h>
#include <Arduino.h>
#include <stdint.h>

// Color definitions
#define	BLACK           0x0000
#define	BLUE            0x001F
#define	RED             0xF800
#define	GREEN           0x07E0
#define CYAN            0x07FF
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0  
#define WHITE           0xFFFF

extern Adafruit_SSD1331 display;
extern void setup_ssd1331();
extern void testdrawtext(char *text, uint16_t color);
extern void run_ssd1331(bool sd_status, bool left_status, bool right_status);

#endif