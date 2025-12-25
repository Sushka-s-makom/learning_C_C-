#include <stdio.h>
#define MAX_RECURSION    4
void  recursive( int a)
{ 
    if( a > MAX_RECURSION){ 
        return;
    }

    recursive(a + 1);
    printf("%d ", a);
}
int main(void)
{
    recursive(1);

    return 0;
}