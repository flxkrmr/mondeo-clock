#ifndef BITMAP_7_SEGMENT
#define BITMAP_7_SEGMENT

#define BITMAP_7_SEGMENT_WIDTH 25
#define BITMAP_7_SEGMENT_HEIGHT 32

static unsigned char bitmap7SegmentZero[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x01,
   0xe0, 0xff, 0xff, 0x01, 0xf0, 0x00, 0xe0, 0x01, 0xf0, 0x00, 0xe0, 0x00,
   0xf0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xf0, 0x00,
   0x78, 0x00, 0x70, 0x00, 0x78, 0x00, 0x70, 0x00, 0x38, 0x00, 0x78, 0x00,
   0x38, 0x00, 0x78, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x3c, 0x00,
   0x10, 0x00, 0x1c, 0x00, 0x30, 0x00, 0x08, 0x00, 0x38, 0x00, 0x18, 0x00,
   0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00,
   0x1c, 0x00, 0x3c, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00,
   0x1e, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0f, 0x00, 0x0f, 0x00,
   0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xff, 0xff, 0x07, 0x00,
   0xfe, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x03, 0x00 };

static unsigned char bitmap7SegmentOne[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xc0, 0x01,
   0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x00,
   0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x18, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x80, 0x07, 0x00,
   0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00 };

static unsigned char bitmap7SegmentTwo[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0x80, 0xff, 0xff, 0x01,
   0x00, 0xff, 0xff, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x00,
   0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0xc0, 0xff, 0x3f, 0x00,
   0xf0, 0xff, 0x0f, 0x00, 0xf0, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07, 0x00,
   0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
   0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
   0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
   0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00,
   0xfe, 0xff, 0x03, 0x00, 0xfc, 0xff, 0x03, 0x00 }; 

static unsigned char bitmap7SegmentThree[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0x80, 0xff, 0xff, 0x01,
   0x00, 0xff, 0xff, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x00,
   0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0xc0, 0xff, 0x3f, 0x00,
   0xe0, 0xff, 0x1f, 0x00, 0xe0, 0xff, 0x0f, 0x00, 0xc0, 0xff, 0x1f, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf0, 0xff, 0x07, 0x00,
   0xfc, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x03, 0x00 };

static unsigned char bitmap7SegmentFour[] = {
   0x80, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x80, 0x00, 0xe0, 0x01, 0xc0, 0x01,
   0xe0, 0x01, 0xe0, 0x01, 0xf0, 0x00, 0xe0, 0x01, 0xf0, 0x00, 0xe0, 0x00,
   0xf0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xf0, 0x00,
   0x78, 0x00, 0x70, 0x00, 0x78, 0x00, 0x70, 0x00, 0x38, 0x00, 0x78, 0x00,
   0x38, 0x00, 0x78, 0x00, 0x38, 0x00, 0x38, 0x00, 0xf8, 0xff, 0x3f, 0x00,
   0xf0, 0xff, 0x1f, 0x00, 0xe0, 0xff, 0x0f, 0x00, 0xc0, 0xff, 0x1f, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x07, 0x00,
   0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00 };

static unsigned char bitmap7SegmentFive[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0x7f, 0x00,
   0xe0, 0xff, 0x3f, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
   0x78, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
   0x38, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 0x00,
   0xf0, 0xff, 0x0f, 0x00, 0xe0, 0xff, 0x0f, 0x00, 0xc0, 0xff, 0x1f, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf0, 0xff, 0x07, 0x00,
   0xf8, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x03, 0x00 };

static unsigned char bitmap7SegmentSix[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0x7f, 0x00,
   0xe0, 0xff, 0x3f, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
   0xf0, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
   0x78, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
   0x38, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 0x00,
   0xf0, 0xff, 0x0f, 0x00, 0xf0, 0xff, 0x0f, 0x00, 0xf8, 0xff, 0x1f, 0x00,
   0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00,
   0x1c, 0x00, 0x3c, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00,
   0x1e, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0f, 0x00, 0x0f, 0x00,
   0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xff, 0xff, 0x07, 0x00,
   0xfe, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x03, 0x00 };

static unsigned char bitmap7SegmentSeven[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0x80, 0xff, 0xff, 0x01,
   0x00, 0xff, 0xff, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe0, 0x00,
   0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x78, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x18, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x80, 0x07, 0x00,
   0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00 };

static unsigned char bitmap7SegmentEight[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x01,
   0xe0, 0xff, 0xff, 0x01, 0xf0, 0x00, 0xe0, 0x01, 0xf0, 0x00, 0xe0, 0x00,
   0xf0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xf0, 0x00,
   0x78, 0x00, 0x70, 0x00, 0x78, 0x00, 0x70, 0x00, 0x38, 0x00, 0x78, 0x00,
   0x38, 0x00, 0x78, 0x00, 0x38, 0x00, 0x38, 0x00, 0xf8, 0xff, 0x3f, 0x00,
   0xf0, 0xff, 0x1f, 0x00, 0xf0, 0xff, 0x0f, 0x00, 0xf8, 0xff, 0x1f, 0x00,
   0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x3c, 0x00,
   0x1c, 0x00, 0x3c, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00, 0x1e, 0x00,
   0x1e, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x0e, 0x00, 0x0f, 0x00, 0x0f, 0x00,
   0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xff, 0xff, 0x07, 0x00,
   0xfe, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x03, 0x00 };

static unsigned char bitmap7SegmentNine[] = {
   0x80, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x01,
   0xe0, 0xff, 0xff, 0x01, 0xf0, 0x00, 0xe0, 0x01, 0xf0, 0x00, 0xe0, 0x00,
   0xf0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xe0, 0x00, 0x70, 0x00, 0xf0, 0x00,
   0x78, 0x00, 0x70, 0x00, 0x78, 0x00, 0x70, 0x00, 0x38, 0x00, 0x78, 0x00,
   0x38, 0x00, 0x78, 0x00, 0x38, 0x00, 0x38, 0x00, 0xf8, 0xff, 0x3f, 0x00,
   0xf0, 0xff, 0x1f, 0x00, 0xe0, 0xff, 0x0f, 0x00, 0xc0, 0xff, 0x1f, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3c, 0x00,
   0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf0, 0xff, 0x07, 0x00,
   0xf8, 0xff, 0x07, 0x00, 0xfc, 0xff, 0x03, 0x00 };
#endif