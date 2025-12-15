#include <stdio.h>


int main(void){
        int digits[5];
        for (int i = 0; i < 5; i++) {
            scanf("%d", &digits[i]);
    }
        for( int i = 0; i < 5; i++){
            printf("%d ", (int)digits[i]);

        }
        return 0;
    }