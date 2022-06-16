#include "io.h"
#include "fb.h"

void main() {
    uart_init();
    fb_init();

    drawRect(150, 150, 400, 400, 0x03, 0);
    drawCircle(960, 540, 250, 0x2e, 1);

    drawString(100, 100, "Hello World", 0x0f);

    drawLine(100, 500, 350, 700, 0x0c);

    while(1);
}