
#include "gfxelements.h"

// idx0 | repetition
// idx1 | idx2
// pixel[idx0]
// pixel[idx1]
// pixel[idx2]
const uint8_t segmentmap[] PROGMEM = {
	0x03, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0xf8, 0x00, 0x00,
	0x10, 0x00, 0xfc, 0x00, 0x00,
	0x10, 0xc0, 0xf8, 0x02, 0x00,
	0x10, 0xc0, 0xf0, 0x07, 0x00,
	0x70, 0xc0, 0x30, 0x0f, 0x00,
	0x71, 0xc0, 0x70, 0x0f, 0x00,
	0x73, 0xc0, 0xe0, 0x0f, 0x00,
	0x72, 0xc0, 0xc0, 0x0f, 0x00,
	0x72, 0xc0, 0x80, 0x0f, 0x00,
	0xc3, 0x00, 0x0f, 0x00, 0x00,
	0xa0, 0xc0, 0xf0, 0x07, 0x00,
	0xa0, 0xc0, 0xf8, 0x02, 0x00,
	0x30, 0xa0, 0x02, 0xf8, 0x00,
	0x30, 0xa0, 0x07, 0xf0, 0x00,
	0x33, 0x00, 0x0f, 0x00, 0x00,
	0x32, 0x50, 0x0f, 0x80, 0x00,
	0x32, 0x50, 0x0f, 0xc0, 0x00,
	0x33, 0x50, 0x0f, 0xe0, 0x00,
	0x31, 0x50, 0x0f, 0x70, 0x00,
	0x30, 0x50, 0x0f, 0x30, 0x00,
	0x20, 0x30, 0xf0, 0x07, 0x00,
	0x20, 0x30, 0xf8, 0x02, 0x00,
	0x20, 0x00, 0xfc, 0x00, 0x00,
	0x20, 0x00, 0xf8, 0x00, 0x00,
	0x03, 0x00, 0x00, 0x00, 0x00,
	0x13, 0x00, 0xff, 0x00, 0x00,
	0xd0, 0x00, 0x30, 0x00, 0x00,
	0xd4, 0x00, 0x78, 0x00, 0x00,
	0x72, 0xd0, 0x01, 0x78, 0x00,
	0x72, 0xd0, 0x03, 0x78, 0x00,
	0x62, 0x7d, 0x80, 0x07, 0x78,
	0x61, 0x7d, 0x80, 0x06, 0x78,
	0x40, 0xad, 0x80, 0x07, 0x30,
	0x41, 0xa0, 0xc0, 0x0f, 0x00,
	0x40, 0xab, 0x80, 0x07, 0x30,
	0x51, 0x8b, 0x06, 0x80, 0x78,
	0x52, 0x8b, 0x07, 0x80, 0x78,
	0x52, 0xb0, 0x03, 0x78, 0x00,
	0x52, 0xb0, 0x01, 0x78, 0x00,
	0xb4, 0x00, 0x78, 0x00, 0x00,
	0xb0, 0x00, 0x30, 0x00, 0x00,
	0x23, 0x00, 0xff, 0x00, 0x00,
	0x03, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x7f, 0x00, 0x00,
	0x10, 0x00, 0xff, 0x00, 0x00,
	0x10, 0x00, 0x7f, 0x00, 0x00,
	0x10, 0x90, 0x3f, 0x80, 0x00,
	0x60, 0x90, 0x30, 0xc0, 0x00,
	0x61, 0x90, 0x38, 0xc0, 0x00,
	0x62, 0x90, 0x1c, 0xc0, 0x00,
	0x60, 0x90, 0x1e, 0xc0, 0x00,
	0x61, 0x90, 0x0e, 0xc0, 0x00,
	0x60, 0x90, 0x0f, 0xc0, 0x00,
	0x62, 0x90, 0x07, 0xc0, 0x00,
	0x61, 0x90, 0x03, 0xc0, 0x00,
	0x61, 0x90, 0x01, 0xc0, 0x00,
	0x40, 0x90, 0x3f, 0x80, 0x00,
	0x41, 0x00, 0x7f, 0x00, 0x00,
	0x00, 0x40, 0x80, 0x3f, 0x00,
	0x01, 0x80, 0xc0, 0x01, 0x00,
	0x01, 0x80, 0xc0, 0x03, 0x00,
	0x02, 0x80, 0xc0, 0x07, 0x00,
	0x00, 0x80, 0xc0, 0x0f, 0x00,
	0x01, 0x80, 0xc0, 0x0e, 0x00,
	0x00, 0x80, 0xc0, 0x1e, 0x00,
	0x02, 0x80, 0xc0, 0x1c, 0x00,
	0x01, 0x80, 0xc0, 0x38, 0x00,
	0x00, 0x80, 0xc0, 0x30, 0x00,
	0x00, 0x20, 0x80, 0x3f, 0x00,
	0x20, 0x00, 0x7f, 0x00, 0x00,
	0x20, 0x00, 0xff, 0x00, 0x00,
	0x20, 0x00, 0x7f, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00,
	0xf0, 0x00, 0x0c, 0x00, 0x00,
	0xf0, 0x00, 0x18, 0x00, 0x00,
	0xf0, 0x00, 0x38, 0x00, 0x00,
	0xf0, 0x00, 0x70, 0x00, 0x00,
	0x90, 0xf0, 0x01, 0xf0, 0x00,
	0x90, 0xf0, 0x03, 0xf0, 0x00,
	0x90, 0x00, 0x03, 0x00, 0x00,
	0x93, 0xf0, 0x03, 0xf0, 0x00,
	0x9c, 0x00, 0x03, 0x00, 0x00,
	0x90, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00,
	0x0a, 0x00, 0x03, 0x00, 0x00,
	0x03, 0xf0, 0x03, 0xf0, 0x00,
	0x03, 0x00, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00,
	0xff
};
const uint16_t kommalimits[] = {0x0172, 0x0195, 0x01ae, };
