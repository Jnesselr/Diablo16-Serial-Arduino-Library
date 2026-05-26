// Diablo_Const4D.h - 4D Systems Diablo16 4DGL constants.
//
// Constants for the Diablo16 graphics processor, grouped by purpose under
// Diablo::<Group>::Name (e.g. Diablo::Colors::Pink).

#ifndef DIABLO_CONST4D_H
#define DIABLO_CONST4D_H

#include <stdint.h>

namespace Diablo {

    constexpr uint16_t Enable  = 1;
    constexpr uint16_t Disable = 0;
    constexpr uint16_t Hi      = 1;
    constexpr uint16_t Lo      = 0;
    constexpr uint16_t On      = 1;
    constexpr uint16_t Off     = 0;
    constexpr uint16_t All     = 0xFFFF;                // argument for img_xxx functions to update all images (and other uses)

    namespace Text {
        constexpr uint16_t Colour      = 0;             // text foreground colr
        constexpr uint16_t Background  = 1;             // text background colr
        constexpr uint16_t Highlight   = 1;             // text background colr
        constexpr uint16_t FontId      = 2;             // default 0, else points to data statement font
        constexpr uint16_t FontSize    = 2;             // compatibility
        constexpr uint16_t Width       = 3;             // text width multiplier
        constexpr uint16_t Height      = 4;             // text height multiplier
        constexpr uint16_t Xgap        = 5;             // horizontal text gap (default 1)
        constexpr uint16_t Ygap        = 6;             // vertical text gap (default 1)
        constexpr uint16_t PrintDelay  = 7;             // for 'teletype' like effect when printing
        constexpr uint16_t Opacity     = 8;             // text mode flag, TRANSPARENT or OPAQUE
        constexpr uint16_t Bold        = 9;             // embolden text (auto reset)
        constexpr uint16_t Italic      = 10;            // italicize text (auto reset)
        constexpr uint16_t Inverse     = 11;            // invert text (auto reset)
        constexpr uint16_t Underlined  = 12;            // underline text (auto reset)
        constexpr uint16_t Attributes  = 13;            // controls BOLD/ITALIC/INVERSE/UNDERLINE simultaneously
        constexpr uint16_t Wrap        = 14;            // Sets the pixel position where text wrap will occur at RHS
        constexpr uint16_t Angle       = 15;            // Sets the text angle, only for plotted font
        constexpr uint16_t Transparent = 0;             // TEXT_OPACITY  transparent  text
        constexpr uint16_t Opaque      = 1;             // TEXT_OPACITY  opaque text

        namespace Attribute {
            constexpr uint16_t Bold       = 16;         // TEXT_ATTRIBUTES bold text
            constexpr uint16_t Italic     = 32;         // TEXT_ATTRIBUTES italic text
            constexpr uint16_t Inverse    = 64;         // TEXT_ATTRIBUTES inverse text
            constexpr uint16_t Underlined = 128;        // TEXT_ATTRIBUTES underlined
        }  // namespace Attribute
    }  // namespace Text

    namespace Font {
        constexpr uint16_t Font1  = 1;                  // font_System_5x7
        constexpr uint16_t Font2  = 2;                  // font_System_8x8
        constexpr uint16_t Font3  = 3;                  // font_System_8x12
        constexpr uint16_t Font4  = 4;                  // font_System_12x16
        constexpr uint16_t Font5  = 5;                  // font_MS_SanSerif8x12
        constexpr uint16_t Font6  = 6;                  // font_dejaVuSansCondensed9pt
        constexpr uint16_t Font7  = 7;                  // font_dejaVuSans9pt
        constexpr uint16_t Font8  = 8;                  // font_dejaVuSansBold9pt
        constexpr uint16_t Font9  = 9;                  // font_System_3x6
        constexpr uint16_t Font10 = 10;                 // font_plotted
        constexpr uint16_t Font11 = 11;                 // EGA 8x12 font
    }  // namespace Font

    namespace ArrayOp {
        // single word array operations (array operated on with a scalar "value")
        namespace SingleWord {
            constexpr uint16_t Nop     = 0;             // no operation
            constexpr uint16_t Set     = 1;             // "set" the entire array with "value"
            constexpr uint16_t And     = 2;             // "and" the entire array with "value"
            constexpr uint16_t Ior     = 3;             // "inclsuve or" the entire array with "value"
            constexpr uint16_t Xor     = 4;             // "exclusive or" the entire array with "value"
            constexpr uint16_t Add     = 5;             // signed add each element of entire array with "value"
            constexpr uint16_t Sub     = 6;             // signed subtract "value" from each element of entire array.
            constexpr uint16_t Mul     = 7;             // signed multiply each element of entire array by "value"
            constexpr uint16_t Div     = 8;             // signed divide each element of entire array by "value"
            constexpr uint16_t Rev     = 9;             // reverse the elements of an array (value is ignored)
            constexpr uint16_t Shl     = 10;            // shift an array left by "value" positions
            constexpr uint16_t Shr     = 11;            // shift an array right by "value" positions
            constexpr uint16_t Rol     = 12;            // rotate an array left by "value" positions
            constexpr uint16_t Ror     = 13;            // rotate an array right by "value" positions
            // graphics only operations
            constexpr uint16_t Gray    = 14;            // convert an array of RGB565 elements to grayscale, "value" is ignored
            constexpr uint16_t Whiten  = 15;            // saturate an array of RGB565 elements to white, "value" determines saturation
            constexpr uint16_t Blacken = 16;            // saturate an array of RGB565 elements to black, "value" determines saturation
            constexpr uint16_t Lighten = 17;            // increase luminance of an array of RGB565 elements, "value" determines saturation
            constexpr uint16_t Darken  = 18;            // decrease luminance of an array of RGB565 elements, "value" determines saturation
        }  // namespace SingleWord
        // dual word array operations (array1 operated on with array2)
        namespace DualWord {
            constexpr uint16_t And   = 1;               // "and" arrays, result to array1 (value is ignored)
            constexpr uint16_t Ior   = 2;               // "inclusive or" arrays, result to array1 (value is ignored)
            constexpr uint16_t Xor   = 3;               // "exclusive or" arrays, result to array1 (value is ignored)
            constexpr uint16_t Add   = 4;               // "add" arrays, result to array1, array1 + (array2+value)
            constexpr uint16_t Sub   = 5;               // "subtract" array2 from array1, result to array1, array1 - (array2+value)
            constexpr uint16_t Mul   = 6;               // "multiply" arrays, result to array1 (value is ignored)
            constexpr uint16_t Div   = 7;               // "divide array1 by array2" , result to array1 (value is ignored)
            constexpr uint16_t Copy  = 8;               // "copy" array2 to array1 (value is ignored)
            // graphics only operations
            constexpr uint16_t Blend = 9;               // blend arrays, blend percentage determined by "value", result to "array1"
        }  // namespace DualWord
    }  // namespace ArrayOp

