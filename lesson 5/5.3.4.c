#include <stdio.h>

int main(void) { 
    double ar[20];
    double sum = 0.0;
    int counter = 0;

    for(int i = 0; scanf("%lf",&ar[i]) == 1; i++, counter++){
        sum += ar[i];
    }

    double arif = sum / (double)counter ;
    printf("%.2lf", arif);

    return 0;
}