#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int i = 0;
    while(n >0){
        i += n%10;
        n = (n - n%10)/10;
    
    }
    printf("%d", i);

    return 0;
}