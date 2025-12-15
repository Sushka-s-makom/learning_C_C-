#include <stdio.h>
#define TOTAL   5

int main(void){
        int ar_1[TOTAL];
        int ar_2[TOTAL*2];
        for (int i = 0; i < TOTAL; i++) {
            scanf("%d", &ar_1[i]);
    }
        for( int i = 0; i < TOTAL; i++){
           ar_2[i] = ar_1[i];

        }
        for(int i = TOTAL; i < TOTAL*2; i++){
            ar_2[i] = -1;
        }
        return 0;
    }