    namespace Pin {
        constexpr uint16_t Inp         = 0;             // pin is input, no pullup or pulldown
        constexpr uint16_t InpHi       = 1;             // pin is input with pullup to Vcc
        constexpr uint16_t InpLo       = 2;             // pin is input with pulldown to Gnd
        constexpr uint16_t Out         = 3;             // pin is output
        constexpr uint16_t OutOd       = 4;             // pin is output with open drain
        constexpr uint16_t An          = 5;             // pin is analogue (PA0 to PA3 only)
        constexpr uint16_t AnAvg       = 6;             // pin is analogue (PA0 to PA3 only), averaged - 16 samples
        constexpr uint16_t Pa0         = 1;             // pin 1
        constexpr uint16_t Pa1         = 2;             // pin 3
        constexpr uint16_t Pa2         = 3;             // pin 5
        constexpr uint16_t BusWr       = 3;             // pin 5 (alias PA2_PIN)
        constexpr uint16_t Pa3         = 4;             // pin 7
        constexpr uint16_t BusRd       = 4;             // pin 7 (alias PA3_PIN)
        constexpr uint16_t Pa4         = 5;             // pin 29
        constexpr uint16_t Pa5         = 6;             // pin 27
        constexpr uint16_t Pa6         = 7;             // pin 25
        constexpr uint16_t Pa7         = 8;             // pin 23
        constexpr uint16_t Pa8         = 9;             // pin 21
        constexpr uint16_t Pa9         = 10;            // pin 19
        constexpr uint16_t Pa10        = 11;            // pin 8  (LCD power control)
        constexpr uint16_t Pa11        = 12;            // pin 6
        constexpr uint16_t Pa12        = 13;            // pin 28 (TX1)
        constexpr uint16_t Pa13        = 14;            // pin 30 (RX1)
        constexpr uint16_t Pa14        = 15;            // pin 10 (input only)
        constexpr uint16_t Pa15        = 16;            // pin 12 (input only)
        constexpr uint16_t AudioEnable = 17;            // pin 45 (Output only)

        namespace Mask {
            constexpr uint16_t Pa0  = 0x0001;           // pin 1
            constexpr uint16_t Pa1  = 0x0002;           // pin 3
            constexpr uint16_t Pa2  = 0x0004;           // pin 5
            constexpr uint16_t Pa3  = 0x0008;           // pin 7
            constexpr uint16_t Pa4  = 0x0010;           // pin 29
            constexpr uint16_t Pa5  = 0x0020;           // pin 27
            constexpr uint16_t Pa6  = 0x0040;           // pin 25
            constexpr uint16_t Pa7  = 0x0080;           // pin 23
            constexpr uint16_t Pa8  = 0x0100;           // pin 21
            constexpr uint16_t Pa9  = 0x0200;           // pin 19 (LCD power control)
            constexpr uint16_t Pa10 = 0x0400;           // pin 8
            constexpr uint16_t Pa11 = 0x0800;           // pin 6
            constexpr uint16_t Pa12 = 0x1000;           // pin 28
            constexpr uint16_t Pa13 = 0x2000;           // pin 30
            constexpr uint16_t Pa14 = 0x4000;           // pin 10 (input only)
            constexpr uint16_t Pa15 = 0x8000;           // pin 12 (input only)
        }  // namespace Mask
    }  // namespace Pin

    namespace Gfx {
        constexpr uint16_t PenSize           = 16;      // not necessary to use (legacy mode)
        constexpr uint16_t BackgroundColour  = 17;
        constexpr uint16_t ObjectColour      = 18;      // line / circle / rectangle generic colour
        constexpr uint16_t Clipping          = 19;      // clipping ON / OFF
        constexpr uint16_t TransparentColour = 20;      // (only on displays with specific hware feature)
        constexpr uint16_t Transparency      = 21;      // 0 = OFF, 1 = ON (only on displays with specific hware feature)
        constexpr uint16_t FrameDelay        = 22;      // legacy mode, see pokeB(IMAGE_DELAY, n);
        constexpr uint16_t ScreenMode        = 23;      // LANDSCAPE, LANDSCAPE_R, PORTRAIT, PORTRAIT_R
        constexpr uint16_t OutlineColour     = 24;      // if not BLACK (0) , used for outline around circles,rectangles and filled polygons
        constexpr uint16_t Contrast          = 25;      // for OLED,cahnge contrast, for LCD on or off only
        constexpr uint16_t LinePattern       = 26;      // used for patterned lines, 16bit value (0 = no pattern, '1's = pattern)
        constexpr uint16_t BevelRadius       = 27;      // button bevel radius
        constexpr uint16_t BevelWidth        = 28;      // button bevel width
        constexpr uint16_t BevelShadow       = 29;      // button bevel shadow depth
        constexpr uint16_t XOrigin           = 30;      // display position X offset
        constexpr uint16_t YOrigin           = 31;      // display position X offset
        constexpr uint16_t XMax              = 0;       // current orientations screen maximum X co-ordinate
        constexpr uint16_t YMax              = 1;       // current orientations screen maximum Y co-ordinate
        constexpr uint16_t LeftPos           = 2;       // last objects left co-ord
        constexpr uint16_t TopPos            = 3;       // last objects top co-ord
        constexpr uint16_t RightPos          = 4;       // last objects right co-ord
        constexpr uint16_t BottomPos         = 5;       // last objects bottom co-ord
        constexpr uint16_t XOrg              = 6;       // display position X offset
        constexpr uint16_t YOrg              = 7;       // display position X offset
        constexpr uint16_t Solid             = 0;       // PEN_SIZE
        constexpr uint16_t Outline           = 1;       // PEN_SIZE
        constexpr uint16_t Style1            = 2;
        constexpr uint16_t Style2            = 3;
    }  // namespace Gfx

    namespace Pattern {
        constexpr uint16_t Fill0               = 0xFFE0;
        constexpr uint16_t Fill1               = 0xFFE1;
        constexpr uint16_t Fill2               = 0xFFE2;
        constexpr uint16_t Fill3               = 0xFFE3;
        constexpr uint16_t Fill4               = 0xFFE4;
        constexpr uint16_t Fill5               = 0xFFE5;
        constexpr uint16_t Fill6               = 0xFFE6;
        constexpr uint16_t Fill7               = 0xFFE7;
        constexpr uint16_t Fill8               = 0xFFE8;
        constexpr uint16_t Fill9               = 0xFFE9;
        constexpr uint16_t Fill10              = 0xFFEA;
        constexpr uint16_t Fill11              = 0xFFEB;
        constexpr uint16_t Fill12              = 0xFFEC;
        constexpr uint16_t Fill13              = 0xFFED;
        constexpr uint16_t Fill14              = 0xFFEE;
        constexpr uint16_t Fill15              = 0xFFEF;
        constexpr uint16_t Fill16              = 0xFFF0;
        constexpr uint16_t Fill17              = 0xFFF1;
        constexpr uint16_t Fill18              = 0xFFF2;
        constexpr uint16_t Fill19              = 0xFFF3;
        constexpr uint16_t Fill20              = 0xFFF4;
        constexpr uint16_t Fill21              = 0xFFF5;
        constexpr uint16_t Fill22              = 0xFFF6;
        constexpr uint16_t Fill23              = 0xFFF7;
        constexpr uint16_t Fill24              = 0xFFF8;
        constexpr uint16_t Fill25              = 0xFFF9;
        constexpr uint16_t Fill26              = 0xFFFA;
        constexpr uint16_t Fill27              = 0xFFFB;
        constexpr uint16_t Fill28              = 0xFFFC;
        constexpr uint16_t Fill29              = 0xFFFD;
        constexpr uint16_t Fill30              = 0xFFFE;
        constexpr uint16_t Fill31              = 0xFFFF;
        constexpr uint16_t Empty               = 0xFFE0;
        constexpr uint16_t PtnSolid            = 0xFFE1;
        constexpr uint16_t FineDots            = 0xFFE2;
        constexpr uint16_t MediumDots          = 0xFFE3;
        constexpr uint16_t CourseDots          = 0xFFE4;
        constexpr uint16_t BsVertical          = 0xFFE5;
        constexpr uint16_t BsHorizontal        = 0xFFE6;
        constexpr uint16_t CourseFDiagonal     = 0xFFE7;
        constexpr uint16_t CourseBDiagonal     = 0xFFE8;
        constexpr uint16_t CourseCross         = 0xFFE9;
        constexpr uint16_t CourseDiagonalCross = 0xFFEA;
        constexpr uint16_t BsVertical2         = 0xFFEB;
        constexpr uint16_t BsHorizontal2       = 0xFFEC;
        constexpr uint16_t FDiagonal           = 0xFFED;
        constexpr uint16_t BDiagonal           = 0xFFEE;
        constexpr uint16_t FineCross           = 0xFFEF;
        constexpr uint16_t FineDiagonalCross   = 0xFFF0;
        constexpr uint16_t Bricks              = 0xFFF1;
        constexpr uint16_t Cargonet            = 0xFFF2;
        constexpr uint16_t Circuits            = 0xFFF3;
        constexpr uint16_t Cobblestones        = 0xFFF4;
        constexpr uint16_t Daisies             = 0xFFF5;
        constexpr uint16_t Dizzy               = 0xFFF6;
        constexpr uint16_t FieldEffect         = 0xFFF7;
        constexpr uint16_t Key                 = 0xFFF8;
        constexpr uint16_t Rounder             = 0xFFF9;
        constexpr uint16_t Scales              = 0xFFFA;
        constexpr uint16_t Stone               = 0xFFFB;
        constexpr uint16_t Thatches            = 0xFFFC;
        constexpr uint16_t Tile                = 0xFFFD;
        constexpr uint16_t WafflesRevenge      = 0xFFFE;
        constexpr uint16_t Crosses             = 0xFFFF;
    }  // namespace Pattern

