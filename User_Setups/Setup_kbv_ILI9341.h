// See SetupX_Template.h for all options available
//#define ILI9341_DRIVER
//#define ILI9488_DRIVER
//#define S6D02A1_DRIVER
//#define GC9102_DRIVER
//#define ST7735_DRIVER
//#define ST7735_BLACKTAB
//#define ST7789_DRIVER
#define ST7796_DRIVER
#if defined(ST7789_DRIVER)
 //#define TFT_SDA_READ //does not work
 //#define TFT_INVERSION_ON
 //#define TFT_RGB_ORDER TFT_BGR
 #define TFT_WIDTH  135
 //#define TFT_WIDTH  240
 #define TFT_HEIGHT 240
#endif

#if defined(ARDUINO_ARCH_STM32)
#define STM32
#endif

#if 0
#elif defined(ARDUINO_NUCLEO_F103RB) && defined(HACK_ALT_SPI1)
#define TFT_CS   D10 //D5 // Chip select control pin to TFT CS
#define TFT_DC   D9 //D6 // Data Command control pin to TFT DC (may be labelled RS = Register Select)
#define TFT_RST  D8 //D7 // Reset pin to TFT RST (or RESET)
//#define TOUCH_CS D3  // Chip select pin (T_CS) of touch screen
#define TFT_MOSI D4 //PB5
#define TFT_MISO D5 //PB4
#define TFT_SCLK D3 //PB3
#elif defined(ARDUINO_BLUEPILL_F103CB) && defined(HACK_BLUEPILL)
#define TFT_CS   PA15 //D5 // Chip select control pin to TFT CS
#define TFT_DC   PA1 //D6 // Data Command control pin to TFT DC (may be labelled RS = Register Select)
#define TFT_RST  PA0 //D7 // Reset pin to TFT RST (or RESET)
#define TFT_MOSI PB5
#define TFT_MISO PB4
#define TFT_SCLK PB3
#define TOUCH_CS PA5  // Chip select pin (T_CS) of touch screen
#elif defined(ARDUINO_BLUEPILL_F103CB) && defined(HACK_MY_BLUEPILL)
#define TFT_CS   PB12 //D5 // Chip select control pin to TFT CS
#define TFT_DC   PA10 //D6 // Data Command control pin to TFT DC (may be labelled RS = Register Select)
#define TFT_RST  PA9 //D7 // Reset pin to TFT RST (or RESET)
#define TFT_MOSI PB15
#define TFT_MISO PB14
#define TFT_SCLK PB13
//#define TOUCH_CS PA5  // Chip select pin (T_CS) of touch screen
#elif defined(STM32)
#define TFT_CS   D10 //D5 // Chip select control pin to TFT CS
#define TFT_DC   D9 //D6 // Data Command control pin to TFT DC (may be labelled RS = Register Select)
#define TFT_RST  D8 //D7 // Reset pin to TFT RST (or RESET)
#define TOUCH_CS D3  // Chip select pin (T_CS) of touch screen

#elif defined(ESP8266)
//#define TFT_CS   D10  // Chip select control pin D8
#define TFT_CS   -1  // Chip select control pin D8
#define TFT_DC   D9  // Data Command control pin
#define TFT_RST  D8  // Reset pin (could connect to NodeMCU RST, see next line)
//#define TFT_RST  -1    // Set TFT_RST to -1 if the display RESET is connected to NodeMCU RST or 3.3V
#define TOUCH_CS D3  // Chip select pin (T_CS) of touch screen

#elif defined(ESP32)
#if defined(ST7789_DRIVER) && TFT_WIDTH == 135
#define TFT_MOSI            19
#define TFT_SCLK            18
#define TFT_CS              5
#define TFT_DC              16
#define TFT_RST             23

#define TFT_BL          4  // Display backlight control pin

#define TFT_BACKLIGHT_ON HIGH  // HIGH or LOW are options
#define CGRAM_OFFSET      // Library will add offsets required
#else
//#define TFT_MOSI            23 //regular SPI
//#define TFT_MISO            19
//#define TFT_SCLK            18
//#define TFT_CS   -1  // Chip select control pin D8
#define TFT_CS   5  // Chip select control pin D8
#define TFT_DC   13  // Data Command control pin
#define TFT_RST  12  // Reset pin (could connect to NodeMCU RST, see next line)
//#define TFT_RST  -1    // Set TFT_RST to -1 if the display RESET is connected to NodeMCU RST or 3.3V
#define TOUCH_CS 16  //25 // Chip select pin (T_CS) of touch screen
#endif
#endif

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts


#define SMOOTH_FONT


// #define SPI_FREQUENCY    8000000
 #define SPI_FREQUENCY    27000000
// #define SPI_FREQUENCY  40000000
// #define SPI_FREQUENCY  80000000

#define SPI_READ_FREQUENCY  20000000

#define SPI_TOUCH_FREQUENCY  2500000


#define SUPPORT_TRANSACTIONS
