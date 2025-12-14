#include <stdio.h>

int main(void)
{
    int pr = 1;
    int x;

    do{
        
        scanf("%d", &x);
        if (x < 0)
            continue;
        pr *= x;      
    } while(x != 0);
    printf("(%d", pr);

    return 0;
}