#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[512];

    FILE* fp = stdin; // имитация отрытого файлового входного потока
    int i = 0, cnt = 0;
    
    fgets(buff, sizeof(buff), fp);
    
    while(buff[i]){
        if (buff[i] != ' ' && (buff[i+1] == ' ' || buff[i+1] == '\0'))
            cnt++;
        i++;
    }
    
    printf("%d", cnt);

    // fclose(fp); закрывать стандартный поток не нужно

    return 0;
}