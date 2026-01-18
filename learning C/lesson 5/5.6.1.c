#include <stdio.h> 
#define ROWS 3
#define COLS 3

int main(void){ 
    int ar_2D[ROWS][COLS];
    for( int i = 0; i < ROWS; i++){ 

        for(int j = 0; j < COLS; j++){ 
            if (scanf("%d", &ar_2D[i][j]) == 1){ 
                //empty
            }
        }
    }
    return 0;
}