#include <stdio.h>

double max_2(double a, double b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    double a, b;
    scanf("%lf, %lf", &a, &b);

    double (*ptr) (double, double); 
    ptr = max_2;
    printf("%.1lf", ptr(a, b));

   return 0;
}