    namespace Gradient {
        constexpr uint16_t Down    = 0x20;              // gradient changes in the vertical direction
        constexpr uint16_t Right   = 0x30;              // gradient change in the horizontal direction
        constexpr uint16_t Up      = 0x40;              // gradient changes in the vertical direction
        constexpr uint16_t Left    = 0x50;              // gradient change in the horizontal direction
        constexpr uint16_t WaveVer = 0x60;              // gradient wave in the vertical direction
        constexpr uint16_t WaveHor = 0x70;              // gradient wave in the horizontal direction
    }  // namespace Gradient

    namespace Baud {
        constexpr uint16_t Midi      = 9;
        constexpr uint16_t Bps110    = 0;
        constexpr uint16_t Bps300    = 1;
        constexpr uint16_t Bps600    = 2;
        constexpr uint16_t Bps1200   = 3;
        constexpr uint16_t Bps2400   = 4;
        constexpr uint16_t Bps4800   = 5;
        constexpr uint16_t Bps9600   = 6;
        constexpr uint16_t Bps14400  = 7;
        constexpr uint16_t Bps19200  = 8;
        constexpr uint16_t Bps31250  = 9;
        constexpr uint16_t Bps38400  = 10;
        constexpr uint16_t Bps56000  = 11;
        constexpr uint16_t Bps57600  = 12;
        constexpr uint16_t Bps115200 = 13;
        constexpr uint16_t Bps128000 = 14;
        constexpr uint16_t Bps256000 = 15;
        constexpr uint16_t Bps300000 = 16;
        constexpr uint16_t Bps375000 = 17;
        constexpr uint16_t Bps500000 = 18;
        constexpr uint16_t Bps600000 = 19;
    }  // namespace Baud

    namespace I2c {
        constexpr uint16_t Slow   = 0;                  // 100Khz
        constexpr uint16_t Med    = 1;                  // 400Khz
        constexpr uint16_t Fast   = 2;                  // 5Mhz
        constexpr uint16_t Khz10  = 3;                  // 10khz
        constexpr uint16_t Hz20   = 4;                  // 20khz
        constexpr uint16_t Khz50  = 5;                  // 50khz
        constexpr uint16_t Khz250 = 6;                  // 250khz
    }  // namespace I2c

    namespace Spi {
        constexpr uint16_t Mode8_0  = 0;                //    8bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on first falling edge
        constexpr uint16_t Mode8_1  = 1;                //    8bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on first rising edge
        constexpr uint16_t Mode8_2  = 2;                //    8bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on first falling edge
        constexpr uint16_t Mode8_3  = 3;                //    8bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on first falling edge
        constexpr uint16_t Mode8_4  = 4;                //    8bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on next rising edge
        constexpr uint16_t Mode8_5  = 5;                //    8bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on next falling edge
        constexpr uint16_t Mode8_6  = 6;                //    8bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on next rising edge
        constexpr uint16_t Mode8_7  = 7;                //    8bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on next rising edge
        constexpr uint16_t Mode16_0 = 8;                //    16bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on first falling edge
        constexpr uint16_t Mode16_1 = 9;                //    16bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on first rising edge
        constexpr uint16_t Mode16_2 = 10;               //    16bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on first falling edge
        constexpr uint16_t Mode16_3 = 11;               //    16bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on first falling edge
        constexpr uint16_t Mode16_4 = 12;               //    16bit mode    SCK idles low,    SDO stable for first falling edge, SDI sampled on next rising edge
        constexpr uint16_t Mode16_5 = 13;               //    16bit mode    SCK idles low,    SDO stable for first rising edge,  SDI sampled on next falling edge
        constexpr uint16_t Mode16_6 = 14;               //    16bit mode    SCK idles high,    SDO stable for first falling edge, SDI sampled on next rising edge
        constexpr uint16_t Mode16_7 = 15;               //    16bit mode    SCK idles high,    SDO stable for first rising edge,  SDI sampled on next rising edge
        constexpr uint16_t Speed0   = 0;                // 78.125 khz
        constexpr uint16_t Speed1   = 1;                // 109.375 khz
        constexpr uint16_t Speed2   = 2;                // 273.4375 khz
        constexpr uint16_t Speed3   = 3;                // 312.5 khz
        constexpr uint16_t Speed4   = 4;                // 437.5 khz
        constexpr uint16_t Speed5   = 5;                // 729.166 khz
        constexpr uint16_t Speed6   = 6;                // 1.09375 mhz
        constexpr uint16_t Speed7   = 7;                // 1.25 mhz
        constexpr uint16_t Speed8   = 8;                // 1.75 mhz
        constexpr uint16_t Speed9   = 9;                // 2.1875 mhaz
        constexpr uint16_t Speed10  = 10;               // 4.375 mhz
        constexpr uint16_t Speed11  = 11;               // 5.00 mhz
        constexpr uint16_t Speed12  = 12;               // 7.00 mhz
        constexpr uint16_t Speed13  = 13;               // 8.75 mhz
        constexpr uint16_t Speed14  = 14;               // 11.666 mhz
        constexpr uint16_t Speed15  = 15;               // 17.5 mhz
        constexpr uint16_t Spi1     = 1;
        constexpr uint16_t Spi2     = 2;
        constexpr uint16_t Spi3     = 3;
    }  // namespace Spi

    namespace Image {
        constexpr uint16_t Count         = 0;
        constexpr uint16_t EntryLen      = 1;
        constexpr uint16_t Mode          = 2;
        constexpr uint16_t GciFilename   = 3;
        constexpr uint16_t DatFilename   = 4;
        constexpr uint16_t GciFileHandle = 5;
        constexpr uint16_t LoWord        = 0;           // WORD image address LO
        constexpr uint16_t HiWord        = 1;           // WORD image address HI
        constexpr uint16_t XPos          = 2;           // WORD image location X
        constexpr uint16_t YPos          = 3;           // WORD image location Y
        constexpr uint16_t Width         = 4;           // WORD image width
        constexpr uint16_t Height        = 5;           // WORD image height
        constexpr uint16_t Flags         = 6;           // WORD image flags
        constexpr uint16_t Delay         = 7;           // WORD inter frame delay
        constexpr uint16_t Frames        = 8;           // WORD number of frames
        constexpr uint16_t Index         = 9;           // WORD current frame
        constexpr uint16_t Cluster       = 10;          // WORD image start cluster  pos (for FAT16 only)
        constexpr uint16_t Sector        = 11;          // WORD image start sector in cluster pos (for FAT16 only)
        constexpr uint16_t Tag           = 12;          // WORD user variable #1
        constexpr uint16_t Tag2          = 13;          // WORD user variable #2

