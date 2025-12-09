#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    srand(time(NULL));

    int f = rand()%N;

    printf("%d", f);
    
    return 0;

}