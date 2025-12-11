#include <stdio.h>
#include <math.h>

int main(void){
    int s = 0, n;
    if(scanf("%d", &n) != 1) {
        printf("eror input");
        return 0;
    }
    int i = 0;
    while(++i <= n && i<10) 
        s += n*n;
    printf("%d", s);
    
}