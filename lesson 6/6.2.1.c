#include <stdio.h>

double get_mean2(int a, int b)
{ 
    double res = (double)(a + b)/2.00;
    return res;
}
int main(void)
{
    int a, b;
    scanf("%d %d", &a , &b);
    printf("%.1f", get_mean2(a, b));

    return 0;
}