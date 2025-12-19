#include <stdio.h>
#include <stdlib.h>

#define SIZE    10
#define MINES   12

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    for(int i = 0; i < MINES; i++){
        pg[rand() % SIZE][rand() % SIZE] = "*";
    }

    
    return 0;
}