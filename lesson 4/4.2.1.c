#include <stdio.h>

int main(void)
{
    int a1, d, n;
    scanf("%d; %d; %d", &a1, &d, &n);

    for(int s = 0; n>0; n-- ){
        s = a1;
        a1 +=d;
        printf("%d ", s);
    }



    return 0;
}
