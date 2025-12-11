#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d %d",&n , &m);
    int k = n + 1;
    while(++n <=m) if( n % 3 == 0) printf("%d ", n);

    return 0;
}