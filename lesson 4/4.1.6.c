#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int k = n + 1;
    int i = 1;
    int j =0, z = 0;
    while(--k >0){
        int z = i + j;
        printf("%d ", z);
        i = j;
        j = z;
    }

    return 0;
}