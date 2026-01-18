#include <stdio.h>

int prod_ar(int ar[], int length)
{
    int res = 1;
    for (int i = 0; i < length; i++) {
        res *= ar[i];
    }
    return res;
}

int main(void)
{
    int ar[20];
    int count = 0;

    while (count < 20 && scanf("%d", &ar[count]) == 1) {
        count++;
    }

    printf("%d", prod_ar(ar, count));

    return 0;
}
