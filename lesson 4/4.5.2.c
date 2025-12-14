#include <stdio.h>

int main(void)
{
    int init, k;

    scanf("%d", &init);
    k = init;

    // здесь продолжайте программу
    int  *ptr_k = &k;
    *ptr_k +=10;

    return 0;
}