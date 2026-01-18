#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    bool g = !(x >= -5.0 && x <= 10.0 && y >= 0.0 && y <= 7.0);
    printf("%d", g);

    return 0;
}

