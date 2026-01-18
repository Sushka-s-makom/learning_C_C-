#include <stdio.h>

int main(void)
{
    int n;
    double sum = 0;
    scanf("%d ", &n);
    
  do{
    sum+=1.0/(double)n;
    n--;
 }while( n > 0);
  printf("%.2f", sum);



    return 0;
}