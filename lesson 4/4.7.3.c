#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);

    char *ptr = (char*)&count;  

    for(int i = 0; i < sizeof(count); ++i) { 
        *ptr = *ptr |9;
        ptr++;
    }
    printf("%d", count);

    return 0;
}