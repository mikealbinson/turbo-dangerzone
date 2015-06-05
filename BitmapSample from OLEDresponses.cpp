void OLED::makeBitmap (){
	static unsigned char TicketflyWHITELogoBits[] U8G_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x00, 0x20, 0x00, 0x00,
	    0x00, 0x01, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x1f,
	    0x00, 0x3c, 0x00, 0x00, 0xc0, 0x01, 0xc0, 0xff, 0x0f, 0x00, 0x00, 0x00,
	    0x00, 0x80, 0x87, 0x1f, 0x00, 0x3e, 0x00, 0x00, 0xe0, 0x01, 0xe0, 0xef,
	    0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0x3e, 0x00, 0x00,
	    0xf0, 0x01, 0xf0, 0xe1, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x0f,
	    0x00, 0x3e, 0x00, 0x00, 0xe0, 0x01, 0xf8, 0xe1, 0x07, 0x00, 0x00, 0x00,
	    0x00, 0xc0, 0x07, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xf0, 0x01, 0xfc, 0xe0,
	    0x07, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x3f, 0x1f, 0x7c, 0x3e, 0x3f, 0x7e,
	    0xf8, 0x1f, 0xff, 0xf7, 0xe3, 0xc3, 0x03, 0x00, 0x00, 0xe0, 0x3f, 0x0f,
	    0x7f, 0x3e, 0x1f, 0xff, 0xf9, 0x9f, 0xff, 0xf3, 0xf3, 0xe7, 0x07, 0x00,
	    0x00, 0xe0, 0x3f, 0x9f, 0x7f, 0xbe, 0x8f, 0xff, 0xf9, 0x9f, 0xff, 0xf3,
	    0xfb, 0xe7, 0x07, 0x00, 0x00, 0xe0, 0x3f, 0x9f, 0x7f, 0xbe, 0x8f, 0xef,
	    0xfb, 0xcf, 0xff, 0xf9, 0xfd, 0xef, 0x07, 0x00, 0x00, 0xc0, 0x07, 0xdf,
	    0x0f, 0xfe, 0xc7, 0xe7, 0xe3, 0x01, 0x3e, 0xf8, 0xcd, 0xcf, 0x07, 0x00,
	    0x00, 0xc0, 0x07, 0xcf, 0x07, 0xfe, 0xc3, 0xff, 0xf3, 0x01, 0x3f, 0xfc,
	    0x81, 0x9f, 0x07, 0x00, 0x00, 0xc0, 0x07, 0xdf, 0x07, 0xfe, 0xc7, 0xff,
	    0xe3, 0x01, 0x3f, 0xfc, 0x80, 0x9f, 0x07, 0x00, 0x00, 0xc0, 0x07, 0xcf,
	    0x07, 0xfe, 0xc7, 0xff, 0xf3, 0x01, 0x1f, 0xfc, 0x80, 0x9f, 0x03, 0x00,
	    0x00, 0xc0, 0x07, 0xdf, 0x1f, 0xfe, 0xcf, 0x07, 0xf0, 0x83, 0x1f, 0xfc,
	    0x02, 0x9f, 0x03, 0x00, 0x00, 0xc0, 0x1f, 0x8f, 0x7f, 0xbe, 0x8f, 0xff,
	    0xe1, 0x8f, 0x1f, 0x7e, 0x07, 0xdf, 0x01, 0x00, 0x00, 0xc0, 0x3f, 0x9f,
	    0x7f, 0xbe, 0x9f, 0xff, 0xe3, 0xcf, 0x0f, 0xfe, 0x03, 0xff, 0x00, 0x00,
	    0x00, 0x80, 0x1f, 0x1f, 0x7f, 0x3e, 0x3f, 0xff, 0xe1, 0xc7, 0x0f, 0xfc,
	    0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0b, 0x7c, 0x14, 0x2d, 0xfc,
	    0xc1, 0xc7, 0x0f, 0xf8, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x0e, 0x3f, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe3, 0x07, 0x00,
	    0x1f, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0xc0, 0xe3, 0x03, 0x00, 0x1f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0xe0, 0xf7, 0x03, 0x00, 0xff, 0x07, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x01, 0x00,
	    0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0xc0, 0x7f, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x00
  };

  int TflyLogoWidth = 128;
  int TflyLogoHeight = 40;

  u8g->firstPage();
  do {
    u8g->drawXBMP( 0, -4, TflyLogoWidth, TflyLogoHeight, TicketflyWHITELogoBits);
  } while ( u8g->nextPage() );
  delay(10000);
}

/* Called in BitmapThruLib.ino by:

#include <U8gLibClone.h>
#include <OLEDResponses.h>

OLED oled1;

void setup() {
  // put your setup code here, to run once:
  oled1.makeBitmap();
  oled1.drawSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
oled1.makeBitmap();
}

/* called in BitmapThruLib.ino as 
#include <U8gLibClone.h>
#include <OLEDResponses.h>

OLED oled1;

void setup() {
  // put your setup code here, to run once:
  oled1.makeBitmap();
  oled1.drawSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
oled1.makeBitmap();
}


*/
