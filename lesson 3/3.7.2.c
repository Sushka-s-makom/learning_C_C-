#include <stdio.h>
#define MAX_WIDTH 256
#define MAX_HEIGHT 500
int main(void){
    double widht, height; 
    scanf("%lf %lf", &widht, &height);

    if ( widht >(double)MAX_WIDTH) widht = MAX_WIDTH;
    if (height >(double) MAX_HEIGHT) height = MAX_HEIGHT;
    
    printf("%.1lf %.1lf", widht, height);
    

    return 0; 
}