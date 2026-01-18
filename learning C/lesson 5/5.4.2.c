#include <stdio.h>

int main(void){
    int ar[100];
    int * const ptr_ar = ar;
    int *ptr = ar;
    int x;
    
    for (;; ptr++) {
        if (scanf("%d", &x) != 1)
            break;           // ошибка ввода
        
        if (x == 78)
            break;          // стоп-значение
        
        *ptr = x;           // записываем число
    }

    // выводим только записанные элементы
    for (int *p = ptr_ar; p < ptr; p++) {
        printf("%d ", *p);
    }

    return 0;
}

