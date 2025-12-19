#include <stdio.h>

#define ROWS    3
#define COLS    5

int main(void)
{
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];
    double mean[3];
    int sum = 0, count;

    short x;
    for(int i = 0;i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;

    for(int i = 0; i <ROWS; i++){ 
        count = 0;
        sum = 0;

        for( int j = 0; j < COLS; j++){ 
            sum += vls[i][j];
            count++;
        }
        mean[i] = (double)sum / (double)count;
    }
    for(int i = 0; i < 3; i++){
        printf("%.2f ", mean[i]);
    }


   return 0;
}