        namespace Flag {
            constexpr uint16_t Enabled      = 0x8000;   // bit 15,  set for image enabled
            constexpr uint16_t Darken       = 0x4000;   // bit 14,  display dimmed
            constexpr uint16_t Lighten      = 0x2000;   // bit 13,  display bright
            constexpr uint16_t Touched      = 0x1000;   // bit 12,  touch test result
            constexpr uint16_t YLock        = 0x0800;   // bit 11,  stop Y movement
            constexpr uint16_t XLock        = 0x0400;   // bit 10,  stop X movement
            constexpr uint16_t Topmost      = 0x0200;   // bit 9,   draw on top of other images next update (auto reset)
            constexpr uint16_t StayOnTop    = 0x0100;   // bit 8,   draw on top of other images always
            constexpr uint16_t Movie        = 0x0080;   // bit 7,   image is a movie
            constexpr uint16_t NoGroup      = 0x0040;   // bit 6,   set to exclude image refresh when using img_Show(hndl, ALL);
            constexpr uint16_t TouchDisable = 0x0020;   // bit 5,   set to disable touch for this image, default=1 for movie, 0 for image
            constexpr uint16_t Colour16     = 0x0010;   // bit 4,   indicates 16 bit colour mode
        }  // namespace Flag
    }  // namespace Image

    namespace Touch {
        constexpr uint16_t Enable        = 0;
        constexpr uint16_t Disable       = 1;
        constexpr uint16_t RegionDefault = 2;
        constexpr uint16_t Status        = 0;
        constexpr uint16_t GetX          = 1;
        constexpr uint16_t GetY          = 2;
        constexpr uint16_t None          = 0;
        constexpr uint16_t Pressed       = 1;
        constexpr uint16_t Released      = 2;
        constexpr uint16_t Moving        = 3;
    }  // namespace Touch

    namespace File {
        constexpr uint16_t FirstCluster  = 0;           // WORD  first cluster
        constexpr uint16_t CurrCluster   = 1;           // WORD  current cluster in file
        constexpr uint16_t CurrSector    = 2;           // WORD  sector in current cluster
        constexpr uint16_t CurrSectorPos = 3;           // WORD  position in current sector
        constexpr uint16_t CurrSectorTop = 4;           // WORD  number bytes in current sector buffer
        constexpr uint16_t SeekPosLo     = 5;           // DWORD position in the file (LO word)
        constexpr uint16_t SeekPosHi     = 6;           //       position in the file (HI word)
        constexpr uint16_t SizeLo        = 7;           // DWORD file size (LO word)
        constexpr uint16_t SizeHi        = 8;           //       file size (HI word)
        constexpr uint16_t Time          = 9;           // WORD  last update time
        constexpr uint16_t Date          = 10;          // WORD  last update date
        constexpr uint16_t Name          = 11;          // WORD  12 byte buffer for filename
        constexpr uint16_t Mode          = 17;          // WORD  file mode 'r', 'w', 'a'
        constexpr uint16_t Attributes    = 18;          // WORD  files attributes
        constexpr uint16_t Pageflag      = 19;          // WORD  cache check flag
        constexpr uint16_t Entry         = 20;          // WORD  entry position in cur directory
        constexpr uint16_t Disk          = 21;          // WORD* pointer to DISK mount media structure
        constexpr uint16_t Buffer        = 22;          // WORD*  sector buffer

        namespace Error {
            constexpr uint16_t Ok              = 0;     // IDE function succeeded
            constexpr uint16_t IdeError        = 1;     // IDE command execution error
            constexpr uint16_t NotPresent      = 2;     // CARD not present
            constexpr uint16_t PartitionType   = 3;     // WRONG partition type, not FAT16
            constexpr uint16_t InvalidMbr      = 4;     // MBR sector invalid signature
            constexpr uint16_t InvalidBr       = 5;     // Boot Record invalid signature
            constexpr uint16_t DiskNotMntd     = 6;     // Media not mounted
            constexpr uint16_t FileNotFound    = 7;     // File not found in open for read
            constexpr uint16_t InvalidFile     = 8;     // File not open
            constexpr uint16_t FatEof          = 9;     // Fat attempt to read beyond EOF
            constexpr uint16_t Eof             = 10;    // Reached the end of file
            constexpr uint16_t InvalidCluster  = 11;    // Invalid cluster value > maxcls
            constexpr uint16_t DirFull         = 12;    // All root dir entry are taken
            constexpr uint16_t DiskFull        = 13;    // All clusters in partition are taken
            constexpr uint16_t FileOverwrite   = 14;    // A file with same name exist already
            constexpr uint16_t CannotInit      = 15;    // Cannot init the CARD
            constexpr uint16_t CannotReadMbr   = 16;    // Cannot read the MBR
            constexpr uint16_t MallocFailed    = 17;    // Malloc could not allocate the FILE struct
            constexpr uint16_t InvalidMode     = 18;    // Mode was not r.w.
            constexpr uint16_t FindError       = 19;    // Failure during FILE search
            constexpr uint16_t InvalidFname    = 20;    // bad filename
            constexpr uint16_t InvalidMedia    = 21;    // bad media
            constexpr uint16_t SectorReadFail  = 22;    // sector read failed
            constexpr uint16_t SectorWriteFail = 23;    // sector write failed
            constexpr uint16_t FileTimeout     = 26;    // Timeout during file I/O, probable unexpected media removal
        }  // namespace Error
    }  // namespace File

    namespace Disk {
        constexpr uint16_t FirstSectLo = 0;             // DWORD address of the first sector of the FAT partition (LO word)
        constexpr uint16_t FirstSectHi = 1;             //       address of the first sector of the FAT partition (HI word)
        constexpr uint16_t FatLo       = 2;             // DWORD address of FAT (LO word)
        constexpr uint16_t FatHi       = 3;             //       address of FAT (HI word)
        constexpr uint16_t RootLo      = 4;             // DWORD address of root directory (LO word)
        constexpr uint16_t RootHi      = 5;             //       address of root directory (HI word)
        constexpr uint16_t DataLo      = 6;             // DWORD address of data area (LO word)
        constexpr uint16_t DataHi      = 7;             //       address of data area (HI word)
        constexpr uint16_t MaxclusLo   = 8;             // DWORD max number of clusters in partition (LO word)
        constexpr uint16_t MaxclusHi   = 9;             //       max number of clusters in partition (HI word)
        constexpr uint16_t Maxroot     = 10;            // WORD  max entries in root directory
        constexpr uint16_t Fatsize     = 11;            // WORD  number of sectors in FAT
        constexpr uint16_t Fatcopies   = 12;            // WORD  number of fat copies
        constexpr uint16_t SectPerClus = 13;            // WORD  number of sectors per cluster
        constexpr uint16_t Type        = 14;            // WORD  type of fat
        constexpr uint16_t Buf         = 15;            // WORD  pointer to 512 byte info buffer
    }  // namespace Disk

    namespace Counter {
        constexpr uint16_t Off  = 0;                    // Disconnect the counter from the pin, "OVFfunction" is therefore ignored, and counting is inhibited.
        constexpr uint16_t Rise = 1;                    // increment counter on every rising edge
        constexpr uint16_t Fall = 2;                    // increment counter on every falling edge
        constexpr uint16_t Edge = 3;                    // increment on every rising and falling edge
    }  // namespace Counter

    namespace Pwm {
        constexpr uint16_t Off   = 0;
        constexpr uint16_t Plain = 1;
        constexpr uint16_t Servo = 2;
    }  // namespace Pwm

    namespace Screen {
        constexpr uint16_t Landscape  = 0;              // SCREEN_MODE (north)
        constexpr uint16_t LandscapeR = 1;              // SCREEN_MODE (south)
        constexpr uint16_t Portrait   = 2;              // SCREEN_MODE (west)
        constexpr uint16_t PortraitR  = 3;              // SCREEN_MODE (east)
        constexpr uint16_t Colour8    = 1;              // COLOUR_MODE 8 bit colour mode (not supported)
        constexpr uint16_t Colour16   = 0;              // COLOUR_MODE 16 bit colour mode
    }  // namespace Screen

