#include <stdio.h>

int main(void)
{
    int value; 
    scanf("%d", &value);
    char ar_d[sizeof(value)];
    char *ptr_value = (char *)&value;
    char *ptr_ar; 
    ptr_ar = ar_d;
    for( int i = 0; i < sizeof(value); i++){
        *ptr_ar = *ptr_value;
        ptr_value ++;
        ptr_ar ++;
    }
    for(int i = 0; i <sizeof(ar_d); i++ ){
        printf("%d ", ar_d[i]);
    }
    return 0;
}