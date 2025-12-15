#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd, %hd", &a, &b);

    // здесь продолжайте программу
    short *ptr_a = &a, *ptr_b = &b;
    void *ptr_c;
    
    ptr_c = ptr_a; 
    ptr_a = ptr_b;
    ptr_b = ptr_a;

    printf("%hd %hd", *ptr_a , *ptr_b);

    return 0;
}