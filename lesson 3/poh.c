#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
     unsigned short N;
    scanf("%hu", &N);
    double korobok = ceil( 7.0*N/ 100.0);
    printf ("%d", (int)korobok);

    return 0;

}