#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int f = rand()%(b -a + 1) + a;

    printf("%d", f);
    
    return 0;

}