#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int a, b;
    scanf("%d, %d", &a, &b);
    double tg = (double)a/(double)b;
    double atg = atan(tg);
    printf("%.2lf %.2lf", tg, atg);



    return 0;

}