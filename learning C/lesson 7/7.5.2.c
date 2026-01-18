#include <stdio.h>

enum calc_types {
    _perimetr = 1,
    _square = 2
};

double calc_rect(double width, double height, enum calc_types type)
{
    if (type == _square)
        return width * height;
    else if (type == _perimetr)
        return 2.0 * (width + height);

    return 0.0;
}

int main(void)
{
    int type;
    double width, height;

    scanf("%d %lf %lf", &type, &width, &height);
        

    double result = calc_rect(width, height, type);
    printf("%.1f", result);

    return 0;
}