    namespace Widget {
        constexpr uint16_t Checked           = 0;
        constexpr uint16_t Unchecked         = 1;
        constexpr uint16_t Down              = 0;
        constexpr uint16_t Up                = 1;
        constexpr uint16_t Hide              = 2;
        constexpr uint16_t Hyper             = 3;       // text only, no frame
        constexpr uint16_t ButtonDown        = 0;
        constexpr uint16_t ButtonUp          = 1;
        constexpr uint16_t SliderSunken      = 0;
        constexpr uint16_t SliderRaised      = 1;
        constexpr uint16_t SliderHide        = 2;
        constexpr uint16_t ProgressBarRaised = 0xFFFF;
        constexpr uint16_t ProgressBarSunken = 0xFFFE;
        constexpr uint16_t ProgressBarHide   = 2;
        constexpr uint16_t PanelSunken       = 0;
        constexpr uint16_t PanelRaised       = 1;
        constexpr uint16_t PanelHide         = 2;
        constexpr uint16_t PanelFrame        = 3;
    }  // namespace Widget

    namespace Timer {
        constexpr uint16_t Timer0 = 0;
        constexpr uint16_t Timer1 = 1;
        constexpr uint16_t Timer2 = 2;
        constexpr uint16_t Timer3 = 3;
        constexpr uint16_t Timer4 = 4;
        constexpr uint16_t Timer5 = 5;
        constexpr uint16_t Timer6 = 6;
        constexpr uint16_t Timer7 = 7;
    }  // namespace Timer

    namespace SysVar {
        constexpr uint16_t RandomLo            = 32;    // random number generator LO word
        constexpr uint16_t RandomHi            = 33;    // random number generator LO word
        constexpr uint16_t SystemTimerLo       = 34;    // 1msec 32 bit free running timer LO word
        constexpr uint16_t SystemTimerHi       = 35;    // 1msec 32 bit free running timer HI word
        constexpr uint16_t Tmr0                = 36;    // user timer0
        constexpr uint16_t Tmr1                = 37;    // user timer1
        constexpr uint16_t Tmr2                = 38;    // user timer2
        constexpr uint16_t Tmr3                = 39;    // user timer3 (10msec resolution)
        constexpr uint16_t Tmr4                = 40;    // user timer0
        constexpr uint16_t Tmr5                = 41;    // user timer1
        constexpr uint16_t Tmr6                = 42;    // user timer2
        constexpr uint16_t Tmr7                = 43;    // user timer3 (10msec resolution)
        constexpr uint16_t SysXMax             = 44;    // display hardware X res-1
        constexpr uint16_t SysYMax             = 45;    // display hardware Y res-1
        constexpr uint16_t GfxXMax             = 46;    // current display width-1 determined by portrait / landscape swapping
        constexpr uint16_t GfxYMax             = 47;    // current display width-1 determined by portrait / landscape swapping
        constexpr uint16_t GfxLeft             = 48;    // virtual left point for most recent object
        constexpr uint16_t GfxTop              = 49;    // virtual top point for most recent object
        constexpr uint16_t GfxRight            = 50;    // virtual right point for most recent object
        constexpr uint16_t GfxBottom           = 51;    // virtual bottom point for most recent object
        constexpr uint16_t GfxX1               = 52;    // clipped left point for current object
        constexpr uint16_t GfxY1               = 53;    // clipped top point for current object
        constexpr uint16_t GfxX2               = 54;    // clipped right point for current object
        constexpr uint16_t GfxY2               = 55;    // clipped bottom point for current object
        constexpr uint16_t GfxXOrg             = 56;    // current X origin
        constexpr uint16_t GfxYOrg             = 57;    // current Y origin
        constexpr uint16_t GfxThumbPercent     = 75;    // size of slider thumb as percentage
        constexpr uint16_t GfxThumbBorderDark  = 76;    // darker shadow of thumb
        constexpr uint16_t GfxThumbBorderLight = 77;    // lighter shadow of thumb
        constexpr uint16_t TouchXMinCal        = 78;    // touch calibration value
        constexpr uint16_t TouchYMinCal        = 79;    // touch calibration value
        constexpr uint16_t TouchXMaxCal        = 80;    // touch calibration value
        constexpr uint16_t TouchYMaxCal        = 81;    // touch calibration value
        constexpr uint16_t ImgWidth            = 82;    // width of currently loaded image
        constexpr uint16_t ImgHeight           = 83;    // height of currently loaded image
        constexpr uint16_t ImgFrameDelay       = 84;    // 0 if image, else inter frame delay for movie
        constexpr uint16_t ImgFlags            = 85;    // bit 4 determines colour mode, other bits reserved
        constexpr uint16_t ImgFrameCount       = 86;    // count of frames in a movie
        constexpr uint16_t ImgPixelCountLo     = 87;    // count of pixels in the current frame
        constexpr uint16_t ImgPixelCountHi     = 88;    // count of pixels in the current frame
        constexpr uint16_t ImgCurrentFrame     = 89;    // last frame shown
        constexpr uint16_t MediaAddressLo      = 90;    // uSD byte address LO
        constexpr uint16_t MediaAddressHi      = 91;    // uSD byte address HI
        constexpr uint16_t MediaSectorLo       = 92;    // uSD sector address LO
        constexpr uint16_t MediaSectorHi       = 93;    // uSD sector address HI
        constexpr uint16_t MediaSectorCount    = 94;    // uSD number of bytes remaining in sector
        constexpr uint16_t TextXPos            = 95;    // text current x pixel position
        constexpr uint16_t TextYPos            = 96;    // text current y pixel position
        constexpr uint16_t TextMargin          = 97;    // text left pixel pos for carriage return
        constexpr uint16_t TxtFontId           = 98;    // font type, 0 = system font, else pointer to user font
        constexpr uint16_t TxtFontMax          = 99;    // max number of chars in font
        constexpr uint16_t TxtFontOffset       = 100;   // starting offset (normally 0x20)
        constexpr uint16_t TxtFontWidth        = 101;   // current font width
        constexpr uint16_t TxtFontHeight       = 102;   // current font height
        constexpr uint16_t GfxTouchRegionX1    = 103;   // touch capture region
        constexpr uint16_t GfxTouchRegionY1    = 104;
        constexpr uint16_t GfxTouchRegionX2    = 105;
        constexpr uint16_t GfxTouchRegionY2    = 106;
        constexpr uint16_t GfxClipLeftVal      = 107;   // left clipping point (set with gfx_ClipWindow(...)
        constexpr uint16_t GfxClipTopVal       = 108;   // top clipping point (set with gfx_ClipWindow(...)
        constexpr uint16_t GfxClipRightVal     = 109;   // right clipping point (set with gfx_ClipWindow(...)
        constexpr uint16_t GfxClipBottomVal    = 110;   // bottom clipping point (set with gfx_ClipWindow(...)
        constexpr uint16_t GfxClipLeft         = 111;   // current clip value (reads full size if clipping turned off)
        constexpr uint16_t GfxClipTop          = 112;   // current clip value (reads full size if clipping turned off)
        constexpr uint16_t GfxClipRight        = 113;   // current clip value (reads full size if clipping turned off)
        constexpr uint16_t GfxClipBottom       = 114;   // current clip value (reads full size if clipping turned off)
        constexpr uint16_t GramPixelCountLo    = 115;   // LO word of count of pixels in the set GRAM area
        constexpr uint16_t GramPixelCountHi    = 116;   // HI word of count of pixels in the set GRAM area
        constexpr uint16_t TouchRawX           = 117;   // 12 bit raw A2D X value from touch screen
        constexpr uint16_t TouchRawY           = 118;   // 12 bit raw A2D Y value from touch screen
        constexpr uint16_t GfxLastCharWidth    = 119;   // calculated char width from last call to charWidth function
        constexpr uint16_t GfxLastCharHeight   = 120;   // calculated height from last call to charHeight function
        constexpr uint16_t GfxLastStrWidth     = 121;   // calculated width from last call to strWidth function
        constexpr uint16_t GfxLastStrHeight    = 122;   // calculated height from last call to strHeight function
        constexpr uint16_t PinCounterPa4       = 123;   // pin counter for PA4
        constexpr uint16_t PinCounterPa5       = 124;   // pin counter for PA5
        constexpr uint16_t PinCounterPa6       = 125;   // pin counter for PA6
        constexpr uint16_t PinCounterPa7       = 126;   // pin counter for PA7
        constexpr uint16_t PinCounterPa8       = 127;   // pin counter for PA8
        constexpr uint16_t PinCounterPa9       = 128;   // pin counter for PA9
        constexpr uint16_t PinEventPa4         = 129;   // pin counter rollover event for PA4
        constexpr uint16_t PinEventPa5         = 130;   // pin counter rollover event for PA5
        constexpr uint16_t PinEventPa6         = 131;   // pin counter rollover event for PA6
        constexpr uint16_t PinEventPa7         = 132;   // pin counter rollover event for PA7
        constexpr uint16_t PinEventPa8         = 133;   // pin counter rollover event for PA8
        constexpr uint16_t PinEventPa9         = 134;   // pin counter rollover event for PA9
        constexpr uint16_t Qen1CounterLo       = 135;   // quadrature encoder #1 counter LO
        constexpr uint16_t Qen1CounterHi       = 136;   // quadrature encoder #1 counter HI
        constexpr uint16_t Qen1Delta           = 137;   // quadrature encoder #1 delta count, reset when read
        constexpr uint16_t Qen2CounterLo       = 138;   // quadrature encoder #2 counter LO
        constexpr uint16_t Qen2CounterHi       = 139;   // quadrature encoder #2 counter HI
        constexpr uint16_t Qen2Delta           = 140;   // quadrature encoder #2 delta count, reset when read
        constexpr uint16_t FalseReason         = 141;   // explanation 'false' results, currently only for flash_ functions
    }  // namespace SysVar

