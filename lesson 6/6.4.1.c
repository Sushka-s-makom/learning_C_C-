#include <stdio.h>

int sum_ar(int ar[], int length)
{
    int res = 0;
    for (int i = 0; i < length; i++) {
        res += ar[i];
    }
    return res;
}

int main(void)
{
    int ar[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &ar[i]);
    }

    printf("%d", sum_ar(ar, 10));

    return 0;
}
