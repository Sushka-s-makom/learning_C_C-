#include <stdio.h>

int main(void)
{
    double value;
    scanf("%lf", &value);

    char *ptr = (char*)&value;  

    for(int i = 0; i < sizeof(value); ++i) { // чек что i меньше 8 байтов(дабл 8 байтов)
        printf("%d ", *ptr);   // %d тк выводим числа меньеш 255 
        ptr++;
    }

    return 0;
}