    // number formatting bits
    // bit 15 14 13 12 11 10 9  8  7  6  5  4  3  2  1  0
    //     |  |  |  |   \___ ___/  |  \  /  \_____ _____/
    //     |  |  |  |       V      |   V          V
    //     |  |  |  |       |      |   |          |
    //     |  |  |  |  digit count |   |          |
    //     |  |  |  |  (nb 0 = 16) |   |          |____BASE (usually 2,10 or 16)
    //     |  |  |  |              |   |
    //     |  |  |  |              |   |___reserved (not used on Goldelox)
    //     |  |  |  |              |
    //     |  |  |  |              |____ string indicatior
    //     |  |  |  |                      0x80 = [STR]
    //     |  |  |  |                      0x81 = [CHR]
    //     |  |  |  |______
    //     |  |  |           1 = leading zeros included
    //     |  |  |           0 = leading zeros suppressed
    //     |  |  |
    //     |  |  |_______
    //     |  |           1 = leading zero blanking
    //     |  |
    //     |  |_____ sign bit (0 = signed, 1 = unsigned)
    //     |
    //     |______ 1 = space before unsigned number
    namespace NumberFormat {
        constexpr uint16_t Str     = 0x0080;            // display as string
        constexpr uint16_t Chr     = 0x0081;            // display as single char
        constexpr uint16_t Bin1    = 0x0102;            // binary, 1 digit, no leading zeroes
        constexpr uint16_t Bin2    = 0x0202;            // binary, 2 digits, no leading zeroes
        constexpr uint16_t Bin3    = 0x0302;            // binary, 3 digits, no leading zeroes
        constexpr uint16_t Bin4    = 0x0402;            // binary, 4 digits, no leading zeroes
        constexpr uint16_t Bin5    = 0x0502;            // binary, 5 digits, no leading zeroes
        constexpr uint16_t Bin6    = 0x0602;            // binary, 6 digits, no leading zeroes
        constexpr uint16_t Bin7    = 0x0702;            // binary, 7 digits, no leading zeroes
        constexpr uint16_t Bin8    = 0x0802;            // binary, 8 digits, no leading zeroes
        constexpr uint16_t Bin9    = 0x0902;            // binary, 9 digits, no leading zeroes
        constexpr uint16_t Bin10   = 0x0A02;            // binary, 10 digits, no leading zeroes
        constexpr uint16_t Bin11   = 0x0B02;            // binary, 11 digits, no leading zeroes
        constexpr uint16_t Bin12   = 0x0C02;            // binary, 12 digits, no leading zeroes
        constexpr uint16_t Bin13   = 0x0D02;            // binary, 13 digits, no leading zeroes
        constexpr uint16_t Bin14   = 0x0E02;            // binary, 14 digits, no leading zeroes
        constexpr uint16_t Bin15   = 0x0F02;            // binary, 15 digits, no leading zeroes
        constexpr uint16_t Bin16   = 0x0002;            // binary, 16 digits, no leading zeroes
        constexpr uint16_t BinZ    = 0x1002;            // binary, 16 digits, leading zeroes
        constexpr uint16_t Bin1Z   = 0x1102;            // binary, 1 digit, leading zeroes
        constexpr uint16_t Bin2Z   = 0x1202;            // binary, 2 digits, leading zeroes
        constexpr uint16_t Bin3Z   = 0x1302;            // binary, 3 digits, leading zeroes
        constexpr uint16_t Bin4Z   = 0x1402;            // binary, 4 digits, leading zeroes
        constexpr uint16_t Bin5Z   = 0x1502;            // binary, 5 digits, leading zeroes
        constexpr uint16_t Bin6Z   = 0x1602;            // binary, 6 digits, leading zeroes
        constexpr uint16_t Bin7Z   = 0x1702;            // binary, 7 digits, leading zeroes
        constexpr uint16_t Bin8Z   = 0x1802;            // binary, 8 digits, leading zeroes
        constexpr uint16_t Bin9Z   = 0x1902;            // binary, 9 digits, leading zeroes
        constexpr uint16_t Bin10Z  = 0x1A02;            // binary, 10 digits, leading zeroes
        constexpr uint16_t Bin11Z  = 0x1B02;            // binary, 11 digits, leading zeroes
        constexpr uint16_t Bin12Z  = 0x1C02;            // binary, 12 digits, leading zeroes
        constexpr uint16_t Bin13Z  = 0x1D02;            // binary, 13 digits, leading zeroes
        constexpr uint16_t Bin14Z  = 0x1E02;            // binary, 14 digits, leading zeroes
        constexpr uint16_t Bin15Z  = 0x1F02;            // binary, 15 digits, leading zeroes
        constexpr uint16_t Bin16Z  = 0x1002;            // binary, 16 digits, leading zeroes
        constexpr uint16_t BinZb   = 0x2002;            // binary, 16 digits, leading blanks
        constexpr uint16_t Bin1Zb  = 0x2102;            // binary, 1 digit, leading blanks
        constexpr uint16_t Bin2Zb  = 0x2202;            // binary, 2 digits, leading blanks
        constexpr uint16_t Bin3Zb  = 0x2302;            // binary, 3 digits, leading blanks
        constexpr uint16_t Bin4Zb  = 0x2402;            // binary, 4 digits, leading blanks
        constexpr uint16_t Bin5Zb  = 0x2502;            // binary, 5 digits, leading blanks
        constexpr uint16_t Bin6Zb  = 0x2602;            // binary, 6 digits, leading blanks
        constexpr uint16_t Bin7Zb  = 0x2702;            // binary, 7 digits, leading blanks
        constexpr uint16_t Bin8Zb  = 0x2802;            // binary, 8 digits, leading blanks
        constexpr uint16_t Bin9Zb  = 0x2902;            // binary, 9 digits, leading blanks
        constexpr uint16_t Bin10Zb = 0x2A02;            // binary, 10 digits, leading blanks
        constexpr uint16_t Bin11Zb = 0x2B02;            // binary, 11 digits, leading blanks
        constexpr uint16_t Bin12Zb = 0x2C02;            // binary, 12 digits, leading blanks
        constexpr uint16_t Bin13Zb = 0x2D02;            // binary, 13 digits, leading blanks
        constexpr uint16_t Bin14Zb = 0x2E02;            // binary, 14 digits, leading blanks
        constexpr uint16_t Bin15Zb = 0x2F02;            // binary, 15 digits, leading blanks
        constexpr uint16_t Bin16Zb = 0x2002;            // binary, 16 digits, leading blanks
        constexpr uint16_t Dec1    = 0x010A;            // signed decimal, 1 digit, no leading zeroes
        constexpr uint16_t Dec2    = 0x020A;            // signed decimal, 2 digits, no leading zeroes
        constexpr uint16_t Dec3    = 0x030A;            // signed decimal, 3 digits, no leading zeroes
        constexpr uint16_t Dec4    = 0x040A;            // signed decimal, 4 digits, no leading zeroes
        constexpr uint16_t Dec5    = 0x050A;            // signed decimal, 5 digits, no leading zeroes
        constexpr uint16_t DecZ    = 0x150A;            // signed decimal, 5 digits, leading zeroes
        constexpr uint16_t Dec1Z   = 0x110A;            // signed decimal, 1 digit, leading zeroes
        constexpr uint16_t Dec2Z   = 0x120A;            // signed decimal, 2 digits, leading zeroes
        constexpr uint16_t Dec3Z   = 0x130A;            // signed decimal, 3 digits, leading zeroes
        constexpr uint16_t Dec4Z   = 0x140A;            // signed decimal, 4 digits, leading zeroes
        constexpr uint16_t Dec5Z   = 0x150A;            // signed decimal, 5 digits, leading zeroes
        constexpr uint16_t DecZb   = 0x250A;            // signed decimal, 5 digits, leading blanks
        constexpr uint16_t Dec1Zb  = 0x210A;            // signed decimal, 1 digit, leading blanks
        constexpr uint16_t Dec2Zb  = 0x220A;            // signed decimal, 2 digits, leading blanks
        constexpr uint16_t Dec3Zb  = 0x230A;            // signed decimal, 3 digits, leading blanks
        constexpr uint16_t Dec4Zb  = 0x240A;            // signed decimal, 4 digits, leading blanks
        constexpr uint16_t Dec5Zb  = 0x250A;            // signed decimal, 5 digits, leading blanks
        constexpr uint16_t Udec    = 0x450A;            // unsigned decimal, 5 digits, no leading zeroes
        constexpr uint16_t Udec1   = 0x410A;            // unsigned decimal, 1 digit, no leading zeroes
        constexpr uint16_t Udec2   = 0x420A;            // unsigned decimal, 2 digits, no leading zeroes
        constexpr uint16_t Udec3   = 0x430A;            // unsigned decimal, 3 digits, no leading zeroes
        constexpr uint16_t Udec4   = 0x440A;            // unsigned decimal, 4 digits, no leading zeroes
        constexpr uint16_t Udec5   = 0x450A;            // unsigned decimal, 5 digits, no leading zeroes
        constexpr uint16_t UdecZ   = 0x550A;            // unsigned decimal, 5 digits, leading zeroes
        constexpr uint16_t Udec1Z  = 0x510A;            // unsigned decimal, 1 digit, leading zeroes
        constexpr uint16_t Udec2Z  = 0x520A;            // unsigned decimal, 2 digits, leading zeroes
        constexpr uint16_t Udec3Z  = 0x530A;            // unsigned decimal, 3 digits, leading zeroes
        constexpr uint16_t Udec4Z  = 0x540A;            // unsigned decimal, 4 digits, leading zeroes
        constexpr uint16_t Udec5Z  = 0x550A;            // unsigned decimal, 5 digits, leading zeroes
        constexpr uint16_t UdecZb  = 0x650A;            // unsigned decimal, 5 digits, leading blanks
        constexpr uint16_t Udec1Zb = 0x610A;            // unsigned decimal, 1 digit, leading blanks
        constexpr uint16_t Udec2Zb = 0x620A;            // unsigned decimal, 2 digits, leading blanks
        constexpr uint16_t Udec3Zb = 0x630A;            // unsigned decimal, 3 digits, leading blanks
        constexpr uint16_t Udec4Zb = 0x640A;            // unsigned decimal, 4 digits, leading blanks
        constexpr uint16_t Udec5Zb = 0x650A;            // unsigned decimal, 5 digits, leading blanks
        constexpr uint16_t Hex1    = 0x1110;            // hex, 1 digit, leading zeroes
        constexpr uint16_t Hex2    = 0x1210;            // hex, 2 digits, leading zeroes
        constexpr uint16_t Hex3    = 0x1310;            // hex, 3 digits, leading zeroes
        constexpr uint16_t Hex4    = 0x1410;            // hex, 4 digits, leading zeroes
        constexpr uint16_t HexZ    = 0x0410;            // hex, 4 digits, no leading zeroes
        constexpr uint16_t Hex1Z   = 0x0110;            // hex, 1 digit, no leading zeroes
        constexpr uint16_t Hex2Z   = 0x0210;            // hex, 2 digits, no leading zeroes
        constexpr uint16_t Hex3Z   = 0x0310;            // hex, 3 digits, no leading zeroes
        constexpr uint16_t Hex4Z   = 0x0410;            // hex, 4 digits, no leading zeroes
        constexpr uint16_t HexZb   = 0x2410;            // hex, 4 digits, leading blanks
        constexpr uint16_t Hex1Zb  = 0x2110;            // hex, 1 digit, leading blanks
        constexpr uint16_t Hex2Zb  = 0x2210;            // hex, 2 digits, leading blanks
        constexpr uint16_t Hex3Zb  = 0x2310;            // hex, 3 digits, leading blanks
        constexpr uint16_t Hex4Zb  = 0x2410;            // hex, 4 digits, leading blanks
    }  // namespace NumberFormat

