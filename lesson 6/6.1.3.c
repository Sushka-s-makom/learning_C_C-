#include <stdio.h>

int pow_n(int n, int m)
{
    if(m == 0){
        return 1;
    }
    int res = 1;
    for( int i = 0; i < m; i++ ){ 
        res *= n;
    }
    return res;
}

int main(void)
{
    printf("%d", pow_n(2, 4));

    return 0;
}