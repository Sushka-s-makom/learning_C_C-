#include <stdio.h>

/*
здесь набор критериальных функций с сигнатурами:
int <имя функции>(int );
*/
int is_odd( int a)
{ 
    return a % 2 != 0;
}
int is_positive( int a)
{ 
    return a >= 0;
}
int is_negative( int a)
{ 
    return a < 0;
}
int deflt( int a)
{ 
    return 1;
}
int sum_ar(const int *ar, size_t len_ar, int (*ptr)(int))
{
    int res = 0;

    for( size_t i = 0; i < len_ar; i++){
        if( ptr(ar[i])){ 
            res += ar[i];
        }   
    }
    return res;
    
}

int main(void)
{
    // здесь массив указателей funcs на критериальные функции
    int (*ptr_odd)(int);
    ptr_odd = is_odd;

    int (*funcs[])(int) = {
    is_odd,
    is_positive,
    is_negative,
    deflt
    };

    int marks[20] = {0};

    int item = 0;
    scanf("%d", &item); // выбор критерия суммирования

    int x;
    int count = 0;
    while(scanf("%d", &x) == 1) {
        // здесь формирование значений массива marks
        if (count < 20) {
            marks[count++] = x;
        }
    }

    int sum = 0; // переменная для хранения суммы
    switch(item) {
        case 1: sum = sum_ar(marks, count, funcs[0]);
            break;
        case 2: sum = sum_ar(marks, count, funcs[1]);
            break;
        case 3: sum = sum_ar(marks, count, funcs[2]);
            break;
        default: sum = sum_ar(marks, count, funcs[3]);
            break;
    }

    printf("%d", sum);

    return 0;
}