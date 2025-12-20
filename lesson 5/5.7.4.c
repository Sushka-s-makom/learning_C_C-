#include <stdio.h> 

int main(void){ 
    char str[50] = "best string!";
    char new_str[] = "The best string!";

    for(int i = 0; new_str[i] != '\0'; i++){ 
        str[i] = new_str[i];
    }
    
    return 0;

}