#include <pico/stdlib.h>
#include <gfxfont.h>

/**
 * This file was created based on the Roboto font from https://fonts.google.com/specimen/Roboto
 * and converted using the truetype2gfx online tool from https://rop.nl/truetype2gfx/
 * The font is subject to the Apache 2.0 license, a copy of which is included in the parent folder.
 */

const uint8_t Roboto_Light20pt7bBitmaps[] = {
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xF0,
  0xCF, 0x3C, 0xF3, 0xCE, 0x38, 0xE3, 0x8C, 0x00, 0xC0, 0xC0, 0x06, 0x06,
  0x00, 0x30, 0x30, 0x01, 0x03, 0x00, 0x18, 0x18, 0x00, 0xC0, 0xC0, 0x06,
  0x06, 0x00, 0x30, 0x30, 0x7F, 0xFF, 0xFB, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0,
  0x06, 0x06, 0x00, 0x30, 0x30, 0x01, 0x81, 0x80, 0x18, 0x18, 0x00, 0xC0,
  0xC0, 0x06, 0x06, 0x00, 0x30, 0x30, 0x3F, 0xFF, 0xF9, 0xFF, 0xFF, 0xC0,
  0xC0, 0xC0, 0x06, 0x06, 0x00, 0x30, 0x30, 0x01, 0x81, 0x80, 0x0C, 0x08,
  0x00, 0xC0, 0xC0, 0x06, 0x06, 0x00, 0x30, 0x30, 0x00, 0x00, 0xC0, 0x00,
  0x30, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x03, 0xF8, 0x03, 0xFF, 0x81, 0xE0,
  0xF0, 0xE0, 0x1C, 0x30, 0x03, 0x8C, 0x00, 0x67, 0x00, 0x19, 0xC0, 0x06,
  0x70, 0x01, 0x8C, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x0F, 0x00, 0x01,
  0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00,
  0x18, 0x00, 0x07, 0xE0, 0x01, 0xD8, 0x00, 0x76, 0x00, 0x19, 0xC0, 0x06,
  0x38, 0x03, 0x8F, 0x03, 0xC0, 0xFF, 0xE0, 0x0F, 0xE0, 0x00, 0xC0, 0x00,
  0x30, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0xC0, 0x00,
  0x1C, 0x70, 0x00, 0x1C, 0x1C, 0x04, 0x0C, 0x06, 0x07, 0x06, 0x03, 0x03,
  0x03, 0x01, 0x83, 0x01, 0x80, 0xC1, 0x80, 0xC0, 0x61, 0x80, 0x70, 0x71,
  0x80, 0x1C, 0x70, 0xC0, 0x07, 0xF0, 0xC0, 0x01, 0xF0, 0x60, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x30, 0xF8, 0x00, 0x30, 0xFE, 0x00,
  0x30, 0xE3, 0x80, 0x18, 0xE0, 0xE0, 0x18, 0x60, 0x30, 0x0C, 0x30, 0x18,
  0x0C, 0x18, 0x0C, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x03, 0x06, 0x03, 0x83,
  0x83, 0x00, 0xE3, 0x80, 0x00, 0x3F, 0x80, 0x00, 0x0F, 0x80, 0x03, 0xF0,
  0x00, 0x7F, 0xC0, 0x03, 0x87, 0x00, 0x38, 0x18, 0x01, 0x80, 0x60, 0x0C,
  0x03, 0x00, 0x60, 0x18, 0x03, 0x01, 0x80, 0x18, 0x1C, 0x00, 0xE1, 0xC0,
  0x03, 0x1C, 0x00, 0x0D, 0xC0, 0x00, 0x78, 0x00, 0x03, 0xC0, 0x00, 0x3F,
  0x00, 0x03, 0x9C, 0x00, 0x30, 0x70, 0x33, 0x81, 0x81, 0xB8, 0x06, 0x0D,
  0xC0, 0x18, 0xEC, 0x00, 0xE6, 0x60, 0x03, 0xF3, 0x80, 0x0F, 0x0C, 0x00,
  0x38, 0x70, 0x07, 0xC1, 0xE0, 0xFB, 0x07, 0xFF, 0x9C, 0x0F, 0xE0, 0x70,
  0xFF, 0xFF, 0x00, 0x80, 0x70, 0x30, 0x1C, 0x06, 0x03, 0x00, 0xC0, 0x60,
  0x18, 0x0C, 0x03, 0x00, 0xC0, 0x70, 0x18, 0x06, 0x01, 0x80, 0x60, 0x18,
  0x0E, 0x03, 0x80, 0xE0, 0x38, 0x06, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01,
  0xC0, 0x30, 0x0C, 0x03, 0x00, 0x60, 0x18, 0x03, 0x00, 0xC0, 0x18, 0x07,
  0x00, 0xC0, 0x1C, 0x02, 0x80, 0x60, 0x18, 0x06, 0x03, 0x80, 0xC0, 0x30,
  0x18, 0x06, 0x03, 0x01, 0x80, 0x60, 0x30, 0x18, 0x0C, 0x07, 0x03, 0x80,
  0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x07, 0x03, 0x81, 0x80, 0xC0, 0x60,
  0x30, 0x38, 0x18, 0x0C, 0x0C, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x01,
  0x00, 0x03, 0x00, 0x06, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x30, 0x1C, 0x61,
  0xFE, 0xDF, 0x8F, 0xF8, 0x03, 0x80, 0x0F, 0x00, 0x3B, 0x00, 0x63, 0x01,
  0x87, 0x07, 0x07, 0x0C, 0x04, 0x00, 0x00, 0x60, 0x00, 0x0C, 0x00, 0x01,
  0x80, 0x00, 0x30, 0x00, 0x06, 0x00, 0x00, 0xC0, 0x00, 0x18, 0x00, 0x03,
  0x00, 0x00, 0x60, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x30, 0x00, 0x06,
  0x00, 0x00, 0xC0, 0x00, 0x18, 0x00, 0x03, 0x00, 0x00, 0x60, 0x00, 0x0C,
  0x00, 0x01, 0x80, 0x00, 0x30, 0x00, 0x33, 0x33, 0x37, 0x6E, 0x40, 0xFF,
  0xFF, 0xC0, 0xFF, 0x80, 0x00, 0x18, 0x00, 0xC0, 0x0C, 0x00, 0x60, 0x06,
  0x00, 0x30, 0x01, 0x80, 0x18, 0x00, 0xC0, 0x0E, 0x00, 0x60, 0x03, 0x00,
  0x30, 0x01, 0x80, 0x0C, 0x00, 0xC0, 0x06, 0x00, 0x60, 0x03, 0x00, 0x18,
  0x01, 0x80, 0x0C, 0x00, 0xE0, 0x06, 0x00, 0x30, 0x03, 0x00, 0x18, 0x00,
  0xC0, 0x0C, 0x00, 0x60, 0x00, 0x03, 0xF0, 0x03, 0xFF, 0x01, 0xE1, 0xE0,
  0xE0, 0x1C, 0x30, 0x03, 0x1C, 0x00, 0xE6, 0x00, 0x19, 0x80, 0x06, 0x60,
  0x01, 0x98, 0x00, 0x6E, 0x00, 0x1B, 0x80, 0x07, 0xE0, 0x01, 0xF8, 0x00,
  0x7E, 0x00, 0x1F, 0x80, 0x07, 0xE0, 0x01, 0xF8, 0x00, 0x66, 0x00, 0x19,
  0x80, 0x06, 0x60, 0x01, 0x98, 0x00, 0x67, 0x00, 0x38, 0xC0, 0x0C, 0x38,
  0x07, 0x07, 0x87, 0x80, 0xFF, 0xC0, 0x0F, 0xC0, 0x00, 0x40, 0xF0, 0xFC,
  0xFB, 0xF0, 0xF0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00,
  0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
  0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x03, 0xF0, 0x03, 0xFF, 0x03,
  0xC1, 0xE0, 0xE0, 0x1C, 0x70, 0x03, 0x18, 0x00, 0xEE, 0x00, 0x3B, 0x80,
  0x0E, 0x00, 0x03, 0x80, 0x00, 0xC0, 0x00, 0x30, 0x00, 0x1C, 0x00, 0x06,
  0x00, 0x03, 0x00, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00,
  0x0C, 0x00, 0x06, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70,
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x07, 0xFF, 0xFD, 0xFF, 0xFF, 0x03, 0xF0,
  0x07, 0xFE, 0x0F, 0x03, 0x87, 0x00, 0xE7, 0x00, 0x33, 0x00, 0x1D, 0x80,
  0x07, 0xC0, 0x03, 0x00, 0x01, 0x80, 0x01, 0xC0, 0x00, 0xC0, 0x00, 0xE0,
  0x01, 0xE0, 0x1F, 0xC0, 0x0F, 0xF0, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x01,
  0xC0, 0x00, 0x60, 0x00, 0x3C, 0x00, 0x1E, 0x00, 0x0F, 0x80, 0x06, 0xC0,
  0x07, 0x70, 0x03, 0x1E, 0x07, 0x87, 0xFF, 0x00, 0x7E, 0x00, 0x00, 0x07,
  0x00, 0x00, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x37, 0x00, 0x03,
  0x70, 0x00, 0x67, 0x00, 0x0E, 0x70, 0x00, 0xC7, 0x00, 0x18, 0x70, 0x03,
  0x87, 0x00, 0x30, 0x70, 0x06, 0x07, 0x00, 0xE0, 0x70, 0x0C, 0x07, 0x01,
  0x80, 0x70, 0x38, 0x07, 0x03, 0x00, 0x70, 0x60, 0x07, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x07,
  0x00, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0x70, 0x1F, 0xFF, 0x8F, 0xFF,
  0xCE, 0x00, 0x07, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x60,
  0x00, 0x30, 0x00, 0x18, 0x00, 0x0C, 0xFC, 0x07, 0xFF, 0x87, 0x81, 0xE3,
  0x80, 0x38, 0x00, 0x0C, 0x00, 0x07, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00,
  0x60, 0x00, 0x3E, 0x00, 0x1B, 0x00, 0x0D, 0x80, 0x0E, 0xE0, 0x06, 0x30,
  0x07, 0x1E, 0x07, 0x03, 0xFF, 0x00, 0x7E, 0x00, 0x00, 0x78, 0x01, 0xFC,
  0x01, 0xE0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x00, 0xC0,
  0x00, 0x60, 0x00, 0x70, 0x00, 0x30, 0xFC, 0x19, 0xFF, 0x8D, 0xC1, 0xE7,
  0x80, 0x33, 0x80, 0x1D, 0x80, 0x06, 0xC0, 0x03, 0xE0, 0x00, 0xF0, 0x00,
  0x78, 0x00, 0x3C, 0x00, 0x3E, 0x00, 0x1D, 0x80, 0x0C, 0xE0, 0x0E, 0x30,
  0x0E, 0x1E, 0x0F, 0x03, 0xFE, 0x00, 0x7E, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x03, 0x00, 0x00, 0x60, 0x00, 0x18, 0x00, 0x03, 0x00, 0x00,
  0xC0, 0x00, 0x18, 0x00, 0x07, 0x00, 0x00, 0xC0, 0x00, 0x38, 0x00, 0x06,
  0x00, 0x01, 0xC0, 0x00, 0x30, 0x00, 0x06, 0x00, 0x01, 0x80, 0x00, 0x30,
  0x00, 0x0E, 0x00, 0x01, 0x80, 0x00, 0x70, 0x00, 0x0C, 0x00, 0x03, 0x80,
  0x00, 0x60, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x00, 0x60, 0x00, 0x1C, 0x00,
  0x07, 0x00, 0x00, 0x03, 0xF0, 0x03, 0xFF, 0x01, 0xC0, 0xE0, 0xE0, 0x1C,
  0x70, 0x03, 0x9C, 0x00, 0xE6, 0x00, 0x19, 0x80, 0x06, 0x60, 0x01, 0x98,
  0x00, 0x63, 0x00, 0x30, 0xE0, 0x1C, 0x1C, 0x0E, 0x03, 0xFF, 0x00, 0xFF,
  0xC0, 0x70, 0x38, 0x30, 0x03, 0x18, 0x00, 0x66, 0x00, 0x1F, 0x80, 0x07,
  0xC0, 0x00, 0xF8, 0x00, 0x7E, 0x00, 0x1D, 0x80, 0x06, 0x70, 0x03, 0x8F,
  0x03, 0xC1, 0xFF, 0xE0, 0x1F, 0xE0, 0x03, 0xF0, 0x07, 0xFE, 0x07, 0x07,
  0x87, 0x01, 0xC7, 0x00, 0x73, 0x00, 0x19, 0x80, 0x0F, 0xC0, 0x03, 0xC0,
  0x01, 0xE0, 0x00, 0xF0, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x1B, 0x00, 0x1D,
  0xC0, 0x0E, 0x70, 0x0F, 0x3C, 0x1D, 0x8F, 0xFC, 0xC1, 0xF8, 0x60, 0x00,
  0x70, 0x00, 0x30, 0x00, 0x18, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x1C, 0x00,
  0x7C, 0x03, 0xF8, 0x01, 0xF0, 0x00, 0x6F, 0x60, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x6F, 0x60, 0x33, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0C, 0x63, 0x18, 0xCE, 0x67, 0x10, 0x00, 0x01,
  0x00, 0x07, 0x00, 0x1E, 0x00, 0x78, 0x01, 0xE0, 0x07, 0x80, 0x1E, 0x00,
  0x78, 0x00, 0xE0, 0x00, 0x78, 0x00, 0x1E, 0x00, 0x07, 0x80, 0x01, 0xE0,
  0x00, 0x78, 0x00, 0x1E, 0x00, 0x07, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xF0, 0x00, 0x7C, 0x00, 0x1F, 0x00,
  0x03, 0xC0, 0x00, 0xF0, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0x00, 0x0F,
  0x00, 0x3C, 0x00, 0xF0, 0x03, 0xC0, 0x1F, 0x00, 0x7C, 0x00, 0xF0, 0x00,
  0x80, 0x00, 0x0F, 0xC0, 0xFF, 0xC7, 0x87, 0x98, 0x06, 0xE0, 0x1F, 0x00,
  0x3C, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x00, 0x70, 0x01, 0x80, 0x0E, 0x00,
  0x70, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x03, 0x00, 0x0C, 0x00, 0x70, 0x01,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00,
  0x70, 0x01, 0xC0, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0x00, 0x00,
  0xF8, 0x07, 0xC0, 0x01, 0xE0, 0x00, 0xE0, 0x03, 0x80, 0x00, 0x30, 0x07,
  0x00, 0x00, 0x18, 0x0E, 0x00, 0x00, 0x1C, 0x1C, 0x00, 0x00, 0x0C, 0x18,
  0x01, 0xF0, 0x04, 0x38, 0x07, 0xFC, 0x06, 0x30, 0x0E, 0x0C, 0x06, 0x30,
  0x1C, 0x0C, 0x06, 0x60, 0x18, 0x0C, 0x02, 0x60, 0x30, 0x0C, 0x03, 0x60,
  0x30, 0x0C, 0x03, 0x60, 0x70, 0x0C, 0x03, 0x60, 0x60, 0x0C, 0x03, 0x40,
  0x60, 0x0C, 0x03, 0x40, 0x60, 0x0C, 0x02, 0x40, 0x60, 0x0C, 0x06, 0x40,
  0x60, 0x18, 0x06, 0x60, 0x60, 0x18, 0x06, 0x60, 0x60, 0x38, 0x0C, 0x60,
  0x70, 0x3C, 0x0C, 0x60, 0x38, 0xEC, 0x18, 0x60, 0x3F, 0xC7, 0xF0, 0x30,
  0x0F, 0x03, 0xE0, 0x30, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x18,
  0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x04, 0x00, 0x01, 0xF0, 0x1C, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x18, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x3C, 0x00, 0x00, 0x66, 0x00, 0x00, 0x66, 0x00, 0x00, 0xE7, 0x00,
  0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x01, 0xC3, 0x80, 0x01, 0x81, 0x80,
  0x01, 0x81, 0x80, 0x03, 0x00, 0xC0, 0x03, 0x00, 0xC0, 0x07, 0x00, 0xE0,
  0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x0E, 0x00, 0x70, 0x0F, 0xFF, 0xF0,
  0x0F, 0xFF, 0xF0, 0x1C, 0x00, 0x38, 0x18, 0x00, 0x18, 0x38, 0x00, 0x1C,
  0x30, 0x00, 0x0C, 0x30, 0x00, 0x0C, 0x70, 0x00, 0x0E, 0x60, 0x00, 0x06,
  0xE0, 0x00, 0x07, 0xFF, 0xF0, 0x3F, 0xFF, 0x0C, 0x01, 0xE3, 0x00, 0x1C,
  0xC0, 0x03, 0x30, 0x00, 0xEC, 0x00, 0x3B, 0x00, 0x0E, 0xC0, 0x03, 0xB0,
  0x00, 0xEC, 0x00, 0x33, 0x00, 0x1C, 0xC0, 0x1E, 0x3F, 0xFE, 0x0F, 0xFF,
  0xC3, 0x00, 0x3C, 0xC0, 0x03, 0xB0, 0x00, 0x6C, 0x00, 0x1F, 0x00, 0x07,
  0xC0, 0x01, 0xF0, 0x00, 0x7C, 0x00, 0x1F, 0x00, 0x06, 0xC0, 0x03, 0xB0,
  0x03, 0xCF, 0xFF, 0xE3, 0xFF, 0xE0, 0x00, 0xFE, 0x00, 0x3F, 0xFC, 0x03,
  0xC0, 0xF0, 0x38, 0x01, 0xC3, 0x80, 0x07, 0x18, 0x00, 0x19, 0xC0, 0x00,
  0xCC, 0x00, 0x07, 0x60, 0x00, 0x1B, 0x00, 0x00, 0x38, 0x00, 0x01, 0xC0,
  0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x00, 0x00,
  0xE0, 0x00, 0x07, 0x00, 0x00, 0x18, 0x00, 0x00, 0xC0, 0x00, 0x36, 0x00,
  0x03, 0xB8, 0x00, 0x18, 0xC0, 0x00, 0xC7, 0x00, 0x0E, 0x1C, 0x00, 0xE0,
  0x78, 0x1E, 0x01, 0xFF, 0xE0, 0x03, 0xFC, 0x00, 0xFF, 0xE0, 0x1F, 0xFF,
  0x03, 0x00, 0x78, 0x60, 0x03, 0x8C, 0x00, 0x39, 0x80, 0x03, 0x30, 0x00,
  0x76, 0x00, 0x06, 0xC0, 0x00, 0xF8, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x00,
  0x3C, 0x00, 0x07, 0x80, 0x00, 0xF0, 0x00, 0x1E, 0x00, 0x03, 0xC0, 0x00,
  0x78, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x00, 0x7C, 0x00, 0x0D, 0x80, 0x03,
  0xB0, 0x00, 0x76, 0x00, 0x1C, 0xC0, 0x07, 0x18, 0x03, 0xC3, 0xFF, 0xE0,
  0x7F, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x03, 0x80, 0x00,
  0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x38,
  0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x3F, 0xFF, 0xCF, 0xFF,
  0xF3, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00,
  0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x38,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
  0x03, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00,
  0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0xFF, 0xFF, 0x3F,
  0xFF, 0xCE, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00,
  0x03, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00,
  0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0x01, 0xFC, 0x00,
  0x3F, 0xFC, 0x03, 0xC0, 0xF0, 0x38, 0x01, 0xC3, 0x80, 0x07, 0x38, 0x00,
  0x39, 0x80, 0x00, 0xCC, 0x00, 0x07, 0xE0, 0x00, 0x06, 0x00, 0x00, 0x30,
  0x00, 0x01, 0x80, 0x00, 0x0C, 0x00, 0x00, 0x60, 0x00, 0x03, 0x00, 0x00,
  0x18, 0x03, 0xFF, 0xC0, 0x1F, 0xFE, 0x00, 0x01, 0xF8, 0x00, 0x0F, 0xC0,
  0x00, 0x76, 0x00, 0x03, 0xB8, 0x00, 0x1C, 0xC0, 0x00, 0xE7, 0x00, 0x07,
  0x1C, 0x00, 0x78, 0x78, 0x0F, 0x81, 0xFF, 0xF0, 0x03, 0xFE, 0x00, 0xE0,
  0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01,
  0xF0, 0x00, 0x0F, 0x80, 0x00, 0x7C, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00,
  0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00,
  0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0x7C,
  0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00,
  0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x80, 0x00,
  0xC0, 0x00, 0x60, 0x00, 0x30, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x06, 0x00,
  0x03, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x30, 0x00, 0x18,
  0x00, 0x0C, 0x00, 0x06, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00,
  0x60, 0x00, 0x3C, 0x00, 0x3F, 0x00, 0x1F, 0x80, 0x0C, 0xC0, 0x0E, 0x70,
  0x07, 0x1E, 0x0F, 0x07, 0xFF, 0x00, 0xFE, 0x00, 0xC0, 0x00, 0xEC, 0x00,
  0x1C, 0xC0, 0x03, 0x8C, 0x00, 0x70, 0xC0, 0x0E, 0x0C, 0x01, 0xC0, 0xC0,
  0x38, 0x0C, 0x07, 0x00, 0xC0, 0xE0, 0x0C, 0x1C, 0x00, 0xC3, 0x80, 0x0C,
  0x70, 0x00, 0xCF, 0x00, 0x0C, 0xF0, 0x00, 0xDF, 0x80, 0x0F, 0x9C, 0x00,
  0xF0, 0xE0, 0x0E, 0x07, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x80, 0xC0, 0x1C,
  0x0C, 0x00, 0xE0, 0xC0, 0x07, 0x0C, 0x00, 0x30, 0xC0, 0x03, 0x8C, 0x00,
  0x1C, 0xC0, 0x00, 0xEC, 0x00, 0x07, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00,
  0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0,
  0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03,
  0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00,
  0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70,
  0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0x00, 0x00, 0xFE, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x07, 0xFC, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x3F, 0xD8,
  0x00, 0x06, 0xFB, 0x00, 0x01, 0xDF, 0x70, 0x00, 0x33, 0xE6, 0x00, 0x06,
  0x7C, 0xE0, 0x01, 0x8F, 0x8C, 0x00, 0x31, 0xF1, 0x80, 0x0E, 0x3E, 0x38,
  0x01, 0x87, 0xC3, 0x00, 0x70, 0xF8, 0x70, 0x0C, 0x1F, 0x06, 0x01, 0x83,
  0xE0, 0xC0, 0x70, 0x7C, 0x0C, 0x0C, 0x0F, 0x81, 0x83, 0x81, 0xF0, 0x38,
  0x60, 0x3E, 0x03, 0x0C, 0x07, 0xC0, 0x73, 0x00, 0xF8, 0x06, 0x60, 0x1F,
  0x00, 0xDC, 0x03, 0xE0, 0x1F, 0x00, 0x7C, 0x01, 0xE0, 0x0F, 0x80, 0x38,
  0x01, 0xF0, 0x03, 0x00, 0x30, 0xC0, 0x00, 0x3E, 0x00, 0x03, 0xF0, 0x00,
  0x3F, 0x00, 0x03, 0xF8, 0x00, 0x3D, 0xC0, 0x03, 0xCC, 0x00, 0x3C, 0xE0,
  0x03, 0xC7, 0x00, 0x3C, 0x30, 0x03, 0xC3, 0x80, 0x3C, 0x1C, 0x03, 0xC0,
  0xC0, 0x3C, 0x0E, 0x03, 0xC0, 0x70, 0x3C, 0x03, 0x03, 0xC0, 0x38, 0x3C,
  0x01, 0xC3, 0xC0, 0x0C, 0x3C, 0x00, 0xE3, 0xC0, 0x07, 0x3C, 0x00, 0x33,
  0xC0, 0x03, 0xBC, 0x00, 0x1F, 0xC0, 0x00, 0xFC, 0x00, 0x0F, 0xC0, 0x00,
  0x7C, 0x00, 0x03, 0x00, 0xFC, 0x00, 0x1F, 0xFE, 0x00, 0xF0, 0x3C, 0x07,
  0x00, 0x38, 0x38, 0x00, 0x70, 0xC0, 0x00, 0xC7, 0x00, 0x03, 0x98, 0x00,
  0x06, 0x60, 0x00, 0x1B, 0x80, 0x00, 0x7E, 0x00, 0x01, 0xF8, 0x00, 0x07,
  0xE0, 0x00, 0x1F, 0x80, 0x00, 0x7E, 0x00, 0x01, 0xF8, 0x00, 0x07, 0xE0,
  0x00, 0x1F, 0x80, 0x00, 0x7E, 0x00, 0x01, 0xD8, 0x00, 0x06, 0x60, 0x00,
  0x19, 0xC0, 0x00, 0xE3, 0x00, 0x03, 0x0E, 0x00, 0x1C, 0x1C, 0x00, 0xE0,
  0x3C, 0x0F, 0x00, 0x7F, 0xF8, 0x00, 0x7F, 0x80, 0xFF, 0xFC, 0x1F, 0xFF,
  0xE3, 0x80, 0x1E, 0x70, 0x00, 0xEE, 0x00, 0x0D, 0xC0, 0x01, 0xF8, 0x00,
  0x1F, 0x00, 0x03, 0xE0, 0x00, 0x7C, 0x00, 0x0F, 0x80, 0x01, 0xF0, 0x00,
  0x7E, 0x00, 0x0F, 0xC0, 0x03, 0xB8, 0x01, 0xE7, 0xFF, 0xF8, 0xFF, 0xFC,
  0x1C, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x0E, 0x00, 0x01, 0xC0, 0x00,
  0x38, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00, 0x1C, 0x00, 0x03, 0x80, 0x00,
  0x70, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x1F, 0xFE, 0x00, 0xF0, 0x3C, 0x07,
  0x00, 0x38, 0x38, 0x00, 0x70, 0xC0, 0x00, 0xC7, 0x00, 0x03, 0x98, 0x00,
  0x06, 0x60, 0x00, 0x1B, 0x80, 0x00, 0x6E, 0x00, 0x01, 0xF0, 0x00, 0x07,
  0xC0, 0x00, 0x1F, 0x00, 0x00, 0x7C, 0x00, 0x01, 0xF0, 0x00, 0x07, 0xC0,
  0x00, 0x1F, 0x80, 0x00, 0x7E, 0x00, 0x01, 0x98, 0x00, 0x06, 0x60, 0x00,
  0x19, 0xC0, 0x00, 0xE3, 0x00, 0x03, 0x0E, 0x00, 0x1C, 0x1C, 0x00, 0xE0,
  0x3C, 0x0F, 0x00, 0x7F, 0xF8, 0x00, 0x3F, 0xE0, 0x00, 0x01, 0xC0, 0x00,
  0x03, 0xC0, 0x00, 0x07, 0x80, 0x00, 0x06, 0xFF, 0xF0, 0x1F, 0xFF, 0xC3,
  0x00, 0x3C, 0x60, 0x01, 0xCC, 0x00, 0x19, 0x80, 0x03, 0xB0, 0x00, 0x76,
  0x00, 0x06, 0xC0, 0x00, 0xD8, 0x00, 0x3B, 0x00, 0x07, 0x60, 0x00, 0xCC,
  0x00, 0x39, 0x80, 0x1E, 0x3F, 0xFF, 0x87, 0xFF, 0x80, 0xC0, 0x38, 0x18,
  0x03, 0x03, 0x00, 0x70, 0x60, 0x07, 0x0C, 0x00, 0xE1, 0x80, 0x0E, 0x30,
  0x00, 0xC6, 0x00, 0x1C, 0xC0, 0x01, 0x98, 0x00, 0x3B, 0x00, 0x03, 0x60,
  0x00, 0x70, 0x03, 0xF8, 0x00, 0xFF, 0xF0, 0x3E, 0x07, 0x83, 0x80, 0x1C,
  0x70, 0x00, 0xC6, 0x00, 0x0E, 0xE0, 0x00, 0x66, 0x00, 0x06, 0x60, 0x00,
  0x07, 0x00, 0x00, 0x30, 0x00, 0x03, 0xC0, 0x00, 0x0F, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0xFC, 0x00, 0x00, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x0C, 0x00,
  0x00, 0x60, 0x00, 0x06, 0xC0, 0x00, 0x6C, 0x00, 0x07, 0xE0, 0x00, 0x6E,
  0x00, 0x0E, 0x70, 0x01, 0xE3, 0xC0, 0x7C, 0x0F, 0xFF, 0x00, 0x3F, 0xC0,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1C, 0x00, 0x00, 0xE0, 0x00, 0x07,
  0x00, 0x00, 0x38, 0x00, 0x01, 0xC0, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00,
  0x03, 0x80, 0x00, 0x1C, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x00, 0x00, 0x38,
  0x00, 0x01, 0xC0, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x03, 0x80, 0x00,
  0x1C, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x00, 0x00, 0x38, 0x00, 0x01, 0xC0,
  0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x00, 0x00,
  0xE0, 0x00, 0xE0, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x7E, 0x00, 0x07,
  0xE0, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00,
  0x7E, 0x00, 0x07, 0xE0, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x7E, 0x00,
  0x07, 0xE0, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x7E, 0x00, 0x07, 0xE0,
  0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x76, 0x00, 0x06, 0x60, 0x00, 0x67,
  0x00, 0x0E, 0x38, 0x01, 0xC1, 0xE0, 0x78, 0x0F, 0xFF, 0x00, 0x3F, 0x80,
  0xC0, 0x00, 0x0F, 0x80, 0x00, 0x76, 0x00, 0x01, 0xD8, 0x00, 0x06, 0x70,
  0x00, 0x38, 0xC0, 0x00, 0xC3, 0x00, 0x03, 0x0E, 0x00, 0x1C, 0x18, 0x00,
  0x60, 0x70, 0x01, 0x81, 0xC0, 0x0E, 0x03, 0x00, 0x30, 0x0E, 0x01, 0xC0,
  0x18, 0x07, 0x00, 0x60, 0x18, 0x01, 0xC0, 0xE0, 0x03, 0x03, 0x00, 0x0C,
  0x0C, 0x00, 0x38, 0x70, 0x00, 0x61, 0x80, 0x01, 0x86, 0x00, 0x03, 0x38,
  0x00, 0x0C, 0xC0, 0x00, 0x33, 0x00, 0x00, 0x78, 0x00, 0x01, 0xE0, 0x00,
  0x07, 0x80, 0x00, 0x0C, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0xB0, 0x00, 0xE0,
  0x01, 0xD8, 0x00, 0x70, 0x00, 0xCC, 0x00, 0x3C, 0x00, 0x67, 0x00, 0x36,
  0x00, 0x71, 0x80, 0x1B, 0x00, 0x38, 0xC0, 0x0D, 0xC0, 0x18, 0x60, 0x0E,
  0x60, 0x0C, 0x38, 0x06, 0x30, 0x0E, 0x0C, 0x03, 0x18, 0x07, 0x06, 0x03,
  0x86, 0x03, 0x03, 0x01, 0x83, 0x01, 0x81, 0xC0, 0xC1, 0x81, 0xC0, 0x60,
  0x60, 0xE0, 0xE0, 0x30, 0x60, 0x30, 0x60, 0x18, 0x30, 0x18, 0x30, 0x0E,
  0x18, 0x0C, 0x38, 0x03, 0x1C, 0x03, 0x1C, 0x01, 0x8C, 0x01, 0x8C, 0x00,
  0xC6, 0x00, 0xC6, 0x00, 0x73, 0x00, 0x73, 0x00, 0x1B, 0x00, 0x1B, 0x80,
  0x0D, 0x80, 0x0D, 0x80, 0x06, 0xC0, 0x06, 0xC0, 0x03, 0x60, 0x01, 0xE0,
  0x00, 0xE0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x70, 0x00, 0x38, 0x00, 0x38,
  0x00, 0xE0, 0x00, 0x3D, 0xC0, 0x00, 0xE3, 0x80, 0x07, 0x06, 0x00, 0x38,
  0x1C, 0x00, 0xE0, 0x38, 0x07, 0x00, 0x60, 0x38, 0x01, 0xC0, 0xE0, 0x03,
  0x87, 0x00, 0x06, 0x38, 0x00, 0x1C, 0xE0, 0x00, 0x3F, 0x00, 0x00, 0x78,
  0x00, 0x01, 0xE0, 0x00, 0x07, 0x80, 0x00, 0x3F, 0x00, 0x00, 0xDC, 0x00,
  0x07, 0x38, 0x00, 0x38, 0x70, 0x00, 0xC1, 0xC0, 0x07, 0x03, 0x80, 0x38,
  0x07, 0x00, 0xC0, 0x1C, 0x07, 0x00, 0x38, 0x38, 0x00, 0x70, 0xE0, 0x01,
  0xC7, 0x00, 0x03, 0xB8, 0x00, 0x07, 0xF0, 0x00, 0x0E, 0xE0, 0x00, 0x38,
  0xE0, 0x00, 0x61, 0xC0, 0x01, 0xC1, 0xC0, 0x03, 0x01, 0x80, 0x0E, 0x03,
  0x80, 0x38, 0x03, 0x00, 0x70, 0x07, 0x01, 0xC0, 0x06, 0x03, 0x00, 0x0E,
  0x0E, 0x00, 0x0E, 0x18, 0x00, 0x0C, 0x70, 0x00, 0x1C, 0xC0, 0x00, 0x1B,
  0x80, 0x00, 0x3E, 0x00, 0x00, 0x38, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0,
  0x00, 0x01, 0xC0, 0x00, 0x03, 0x80, 0x00, 0x07, 0x00, 0x00, 0x0E, 0x00,
  0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x00,
  0x01, 0xC0, 0x00, 0xFF, 0xFF, 0xEF, 0xFF, 0xFE, 0x00, 0x00, 0xE0, 0x00,
  0x1C, 0x00, 0x03, 0x80, 0x00, 0x30, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00,
  0x0C, 0x00, 0x01, 0xC0, 0x00, 0x38, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00,
  0x0E, 0x00, 0x00, 0xC0, 0x00, 0x1C, 0x00, 0x03, 0x80, 0x00, 0x30, 0x00,
  0x07, 0x00, 0x00, 0xE0, 0x00, 0x0C, 0x00, 0x01, 0xC0, 0x00, 0x38, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x0E, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C,
  0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C,
  0x30, 0xC3, 0x0C, 0x30, 0xFF, 0xF0, 0xC0, 0x03, 0x80, 0x06, 0x00, 0x18,
  0x00, 0x30, 0x00, 0xC0, 0x03, 0x80, 0x06, 0x00, 0x18, 0x00, 0x30, 0x00,
  0xC0, 0x03, 0x80, 0x06, 0x00, 0x18, 0x00, 0x30, 0x00, 0xC0, 0x03, 0x80,
  0x06, 0x00, 0x18, 0x00, 0x70, 0x00, 0xC0, 0x03, 0x00, 0x06, 0x00, 0x18,
  0x00, 0x70, 0x00, 0xC0, 0x03, 0x00, 0x06, 0x00, 0x18, 0x00, 0x70, 0xFF,
  0xF0, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C,
  0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0C,
  0x30, 0xC3, 0xFF, 0xF0, 0x03, 0x00, 0x38, 0x01, 0xE0, 0x0F, 0x00, 0xDC,
  0x06, 0x60, 0x73, 0x03, 0x0C, 0x18, 0x61, 0x83, 0x8C, 0x0C, 0xE0, 0x66,
  0x01, 0xF0, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xE1, 0xC3, 0x87, 0x0C,
  0x07, 0xF0, 0x1F, 0xFC, 0x3C, 0x1E, 0x70, 0x0E, 0x60, 0x07, 0xE0, 0x07,
  0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x07, 0xFF, 0x1F, 0xFF, 0x3C, 0x03,
  0x70, 0x03, 0xE0, 0x03, 0xC0, 0x03, 0xC0, 0x07, 0xE0, 0x07, 0xE0, 0x0F,
  0x70, 0x3B, 0x3F, 0xF3, 0x0F, 0xC3, 0xC0, 0x00, 0x60, 0x00, 0x30, 0x00,
  0x18, 0x00, 0x0C, 0x00, 0x06, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0xC3,
  0xF0, 0x67, 0xFC, 0x37, 0x07, 0x1E, 0x01, 0xCE, 0x00, 0x77, 0x00, 0x1B,
  0x00, 0x0D, 0x80, 0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x00,
  0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x0D, 0xC0, 0x06, 0xE0, 0x07, 0x78,
  0x07, 0x37, 0x07, 0x19, 0xFF, 0x0C, 0x3F, 0x00, 0x07, 0xF0, 0x0F, 0xFC,
  0x3C, 0x1E, 0x30, 0x06, 0x60, 0x07, 0x60, 0x03, 0xE0, 0x03, 0xC0, 0x00,
  0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00,
  0xE0, 0x03, 0xE0, 0x03, 0x60, 0x03, 0x30, 0x06, 0x3C, 0x1E, 0x1F, 0xF8,
  0x07, 0xE0, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x30, 0x00,
  0x18, 0x00, 0x0C, 0x00, 0x06, 0x00, 0x03, 0x07, 0xE1, 0x87, 0xFC, 0xC7,
  0x07, 0x67, 0x00, 0xF7, 0x00, 0x3B, 0x00, 0x1D, 0x80, 0x07, 0xC0, 0x03,
  0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x00,
  0x0D, 0x80, 0x06, 0xC0, 0x07, 0x70, 0x03, 0x9C, 0x03, 0xC7, 0x07, 0x61,
  0xFF, 0x30, 0x7E, 0x18, 0x03, 0xE0, 0x07, 0xFC, 0x07, 0x07, 0x07, 0x01,
  0xC7, 0x00, 0x73, 0x00, 0x1B, 0x80, 0x0D, 0x80, 0x06, 0xC0, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x0C, 0x00, 0x06, 0x00, 0x03, 0x00, 0x01,
  0xC0, 0x00, 0x70, 0x02, 0x1C, 0x01, 0x87, 0x03, 0x81, 0xFF, 0x80, 0x3F,
  0x00, 0x01, 0xF0, 0x7F, 0x07, 0x00, 0xE0, 0x0C, 0x00, 0xC0, 0x0C, 0x00,
  0xC0, 0x0C, 0x0F, 0xFE, 0xFF, 0xE0, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00,
  0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00,
  0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x07, 0xE1,
  0x87, 0xFC, 0xC7, 0x07, 0x67, 0x00, 0xF7, 0x00, 0x3B, 0x00, 0x1D, 0x80,
  0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00, 0x3E,
  0x00, 0x1F, 0x00, 0x0D, 0x80, 0x06, 0xC0, 0x07, 0x70, 0x03, 0x9C, 0x03,
  0xC7, 0x07, 0x61, 0xFF, 0x30, 0x7E, 0x18, 0x00, 0x1C, 0x00, 0x0E, 0x00,
  0x06, 0x20, 0x07, 0x38, 0x03, 0x8F, 0x07, 0x81, 0xFF, 0x80, 0x3F, 0x00,
  0xC0, 0x01, 0x80, 0x03, 0x00, 0x06, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x30,
  0x00, 0x60, 0x00, 0xC3, 0xF1, 0x9F, 0xF3, 0x70, 0x77, 0x80, 0x7E, 0x00,
  0xFC, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1E,
  0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80,
  0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x60, 0xFF, 0x80, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00,
  0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00,
  0xC0, 0x0E, 0xC0, 0x1C, 0xC0, 0x38, 0xC0, 0x70, 0xC0, 0xE0, 0xC1, 0xC0,
  0xC3, 0x80, 0xC7, 0x00, 0xCE, 0x00, 0xDE, 0x00, 0xFF, 0x00, 0xF3, 0x80,
  0xE1, 0x80, 0xC1, 0xC0, 0xC0, 0xE0, 0xC0, 0x70, 0xC0, 0x30, 0xC0, 0x38,
  0xC0, 0x1C, 0xC0, 0x0E, 0xC0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC3, 0xF0, 0x1F, 0x86, 0x7F, 0xE3,
  0xFF, 0x37, 0x07, 0x38, 0x3D, 0xE0, 0x1D, 0x80, 0x6E, 0x00, 0x78, 0x03,
  0xF0, 0x03, 0x80, 0x1F, 0x80, 0x1C, 0x00, 0x78, 0x00, 0xE0, 0x03, 0xC0,
  0x07, 0x00, 0x1E, 0x00, 0x38, 0x00, 0xF0, 0x01, 0xC0, 0x07, 0x80, 0x0E,
  0x00, 0x3C, 0x00, 0x70, 0x01, 0xE0, 0x03, 0x80, 0x0F, 0x00, 0x1C, 0x00,
  0x78, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0x00, 0x1E, 0x00, 0x38, 0x00, 0xF0,
  0x01, 0xC0, 0x07, 0x80, 0x0E, 0x00, 0x3C, 0x00, 0x70, 0x01, 0x80, 0xC3,
  0xF1, 0x9F, 0xF3, 0x70, 0x77, 0x80, 0x7E, 0x00, 0xFC, 0x00, 0xF0, 0x01,
  0xE0, 0x03, 0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78,
  0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1E, 0x00,
  0x3C, 0x00, 0x60, 0x03, 0xF0, 0x03, 0xFF, 0x01, 0xC1, 0xE0, 0xE0, 0x1C,
  0x70, 0x03, 0x98, 0x00, 0x6E, 0x00, 0x1F, 0x00, 0x03, 0xC0, 0x00, 0xF0,
  0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0xC0, 0x00, 0xF0, 0x00, 0x3E, 0x00,
  0x1D, 0x80, 0x06, 0x70, 0x03, 0x8E, 0x01, 0xC1, 0xC0, 0xE0, 0x3F, 0xF0,
  0x03, 0xF0, 0x00, 0xC3, 0xF0, 0x67, 0xFC, 0x37, 0x07, 0x1E, 0x01, 0xCE,
  0x00, 0x77, 0x00, 0x1B, 0x00, 0x0D, 0x80, 0x06, 0xC0, 0x03, 0xE0, 0x01,
  0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x1B, 0x00, 0x0D, 0x80,
  0x06, 0xE0, 0x07, 0x78, 0x07, 0x37, 0x07, 0x19, 0xFF, 0x0C, 0x3F, 0x06,
  0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x60, 0x00, 0x30, 0x00,
  0x18, 0x00, 0x0C, 0x00, 0x00, 0x07, 0xE1, 0x87, 0xFC, 0xC7, 0x07, 0x67,
  0x00, 0xF7, 0x00, 0x3B, 0x00, 0x1D, 0x80, 0x0F, 0xC0, 0x07, 0xE0, 0x03,
  0xF0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7E, 0x00, 0x3F, 0x00, 0x1D, 0x80,
  0x0E, 0xC0, 0x07, 0x70, 0x03, 0x9C, 0x03, 0xC7, 0x07, 0xE1, 0xFF, 0x70,
  0x7E, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01,
  0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0xC7, 0xE7, 0xF6, 0x1E, 0x0E,
  0x07, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01,
  0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x00, 0x07, 0xE0, 0x1F, 0xF8, 0x38,
  0x1C, 0x70, 0x0E, 0x60, 0x06, 0x60, 0x07, 0x60, 0x00, 0x70, 0x00, 0x3C,
  0x00, 0x1F, 0xC0, 0x07, 0xF8, 0x00, 0x7C, 0x00, 0x0E, 0x00, 0x06, 0x00,
  0x07, 0xC0, 0x07, 0xE0, 0x07, 0x60, 0x06, 0x78, 0x1E, 0x1F, 0xFC, 0x07,
  0xF0, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x3F, 0xFF, 0xFC, 0x70, 0x1C,
  0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01,
  0xC0, 0x70, 0x1C, 0x07, 0x00, 0xC0, 0x38, 0x0F, 0xC0, 0xF0, 0xC0, 0x07,
  0x80, 0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0,
  0x03, 0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78, 0x00,
  0xF0, 0x01, 0xE0, 0x03, 0xE0, 0x0F, 0xC0, 0x3D, 0xC0, 0xF9, 0xFF, 0xB1,
  0xFC, 0x60, 0xC0, 0x01, 0xF0, 0x01, 0xD8, 0x00, 0xCC, 0x00, 0x67, 0x00,
  0x61, 0x80, 0x30, 0xC0, 0x38, 0x30, 0x18, 0x18, 0x0C, 0x0E, 0x0E, 0x03,
  0x06, 0x01, 0x83, 0x00, 0xE3, 0x80, 0x31, 0x80, 0x18, 0xC0, 0x06, 0xC0,
  0x03, 0x60, 0x01, 0xB0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0xE0,
  0x0E, 0x00, 0x6C, 0x01, 0xC0, 0x1D, 0x80, 0x38, 0x03, 0x30, 0x07, 0x80,
  0x67, 0x01, 0xB0, 0x1C, 0x60, 0x36, 0x03, 0x0C, 0x06, 0xE0, 0x61, 0xC1,
  0x8C, 0x0C, 0x18, 0x31, 0x83, 0x83, 0x06, 0x38, 0x60, 0x61, 0x83, 0x0C,
  0x0E, 0x30, 0x61, 0x80, 0xC6, 0x0C, 0x60, 0x19, 0x80, 0xCC, 0x03, 0x30,
  0x19, 0x80, 0x36, 0x03, 0x30, 0x06, 0xC0, 0x3C, 0x00, 0xF0, 0x07, 0x80,
  0x1E, 0x00, 0xF0, 0x01, 0xC0, 0x0C, 0x00, 0x30, 0x01, 0x80, 0xE0, 0x03,
  0xB8, 0x03, 0x8E, 0x03, 0x83, 0x01, 0x81, 0xC1, 0xC0, 0x61, 0xC0, 0x18,
  0xC0, 0x0E, 0xE0, 0x03, 0xE0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x7C, 0x00,
  0x36, 0x00, 0x3B, 0x80, 0x38, 0xE0, 0x18, 0x30, 0x1C, 0x1C, 0x1C, 0x07,
  0x0C, 0x01, 0x8E, 0x00, 0xEE, 0x00, 0x38, 0xE0, 0x01, 0xF0, 0x01, 0xD8,
  0x00, 0xCE, 0x00, 0x63, 0x00, 0x71, 0x80, 0x30, 0xE0, 0x38, 0x30, 0x18,
  0x18, 0x0C, 0x0E, 0x0E, 0x03, 0x06, 0x01, 0xC3, 0x00, 0x63, 0x80, 0x31,
  0x80, 0x1C, 0xC0, 0x06, 0xE0, 0x03, 0x60, 0x01, 0xF0, 0x00, 0x70, 0x00,
  0x38, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x06, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x03, 0x80, 0x03, 0x80, 0x0F, 0x80, 0x07, 0x80, 0x00, 0xFF, 0xFE, 0xFF,
  0xFE, 0x00, 0x0C, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x30, 0x00, 0x70, 0x00,
  0xE0, 0x01, 0xC0, 0x01, 0x80, 0x03, 0x80, 0x07, 0x00, 0x06, 0x00, 0x0C,
  0x00, 0x1C, 0x00, 0x38, 0x00, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x20, 0x0F, 0x01, 0xC0, 0x38, 0x03, 0x00, 0x70,
  0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60,
  0x06, 0x00, 0xE0, 0x0C, 0x01, 0xC0, 0xF0, 0x0F, 0x00, 0x1C, 0x00, 0xC0,
  0x0E, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60,
  0x06, 0x00, 0x60, 0x07, 0x00, 0x30, 0x03, 0x80, 0x1C, 0x00, 0xF0, 0x02,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x40, 0x0F, 0x00,
  0x38, 0x01, 0xC0, 0x0C, 0x00, 0xE0, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60,
  0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x70, 0x03, 0x00, 0x38,
  0x01, 0xF0, 0x0F, 0x03, 0x80, 0x30, 0x07, 0x00, 0x60, 0x06, 0x00, 0x60,
  0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x0E, 0x00, 0xC0,
  0x1C, 0x03, 0x80, 0xF0, 0x04, 0x00, 0x1F, 0x00, 0x19, 0xFE, 0x00, 0xDC,
  0x78, 0x07, 0xC0, 0xE0, 0x6C, 0x03, 0x87, 0x60, 0x0F, 0xF2, 0x00, 0x1F,
  0x00 };

