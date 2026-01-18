#include <stdio.h>

typedef enum {
    param_int = 1,
    param_double= 2
} TYPE_PARAM;

typedef union {
    int data_i;
    double data_d;
} DATA;

DATA sum_ar( DATA ar[], size_t count,  TYPE_PARAM type)
{
    DATA sum;
    if(type == param_int){ 
        int s = 0;
        for( size_t i = 0; i < count; i++){ 
        s+= ar[i].data_i;
        sum.data_i = s;
        }
    }
    else if (type == param_double){
        double s = 0.0;
        for(size_t i = 0; i < count; i++){ 
            s += ar[i].data_d;
            sum.data_d = s;
        }
    }
     
    return sum;
}
int main(void) // Я НЕ ЗНАЮ КАК ВЫЗВАТЬ ФУНКЦИЮ ЭТО ПЗДЦ, ЭТО СПИСАЛ
{
    DATA res_1 = sum_ar((DATA[]){
                           {.data_i = 1}, {.data_i = 2}, {.data_i = 3},
                           {.data_i = 4}, {.data_i = 5}
                       }, 5, param_int);

    DATA res_2 = sum_ar((DATA[]){
                           {.data_d = 1.1}, {.data_d = 2.2}, {.data_d = 3.3},
                           {.data_d = 4.4}, {.data_d = 5.5}
                       }, 5, param_double);

    (void)res_1;
    (void)res_2;

    return 0;
}