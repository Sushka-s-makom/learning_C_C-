#include <stdio.h> 
#define ROWS 4
#define COLS 3

int main(void){ 
    int ar_2D[ROWS][COLS];
    
    int count = 0; // Счётчик для управления пробелами
    for( int i = 0; i < ROWS; i++){ 

        for(int j = 0; j < COLS; j++){ 

            if (scanf("%d", &ar_2D[i][j]) == 1){ 
                //empty
            }
        }
    }
    for( int j = 0; j < COLS; j++){ 

        for(int i = 0; i < ROWS; i++){
            printf("%d", ar_2D[i][j]);
            if (i < ROWS - 1) { 
                printf(" "); 
            }     
        }
     printf("\n");
    }

    return 0;
}