const GFXglyph Roboto_Light20pt7bGlyphs[] = {
  {     0,   1,   1,   9,    0,    0 },   // 0x20 ' '
  {     1,   3,  28,   9,    3,  -27 },   // 0x21 '!'
  {    12,   6,   9,  11,    3,  -28 },   // 0x22 '"'
  {    19,  21,  28,  23,    2,  -27 },   // 0x23 '#'
  {    93,  18,  36,  22,    2,  -31 },   // 0x24 '$'
  {   174,  25,  28,  29,    2,  -27 },   // 0x25 '%'
  {   262,  21,  28,  24,    2,  -27 },   // 0x26 '&'
  {   336,   2,   8,   7,    2,  -28 },   // 0x27 '''
  {   338,  10,  40,  12,    2,  -30 },   // 0x28 '('
  {   388,   9,  40,  13,    1,  -30 },   // 0x29 ')'
  {   433,  15,  15,  17,    1,  -27 },   // 0x2A '*'
  {   462,  19,  20,  22,    1,  -22 },   // 0x2B '+'
  {   510,   4,   9,   7,    1,   -2 },   // 0x2C ','
  {   515,   9,   2,  11,    1,  -12 },   // 0x2D '-'
  {   518,   3,   3,   9,    3,   -2 },   // 0x2E '.'
  {   520,  13,  30,  15,    1,  -27 },   // 0x2F '/'
  {   569,  18,  28,  22,    2,  -27 },   // 0x30 '0'
  {   632,  10,  28,  22,    3,  -27 },   // 0x31 '1'
  {   667,  18,  28,  22,    2,  -27 },   // 0x32 '2'
  {   730,  17,  28,  22,    2,  -27 },   // 0x33 '3'
  {   790,  20,  28,  22,    1,  -27 },   // 0x34 '4'
  {   860,  17,  28,  22,    3,  -27 },   // 0x35 '5'
  {   920,  17,  28,  22,    3,  -27 },   // 0x36 '6'
  {   980,  19,  28,  22,    1,  -27 },   // 0x37 '7'
  {  1047,  18,  28,  22,    2,  -27 },   // 0x38 '8'
  {  1110,  17,  28,  22,    2,  -27 },   // 0x39 '9'
  {  1170,   4,  21,   8,    2,  -20 },   // 0x3A ':'
  {  1181,   5,  27,   8,    1,  -20 },   // 0x3B ';'
  {  1198,  16,  17,  20,    1,  -20 },   // 0x3C '<'
  {  1232,  16,  10,  22,    3,  -17 },   // 0x3D '='
  {  1252,  16,  17,  20,    2,  -20 },   // 0x3E '>'
  {  1286,  14,  28,  18,    2,  -27 },   // 0x3F '?'
  {  1335,  32,  36,  36,    2,  -26 },   // 0x40 '@'
  {  1479,  24,  28,  24,    0,  -27 },   // 0x41 'A'
  {  1563,  18,  28,  24,    4,  -27 },   // 0x42 'B'
  {  1626,  21,  28,  25,    2,  -27 },   // 0x43 'C'
  {  1700,  19,  28,  26,    4,  -27 },   // 0x44 'D'
  {  1767,  18,  28,  22,    3,  -27 },   // 0x45 'E'
  {  1830,  18,  28,  22,    3,  -27 },   // 0x46 'F'
  {  1893,  21,  28,  27,    3,  -27 },   // 0x47 'G'
  {  1967,  21,  28,  28,    3,  -27 },   // 0x48 'H'
  {  2041,   2,  28,  10,    4,  -27 },   // 0x49 'I'
  {  2048,  17,  28,  21,    1,  -27 },   // 0x4A 'J'
  {  2108,  20,  28,  25,    4,  -27 },   // 0x4B 'K'
  {  2178,  17,  28,  21,    3,  -27 },   // 0x4C 'L'
  {  2238,  27,  28,  34,    3,  -27 },   // 0x4D 'M'
  {  2333,  20,  28,  28,    4,  -27 },   // 0x4E 'N'
  {  2403,  22,  28,  26,    2,  -27 },   // 0x4F 'O'
  {  2480,  19,  28,  24,    3,  -27 },   // 0x50 'P'
  {  2547,  22,  32,  26,    2,  -27 },   // 0x51 'Q'
  {  2635,  19,  28,  25,    4,  -27 },   // 0x52 'R'
  {  2702,  20,  28,  23,    2,  -27 },   // 0x53 'S'
  {  2772,  21,  28,  23,    1,  -27 },   // 0x54 'T'
  {  2846,  20,  28,  26,    3,  -27 },   // 0x55 'U'
  {  2916,  22,  28,  24,    1,  -27 },   // 0x56 'V'
  {  2993,  33,  28,  35,    1,  -27 },   // 0x57 'W'
  {  3109,  22,  28,  24,    1,  -27 },   // 0x58 'X'
  {  3186,  23,  28,  23,    0,  -27 },   // 0x59 'Y'
  {  3267,  20,  28,  23,    2,  -27 },   // 0x5A 'Z'
  {  3337,   6,  38,   9,    3,  -31 },   // 0x5B '['
  {  3366,  14,  30,  15,    1,  -27 },   // 0x5C '\'
  {  3419,   6,  38,   9,    0,  -31 },   // 0x5D ']'
  {  3448,  13,  14,  16,    1,  -27 },   // 0x5E '^'
  {  3471,  17,   2,  17,    0,    1 },   // 0x5F '_'
  {  3476,   6,   5,  11,    2,  -28 },   // 0x60 '`'
  {  3480,  16,  21,  21,    2,  -20 },   // 0x61 'a'
  {  3522,  17,  29,  22,    3,  -28 },   // 0x62 'b'
  {  3584,  16,  21,  20,    2,  -20 },   // 0x63 'c'
  {  3626,  17,  29,  22,    2,  -28 },   // 0x64 'd'
  {  3688,  17,  21,  20,    2,  -20 },   // 0x65 'e'
  {  3733,  12,  30,  13,    1,  -29 },   // 0x66 'f'
  {  3778,  17,  29,  22,    2,  -20 },   // 0x67 'g'
  {  3840,  15,  29,  21,    3,  -28 },   // 0x68 'h'
  {  3895,   3,  28,   9,    3,  -27 },   // 0x69 'i'
  {  3906,   8,  36,   9,   -2,  -27 },   // 0x6A 'j'
  {  3942,  16,  30,  19,    3,  -29 },   // 0x6B 'k'
  {  4002,   3,  30,   9,    3,  -29 },   // 0x6C 'l'
  {  4014,  29,  21,  35,    3,  -20 },   // 0x6D 'm'
  {  4091,  15,  21,  21,    3,  -20 },   // 0x6E 'n'
  {  4131,  18,  21,  22,    2,  -20 },   // 0x6F 'o'
  {  4179,  17,  29,  22,    3,  -20 },   // 0x70 'p'
  {  4241,  17,  29,  22,    2,  -20 },   // 0x71 'q'
  {  4303,   9,  21,  13,    3,  -20 },   // 0x72 'r'
  {  4327,  16,  21,  20,    2,  -20 },   // 0x73 's'
  {  4369,  10,  26,  13,    1,  -25 },   // 0x74 't'
  {  4402,  15,  21,  21,    3,  -20 },   // 0x75 'u'
  {  4442,  17,  21,  19,    1,  -20 },   // 0x76 'v'
  {  4487,  27,  21,  29,    1,  -20 },   // 0x77 'w'
  {  4558,  17,  21,  19,    1,  -20 },   // 0x78 'x'
  {  4603,  17,  29,  19,    1,  -20 },   // 0x79 'y'
  {  4665,  16,  21,  19,    2,  -20 },   // 0x7A 'z'
  {  4707,  12,  38,  13,    1,  -29 },   // 0x7B '{'
  {  4764,   2,  33,   9,    3,  -27 },   // 0x7C '|'
  {  4773,  12,  38,  13,    0,  -29 },   // 0x7D '}'
  {  4830,  21,   7,  27,    3,  -14 } }; // 0x7E '~'

const GFXfont Roboto_Light20pt7b = {
  (uint8_t  *)Roboto_Light20pt7bBitmaps,
  (GFXglyph *)Roboto_Light20pt7bGlyphs,
  0x20, 0x7E, 46 };

// Approx. 5521 bytes
