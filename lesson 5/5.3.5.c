#include <stdio.h>

int main(void)
{
    short var_1;
    int var_2;
    long long var_3;

    scanf("%hd, %d, %lld", &var_1, &var_2, &var_3);

    char ar[40];
    char *ptr_ar = ar;

    // копируем var_1
    char *p1 = (char *)&var_1;
    for (int i = 0; i < sizeof(var_1); i++) {
        *ptr_ar = *p1;
        ptr_ar++;
        p1++;
    }

    // копируем var_2
    char *p2 = (char *)&var_2;
    for (int i = 0; i < sizeof(var_2); i++) {
        *ptr_ar = *p2;
        ptr_ar++;
        p2++;
    }

    // копируем var_3
    char *p3 = (char *)&var_3;
    for (int i = 0; i < sizeof(var_3); i++) {
        *ptr_ar = *p3;
        ptr_ar++;
        p3++;
    }

    // вывод (беззнаковые десятичные числа)
    int total = sizeof(var_1) + sizeof(var_2) + sizeof(var_3);

    for (int i = 0; i < total; i++) {
        printf("%u ", (unsigned char)ar[i]);
    }

    return 0;
}

