#include <stdio.h>

int main()
{
    int i;
    int value = 0xFEDCBA98;
    int tmp;

    for(i = 0; i < 4; ++i) {
        tmp = (value >> (i * 8)) & 0xFF;
        printf("0x%X\n", tmp);
    }

    return 0;
}