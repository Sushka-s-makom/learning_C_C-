#include <stdio.h>
#include <stdarg.h>
double mean(int total, ...)
{
    double  sum = 0;
    va_list arg;
    va_start(arg, total);
    for( int i = 0; i < total; i++){
        sum += va_arg(arg, int);
    }
    va_end(arg);
    return sum / total;
}
int main(void)
{
    printf("%.2lf", mean(7, 5, -10, 11, 0, 12, 4, 2) );


    return 0;
}