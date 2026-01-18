#include <stdio.h>

int main(void)
{
    char str[50] = "Best   language  \"C\"";
    
    for(int i = 0; str[i] != '\0'; i++){ 

        if( str[i] == ' '){ 

            str[i] ='\n';
            
        // удаляем все следующие пробелы сдвигом строки
            int j = i + 1;
            while (str[j] == ' ') {
                j++;
            }

            // сдвиг
            int k = i + 1;
            while (str[j] != '\0') {
                str[k++] = str[j++];
            }
            str[k] = '\0';
        }
    }

  
    return 0;
}