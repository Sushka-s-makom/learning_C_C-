#include <stdio.h>
int main(void)
{
    long a, b;
    double c;
    scanf("%ld, %ld, %*lf, %lf", &a, &b, &c);
    printf("%ld %ld %.2lf", a, b, c);
    return 0;
}
