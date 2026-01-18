#include <stdio.h>

#include <stdbool.h>
int main(void)
{
    double x;
    scanf("%lf", &x);
    int b = (int)x;
    bool f = b % 5 == 0;        
    printf("%d", f);
    return 0;
}