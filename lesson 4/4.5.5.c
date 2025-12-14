#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd, %hd", &a, &b);
    short *ptr_a = &a;
    short *ptr_b = &b;
    short res = *ptr_a * *ptr_b;
    printf("%hd", res);

    // здесь продолжайте программу

    return 0;
}
