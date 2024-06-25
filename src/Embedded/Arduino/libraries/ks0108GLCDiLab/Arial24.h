

/*
 *
 * Arial 24
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arial24.h
 * Date                : 12.03.2005
 * Font size in bytes  : 31341
 * Font width          : 10
 * Font height         : 27
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

static const unsigned char Arial24[] = {
    0x7A, 0x6D, // size
    0x0A, // width
    0x1B, // height
    0x20, // first char
    0x60, // char count

    // char widths
    0x00, 0x02, 0x08, 0x0F, 0x0D, 0x15, 0x11, 0x02, 0x06, 0x06,
    0x0A, 0x0E, 0x02, 0x07, 0x02, 0x08, 0x0D, 0x08, 0x0D, 0x0D,
    0x0E, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x02, 0x02, 0x0C, 0x0D,
    0x0C, 0x0E, 0x1A, 0x11, 0x10, 0x12, 0x11, 0x0F, 0x0E, 0x13,
    0x10, 0x02, 0x0B, 0x10, 0x0D, 0x11, 0x10, 0x14, 0x10, 0x14,
    0x10, 0x10, 0x10, 0x10, 0x11, 0x1B, 0x13, 0x12, 0x10, 0x05,
    0x08, 0x05, 0x0C, 0x10, 0x05, 0x0D, 0x0D, 0x0C, 0x0D, 0x0D,
    0x07, 0x0D, 0x0C, 0x02, 0x04, 0x0C, 0x02, 0x14, 0x0C, 0x0D,
    0x0D, 0x0D, 0x07, 0x0C, 0x07, 0x0C, 0x0D, 0x13, 0x0D, 0x0D,
    0x0D, 0x08, 0x02, 0x08, 0x0E, 0x0E,

    // font data
    0xFE, 0xFE, 0xFF, 0xFF, 0x19, 0x19, 0x00, 0x00, // 33
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x80, 0x80, 0x80, 0x80, 0xF8, 0xFE, 0x8E, 0x80, 0x80, 0x80, 0x80, 0xF8, 0xFE, 0x86, 0x80, 0xC1, 0xC1, 0xE1, 0xFF, 0xDF, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0xFF, 0xDF, 0xC1, 0xC1, 0xC1, 0x00, 0x1C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0xF0, 0xF8, 0x1C, 0x0C, 0x06, 0x06, 0xFF, 0x06, 0x0E, 0x1C, 0x38, 0x30, 0x00, 0x80, 0x83, 0x03, 0x06, 0x06, 0x0E, 0xFF, 0x0C, 0x0C, 0x1C, 0x18, 0xF0, 0xE0, 0x01, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x7F, 0x18, 0x18, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0xF0, 0xFC, 0x0E, 0x06, 0x06, 0x0E, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0E, 0x0C, 0x0C, 0x0E, 0x07, 0x81, 0xE0, 0x78, 0x1E, 0x07, 0x03, 0xE0, 0xF8, 0x1C, 0x0C, 0x0C, 0x1C, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1C, 0x18, 0x18, 0x1C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x78, 0xFC, 0x8C, 0x06, 0x06, 0x06, 0x06, 0x8C, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x0D, 0x07, 0x06, 0x1F, 0x3B, 0x71, 0xE1, 0x80, 0xC0, 0xE0, 0xF0, 0x30, 0x00, 0x01, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0E, 0x07, 0x07, 0x0F, 0x1E, 0x1C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x00, 0xC0, 0xF0, 0x3C, 0x0E, 0x02, 0xFE, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE0, 0x80, // 40
    0x02, 0x0E, 0x3C, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0xC0, 0xFC, 0x3F, 0x07, 0x80, 0xE0, 0x60, 0x00, 0x00, 0x00, // 41
    0x10, 0x18, 0xB0, 0xF0, 0xFE, 0xFE, 0xF0, 0xB0, 0x18, 0x10, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x18, 0xF8, 0x60, 0x20, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, // 46
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3E, 0x06, 0x00, 0x00, 0xE0, 0xFE, 0x1F, 0x03, 0x00, 0x00, 0x18, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xC0, 0xF8, 0x3C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x3C, 0xF8, 0xC0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x07, 0x0F, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0xC0, 0xE0, 0x60, 0x70, 0x38, 0x38, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x60, 0x78, 0x1C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x60, 0x30, 0x1C, 0x0E, 0x07, 0x01, 0x18, 0x1C, 0x1E, 0x1B, 0x1B, 0x19, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x30, 0x38, 0x1C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x8C, 0xF8, 0xF0, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x07, 0x0F, 0x1D, 0xF8, 0xF0, 0x01, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x70, 0x38, 0x1C, 0xFE, 0xFE, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0xCE, 0xC7, 0xC3, 0xC1, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x00, 0xF8, 0x7E, 0x06, 0x86, 0x86, 0x86, 0x86, 0x86, 0x06, 0x06, 0x06, 0x00, 0x87, 0x87, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x07, 0xFE, 0xF8, 0x01, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0x80, 0xF0, 0x78, 0x1C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x1C, 0x38, 0x30, 0xFF, 0xFF, 0x0C, 0x06, 0x02, 0x03, 0x03, 0x03, 0x03, 0x06, 0x0E, 0xFC, 0xF0, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xC6, 0x66, 0x36, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x00, 0xF0, 0xFC, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0xFC, 0xF0, 0x00, 0xE0, 0xF8, 0x1D, 0x0F, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0F, 0x1D, 0xF8, 0xE0, 0x01, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xE0, 0xF8, 0x1C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0xF8, 0xC0, 0x03, 0x0F, 0x1C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x10, 0x18, 0x8C, 0xFF, 0x7F, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0xC0, 0xC0, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, // 58
    0xC0, 0xC0, 0x00, 0x00, 0x18, 0xF8, 0x60, 0x20, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x60, 0x1C, 0x3E, 0x36, 0x36, 0x63, 0x63, 0xC1, 0xC1, 0xC1, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x60, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC1, 0xC1, 0xC1, 0x63, 0x63, 0x36, 0x36, 0x3E, 0x1C, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x60, 0x78, 0x3C, 0x0C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0x00, 0x80, 0xE0, 0x70, 0x38, 0x18, 0x0C, 0x8C, 0x8E, 0xC6, 0xC6, 0xC6, 0xC6, 0x86, 0x86, 0x06, 0xCC, 0xCC, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 0x00, 0x00, 0xF8, 0xFF, 0x07, 0x01, 0x00, 0xF0, 0xFC, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x83, 0xFF, 0x7F, 0x01, 0x00, 0x00, 0x00, 0xC1, 0xFF, 0x7F, 0x00, 0x03, 0x1F, 0x3C, 0xF0, 0xC0, 0x81, 0x87, 0x0E, 0x1C, 0x18, 0x18, 0x18, 0x0C, 0x0C, 0x07, 0x0F, 0x1F, 0x18, 0x18, 0x1C, 0x0C, 0x87, 0x83, 0xC1, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, // 64
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0x3E, 0x06, 0x3E, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x7F, 0x67, 0x61, 0x60, 0x60, 0x60, 0x61, 0x67, 0x7F, 0xF8, 0xC0, 0x00, 0x00, 0x18, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0xF8, 0xF0, 0x00, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0E, 0x1F, 0x3B, 0xF1, 0xE0, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0x80, 0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0x38, 0x70, 0x60, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x78, 0xE0, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x7F, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0x1C, 0x38, 0x70, 0x40, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x01, 0x03, 0x07, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0xFE, 0xFE, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x0F, 0x0E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x06, 0x02, 0x00, 0xFF, 0xFF, 0x38, 0x1C, 0x0E, 0x07, 0x0F, 0x1F, 0x3C, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0xFE, 0xFE, 0x1E, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x1E, 0xFE, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0x7F, 0xF0, 0x80, 0x00, 0x80, 0xF0, 0x7F, 0x0F, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1C, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0xFE, 0xFE, 0x0E, 0x38, 0x70, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0E, 0x1C, 0x70, 0xE0, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1E, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x1C, 0x38, 0xF0, 0xE0, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x3F, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0xF8, 0xF0, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x07, 0x01, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x1C, 0x38, 0xF0, 0xE0, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x03, 0x07, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x19, 0x1B, 0x1B, 0x1F, 0x0E, 0x0E, 0x0F, 0x1F, 0x39, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x1C, 0xF8, 0xF0, 0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0x3C, 0xFC, 0xCE, 0x86, 0x07, 0x03, 0x01, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0x00, 0xF0, 0xF8, 0x9C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0x1C, 0x78, 0x60, 0xC0, 0xC0, 0x03, 0x03, 0x07, 0x07, 0x06, 0x0E, 0x0E, 0x0E, 0x0C, 0x1C, 0x1C, 0x38, 0xF8, 0xE0, 0x00, 0x03, 0x07, 0x0E, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x03, 0x07, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x06, 0x1E, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x1E, 0x06, 0x00, 0x00, 0x00, 0x07, 0x1F, 0xFC, 0xE0, 0x00, 0x00, 0x80, 0xE0, 0xFC, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x1C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x06, 0x7E, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0x3E, 0x06, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF8, 0x7E, 0x06, 0x00, 0x00, 0x07, 0x7F, 0xFC, 0xC0, 0x00, 0x80, 0xF0, 0xFE, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x01, 0x1F, 0xFE, 0xF0, 0x80, 0x00, 0xC0, 0xFC, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x1C, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x00, 0x02, 0x06, 0x0E, 0x1C, 0x78, 0xE0, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0xE0, 0x78, 0x1C, 0x0E, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x31, 0x1F, 0x0E, 0x1F, 0x71, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x1C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0E, 0x1C, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x02, 0x06, 0x1C, 0x38, 0x70, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x70, 0x3C, 0x1E, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0xFC, 0xFC, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xE6, 0x76, 0x3E, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x70, 0x38, 0x1E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x1F, 0x1B, 0x19, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xFE, 0xFE, 0x06, 0x06, 0x06, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, // 91
    0x06, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1F, 0xFE, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0, // 93
    0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0E, 0x0E, 0x3C, 0xF0, 0xC0, 0x00, 0x00, 0x08, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 95
    0x02, 0x06, 0x0E, 0x1C, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x82, 0xE3, 0x61, 0x31, 0x30, 0x30, 0x30, 0x38, 0x18, 0x19, 0xFF, 0xFF, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x06, 0x0F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0xFE, 0xFE, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0xFF, 0xFC, 0x1F, 0x1F, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0xFC, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x87, 0x86, 0x01, 0x07, 0x0E, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFE, 0xFE, 0xF8, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0x01, 0x03, 0x0F, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xFC, 0xFF, 0x33, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x33, 0x3F, 0x3C, 0x01, 0x07, 0x0F, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0xC0, 0xC0, 0xFC, 0xFE, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xC0, 0xC0, 0xF8, 0xFE, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0xC1, 0xC3, 0x0F, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x86, 0xFF, 0x7F, 0x00, 0x60, 0x60, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x20, 0x00, // 103
    0xFE, 0xFE, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0xC6, 0xC6, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, // 105
    0x00, 0x00, 0xC6, 0xC6, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0xC0, 0x60, 0x20, // 106
    0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x40, 0xFF, 0xFF, 0x60, 0x30, 0x38, 0x7C, 0xFE, 0xC7, 0x83, 0x01, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0xFE, 0xFE, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, // 108
    0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xFC, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0xFF, 0xFC, 0x01, 0x07, 0x0F, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0xC0, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0xFF, 0xFC, 0xFF, 0xFF, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0C, 0x07, 0x03, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0xC0, 0xC0, 0xFC, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0x00, 0x03, 0x07, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x06, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, // 113
    0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x39, 0x38, 0x30, 0x70, 0x70, 0x70, 0x61, 0xE3, 0xC3, 0x80, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0xC0, 0xC0, 0xFC, 0xFE, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x0F, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x07, 0x1F, 0xFC, 0xF0, 0x80, 0x00, 0x80, 0xE0, 0x7C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x01, 0x0F, 0x7E, 0xF0, 0xC0, 0x00, 0xC0, 0xFC, 0x1F, 0x01, 0x1F, 0xFC, 0xC0, 0x00, 0xC0, 0xF8, 0x7E, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x1C, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x1C, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x40, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x00, 0x03, 0x07, 0xDE, 0xF8, 0x70, 0xF8, 0xDE, 0x07, 0x03, 0x01, 0x00, 0x10, 0x18, 0x1E, 0x07, 0x03, 0x01, 0x00, 0x01, 0x03, 0x07, 0x1E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x07, 0x3F, 0xF8, 0xC0, 0x00, 0x00, 0x80, 0xF0, 0x7C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8F, 0xFE, 0x7E, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x00, 0x18, 0x1C, 0x1F, 0x1B, 0x19, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0x00, 0xF8, 0xFC, 0x0E, 0x06, 0x06, 0x60, 0x60, 0xF0, 0x9F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xE0, 0xC0, 0xC0, // 123
    0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, // 124
    0x06, 0x06, 0x06, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x9F, 0xF0, 0x60, 0x60, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0x60, 0x20, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x1C, 0x18, 0x18, 0x18, 0x0C, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 127

};

