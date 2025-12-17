#include <stdio.h>

int main(void){
    int ar[10];
    int *ptr_ar =&ar;
    int good = 1;
    for(int i = 0; i < 10 &&  scanf("%d", &*ptr_ar) == 1; i++, ptr_ar ++){
        if(*ptr_ar < 0 || *ptr_ar % 2 == 0){
            good  = 0;
        }       
    }
    printf("%d", good);

    return 0;
}