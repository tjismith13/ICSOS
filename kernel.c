#include "io.h"
#include "fb.h"

void main() {
    uart_init();
    fb_init();

    // Arrow 1
    drawRect(0,     0,    500,   300,   0xFF, 1);
    drawRect(250,   300,  750,   600,   0xFF, 1);
    drawRect(500,   600, 1000,  900,  0xFF, 1);
    drawRect(250,   900, 750,   1200,   0xFF, 1);
    drawRect(0,     1200, 500,   1500,   0xFF, 1);

    // Arrow 2
    drawRect(1000,     0,    1500,   300,   0xFF, 1);
    drawRect(1250,   300,  1750,   600,   0xFF, 1);
    drawRect(1500,   600, 2000,  900,  0xFF, 1);
    drawRect(1250,   900, 1750,   1200,   0xFF, 1);
    drawRect(1000,     1200, 1500,   1500,   0xFF, 1);

    drawRect(2500, 0, 2750, 1750, 0xFF, 1);
    drawRect(2000, 1000, 2500, 1250, 0xFF, 1);
    drawRect(2000, 0, 2250, 1000, 0xFF, 1);


   
   
    // drawCircle(960, 540, 250, 0x2e, 1);

     

    // drawLine(100, 500, 350, 700, 0x0c);

    while(1);
}