#include <stdio.h>

#define MUL_VAR_NAME(a,b)  mul_##a_##b
// здесь объявляйте макро-функцию

int main(void)
{
    int name_1, name_2;
    if(scanf("%d %d", &name_1, &name_2) != 2) {
        printf("Input error");
        return 0;
    }
    int MUL_VAR_NAME(name_1,name_2 )= name_2 *name_1;


    
   printf("%d", MUL_VAR_NAME(name_1,name_2 ) );
  

    return 0;
}