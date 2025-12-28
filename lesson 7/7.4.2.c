#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 20
int main(void)
{
    double digits[MAX_LEN];
    int count = 0;

    for( int i = 0; i < MAX_LEN && scanf("%lf", &digits[i]) == 1; i++){
        count++;
    }

    double* ptr_d = malloc(sizeof(double) * count);
    
    for(int i = 0; i < count; i++){
        ptr_d[i] = digits[i];
    }

    free(ptr_d);

    return 0;
}