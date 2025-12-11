#include <stdio.h>
#include <math.h>

int main(void){
    int n, counter = 0 , reverse = 0;
    scanf("%d",&n);

    int k = n;
    int k_2 = n;

    while( k > 0 ){
        k = k / 10;
        counter++;
    }

    counter--; 
    while(k_2 > 0){
        reverse += (k_2 % 10) * (int)pow(10, counter);
        k_2 /= 10;
        counter--;
    }

    if(reverse == n) printf("yes");
    else printf("no");

    return 0;
}
