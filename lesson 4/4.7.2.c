#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);

    short *ptr = (short*)&value;  

    for(int i = 0; i < sizeof(value) / sizeof(short); ++i) { // чек что i меньше 2 байтов(int 4 byte short 2 byte байтов)
        *ptr =  *ptr + 1 ;
        ptr++;
    }
    printf("%d", value);

    return 0;
}