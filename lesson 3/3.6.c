#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   srand(time(NULL));
    int f = rand();
    int fu = rand();
    printf("%d %d %d", f, fu, rand());
    
    return 0;

}