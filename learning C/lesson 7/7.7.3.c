#include <stdio.h>

typedef struct {
    double re; // действительная часть 
    double im; // мнимая часть
} COMPLEX;

COMPLEX complex_sum(COMPLEX cmp_1, COMPLEX cmp_2)
{
    COMPLEX res;
    res.re = cmp_1.re + cmp_2.re;
    res.im = cmp_1.im + cmp_2.im;
    return res;
}

int main(void)
{
    COMPLEX cmp_1, cmp_2, res;

    scanf("%lf, %lf, %lf, %lf",
          &cmp_1.re, &cmp_1.im,
          &cmp_2.re, &cmp_2.im);

    res = complex_sum(cmp_1, cmp_2);


    return 0;
}
