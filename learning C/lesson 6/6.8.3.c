#include <stdio.h>
#include <stdarg.h>

double sumf(const char* format, ...) // format - указатель на первый символ строки,
//format → '+' '+' ' ' '+' ' ' '+' '\0'
{ 
    double sum = 0.0;
    va_list arg; 
    va_start ( arg, format);

    for(const char* p = format; *p != '\0'; p++ ){ 
        if( *p == '+'){
            sum += va_arg( arg, double);
        }
        else{ 
            va_arg(arg, double);
        }
    }
    va_end(arg);

    return sum;
}

int main(void)
{ 
    double res = sumf("++ + +", 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    printf("%.2f", res);

    return 0;
}