#include <stdio.h>

int main()
{
    int value = 0xFEDCBA98;

    printf("before -- 0x%X\n", value);

    value &= ~(0xFF << 2 * 8);
    value |= (0x11 << 2 * 8);

    printf("after  -- 0x%X\n", value);
}