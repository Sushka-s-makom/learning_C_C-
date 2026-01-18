#include <stdio.h>

int range(void)
{
    static int current = 5;
    int value = current;

    current += 3;

    return value;
}

int main(void)
{
    for( int i = 0; i < 7; i++){
        printf("%d ", range());
    }
    
    return 0;
}