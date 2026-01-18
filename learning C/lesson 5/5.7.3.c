#include <stdio.h>

int main(void)
{
    char str[100] = { 'B', 'e', 's', 't', ' ', 's', 't', 'r', 'i', 'n', 'g', '!', '\0' };

    for( int i = 0 ;  str[i] != '\0'; i++){ 

        if(str[i] == 's'){ 
            for( int j = i; str[j] != '\0' ; j++ ){ 

                str[j] = str[j + 1];
            }
            i--;
        

        } 
    }
   





    return 0;
}