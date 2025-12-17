#include <stdio.h>
extern char buff_1[];
extern char buff_1[];
int main(void)
{
   
    char buffer[128];
    char *ptr_ar = &buffer; 
    for(int i = 0; i < sizeof(buff_1); i++){
        *ptr_ar = buff_1[i];
        ptr_ar++;
    }
    for(int i = 0; i < sizeof(buff_2); i++){
        *ptr_ar = buff_2[i];
        ptr_ar++;
    }

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}