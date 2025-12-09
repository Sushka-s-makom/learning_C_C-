#include <stdio.h>
#define KMH *3600.0/1000.0

int main(void){
    int s_mc; 
    scanf("%d", &s_mc);
    double s_mh = (double)s_mc KMH;

    printf("%.2lf", s_mh );
    

    return 0; 
}