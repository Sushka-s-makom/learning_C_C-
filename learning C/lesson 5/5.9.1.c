#include <stdio.h> 
#include <string.h>

int main(void){ 
    char cities[6*50]; 
    int i = 0, best_start = 0, best_len = 0, len = 0, start = 0 ; 
    fgets(cities, sizeof(cities), stdin);

    while( cities[i] != '\0'){ 

        if( cities[i] != ' '){ 
            len++;
        }
        else{ 
            if(len > best_len){ 
                best_len = len; 
                best_start = start;
            }
             len = 0;
            start = i + 1;
        }
        i++;
    }

    //посл слово отработать(вайл прервал)
     if (len > 0 && len > best_len) {
        best_len = len;
        best_start = start;
    }

    for(int k = 0; k < best_len; k++){ 

        putchar(cities[best_start + k]);
    }
    return 0;
}