    namespace Colors {
        constexpr uint16_t AliceBlue         = 0xF7DF;
        constexpr uint16_t AntiqueWhite      = 0xFF5A;
        constexpr uint16_t Aqua              = 0x07FF;
        constexpr uint16_t Aquamarine        = 0x7FFA;
        constexpr uint16_t Azure             = 0xF7FF;
        constexpr uint16_t Beige             = 0xF7BB;
        constexpr uint16_t Bisque            = 0xFF38;
        constexpr uint16_t Black             = 0x0000;
        constexpr uint16_t BlanchedAlmond    = 0xFF59;
        constexpr uint16_t Blue              = 0x001F;
        constexpr uint16_t BlueViolet        = 0x895C;
        constexpr uint16_t Brown             = 0xA145;
        constexpr uint16_t BurlyWood         = 0xDDD0;
        constexpr uint16_t CadetBlue         = 0x5CF4;
        constexpr uint16_t Chartreuse        = 0x7FE0;
        constexpr uint16_t Chocolate         = 0xD343;
        constexpr uint16_t Coral             = 0xFBEA;
        constexpr uint16_t CornflowerBlue    = 0x64BD;
        constexpr uint16_t Cornsilk          = 0xFFDB;
        constexpr uint16_t Crimson           = 0xD8A7;
        constexpr uint16_t Cyan              = 0x07FF;
        constexpr uint16_t DarkBlue          = 0x0011;
        constexpr uint16_t DarkCyan          = 0x0451;
        constexpr uint16_t DarkGoldenrod     = 0xBC21;
        constexpr uint16_t DarkGray          = 0xAD55;
        constexpr uint16_t DarkGreen         = 0x0320;
        constexpr uint16_t DarkKhaki         = 0xBDAD;
        constexpr uint16_t DarkMagenta       = 0x8811;
        constexpr uint16_t DarkOliveGreen    = 0x5345;
        constexpr uint16_t DarkOrange        = 0xFC60;
        constexpr uint16_t DarkOrchid        = 0x9999;
        constexpr uint16_t DarkRed           = 0x8800;
        constexpr uint16_t DarkSalmon        = 0xECAF;
        constexpr uint16_t DarkSeaGreen      = 0x8DF1;
        constexpr uint16_t DarkSlateBlue     = 0x49F1;
        constexpr uint16_t DarkSlateGray     = 0x2A69;
        constexpr uint16_t DarkTurquoise     = 0x067A;
        constexpr uint16_t DarkViolet        = 0x901A;
        constexpr uint16_t DeepPink          = 0xF8B2;
        constexpr uint16_t DeepSkyBlue       = 0x05FF;
        constexpr uint16_t DimGray           = 0x6B4D;
        constexpr uint16_t DodgerBlue        = 0x1C9F;
        constexpr uint16_t Firebrick         = 0xB104;
        constexpr uint16_t FloralWhite       = 0xFFDE;
        constexpr uint16_t ForestGreen       = 0x2444;
        constexpr uint16_t Fuchsia           = 0xF81F;
        constexpr uint16_t Gainsboro         = 0xDEFB;
        constexpr uint16_t GhostWhite        = 0xFFDF;
        constexpr uint16_t Gold              = 0xFEA0;
        constexpr uint16_t Goldenrod         = 0xDD24;
        constexpr uint16_t Gray              = 0x8410;
        constexpr uint16_t Green             = 0x0400;
        constexpr uint16_t GreenYellow       = 0xAFE5;
        constexpr uint16_t Honeydew          = 0xF7FE;
        constexpr uint16_t HotPink           = 0xFB56;
        constexpr uint16_t IndianRed         = 0xCAEB;
        constexpr uint16_t Indigo            = 0x4810;
        constexpr uint16_t Ivory             = 0xFFFE;
        constexpr uint16_t Khaki             = 0xF731;
        constexpr uint16_t Lavender          = 0xE73F;
        constexpr uint16_t LavenderBlush     = 0xFF9E;
        constexpr uint16_t LawnGreen         = 0x7FE0;
        constexpr uint16_t LemonChiffon      = 0xFFD9;
        constexpr uint16_t LightBlue         = 0xAEDC;
        constexpr uint16_t LightCoral        = 0xF410;
        constexpr uint16_t LightCyan         = 0xE7FF;
        constexpr uint16_t LightGold         = 0xFFDA;
        constexpr uint16_t LightGreen        = 0x9772;
        constexpr uint16_t LightGrey         = 0xD69A;
        constexpr uint16_t LightPink         = 0xFDB8;
        constexpr uint16_t LightSalmon       = 0xFD0F;
        constexpr uint16_t LightSeaGreen     = 0x2595;
        constexpr uint16_t LightSkyBlue      = 0x867F;
        constexpr uint16_t LightSlateGray    = 0x7453;
        constexpr uint16_t LightSteelBlue    = 0xB63B;
        constexpr uint16_t LightYellow       = 0xFFFC;
        constexpr uint16_t Lime              = 0x07E0;
        constexpr uint16_t LimeGreen         = 0x3666;
        constexpr uint16_t Linen             = 0xFF9C;
        constexpr uint16_t Magenta           = 0xF81F;
        constexpr uint16_t Maroon            = 0x8000;
        constexpr uint16_t MediumAquamarine  = 0x6675;
        constexpr uint16_t MediumBlue        = 0x0019;
        constexpr uint16_t MediumOrchid      = 0xBABA;
        constexpr uint16_t MediumPurple      = 0x939B;
        constexpr uint16_t MediumSeaGreen    = 0x3D8E;
        constexpr uint16_t MediumSlateBlue   = 0x7B5D;
        constexpr uint16_t MediumSpringGreen = 0x07D3;
        constexpr uint16_t MediumTurquoise   = 0x4E99;
        constexpr uint16_t MediumVioletRed   = 0xC0B0;
        constexpr uint16_t MidnightBlue      = 0x18CE;
        constexpr uint16_t MintCream         = 0xF7FF;
        constexpr uint16_t MistyRose         = 0xFF3C;
        constexpr uint16_t Moccasin          = 0xFF36;
        constexpr uint16_t NavajoWhite       = 0xFEF5;
        constexpr uint16_t Navy              = 0x0010;
        constexpr uint16_t OldLace           = 0xFFBC;
        constexpr uint16_t Olive             = 0x8400;
        constexpr uint16_t OliveDrab         = 0x6C64;
        constexpr uint16_t Orange            = 0xFD20;
        constexpr uint16_t OrangeRed         = 0xFA20;
        constexpr uint16_t Orchid            = 0xDB9A;
        constexpr uint16_t PaleGoldenrod     = 0xEF55;
        constexpr uint16_t PaleGreen         = 0x9FD3;
        constexpr uint16_t PaleTurquoise     = 0xAF7D;
        constexpr uint16_t PaleVioletRed     = 0xDB92;
        constexpr uint16_t PapayaWhip        = 0xFF7A;
        constexpr uint16_t PeachPuff         = 0xFED7;
        constexpr uint16_t Peru              = 0xCC27;
        constexpr uint16_t Pink              = 0xFE19;
        constexpr uint16_t Plum              = 0xDD1B;
        constexpr uint16_t PowderBlue        = 0xB71C;
        constexpr uint16_t Purple            = 0x8010;
        constexpr uint16_t Red               = 0xF800;
        constexpr uint16_t RosyBrown         = 0xBC71;
        constexpr uint16_t RoyalBlue         = 0x435C;
        constexpr uint16_t SaddleBrown       = 0x8A22;
        constexpr uint16_t Salmon            = 0xFC0E;
        constexpr uint16_t SandyBrown        = 0xF52C;
        constexpr uint16_t SeaGreen          = 0x2C4A;
        constexpr uint16_t SeaShell          = 0xFFBD;
        constexpr uint16_t Sienna            = 0xA285;
        constexpr uint16_t Silver            = 0xC618;
        constexpr uint16_t SkyBlue           = 0x867D;
        constexpr uint16_t SlateBlue         = 0x6AD9;
        constexpr uint16_t SlateGray         = 0x7412;
        constexpr uint16_t Snow              = 0xFFDF;
        constexpr uint16_t SpringGreen       = 0x07EF;
        constexpr uint16_t SteelBlue         = 0x4416;
        constexpr uint16_t Tan               = 0xD5B1;
        constexpr uint16_t Teal              = 0x0410;
        constexpr uint16_t Thistle           = 0xDDFB;
        constexpr uint16_t Tomato            = 0xFB08;
        constexpr uint16_t Turquoise         = 0x471A;
        constexpr uint16_t Violet            = 0xEC1D;
        constexpr uint16_t Wheat             = 0xF6F6;
        constexpr uint16_t White             = 0xFFFF;
        constexpr uint16_t WhiteSmoke        = 0xF7BE;
        constexpr uint16_t Yellow            = 0xFFE0;
        constexpr uint16_t YellowGreen       = 0x9E66;
    }  // namespace Colors

    namespace Err4D {
        constexpr uint16_t Ok      = 0;
        constexpr uint16_t Timeout = 1;
        constexpr uint16_t Nak     = 2;                 // other than ACK received
    }  // namespace Err4D

}  // namespace Diablo

// Array argument aliases (were macro typedefs). Kept at global scope because
// they appear in the public Diablo_Serial_4DLib method signatures.
using t4DWordArray = word *;
using t4DByteArray = char *;
using t4DSector    = char *;

#endif  // DIABLO_CONST4D_H
