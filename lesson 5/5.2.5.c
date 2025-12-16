#include <stdio.h>

extern short marks[] ;
int main(void)

{
    int s = 0;
   for(int i = 0; i < sizeof(marks)/sizeof(marks[0]); i++){
    s += marks[i];


   }
   float sum = (float)s/(float)(sizeof(marks)/sizeof(marks[0]));
   printf("%.2f", sum);
   

    
    return 0;
}