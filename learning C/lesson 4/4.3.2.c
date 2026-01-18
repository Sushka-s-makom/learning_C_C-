#include <stdio.h>

int main(void)
{
    int stop, read, sum = 0;
    stop = 13;
  do{
    scanf("%d ", &read);
    if(read > 0) sum += read;

  }while( read != stop);
  printf("%d", sum);



    return 0;
}
