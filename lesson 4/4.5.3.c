#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd", &b);

    // здесь продолжайте программу
    short *ptr_a = &a;
    *ptr_a = b;
    printf("%hd", a );

    
    return 0;
}