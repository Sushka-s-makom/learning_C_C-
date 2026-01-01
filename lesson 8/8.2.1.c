#include <stdio.h>

int main(void)
{
    char byte;
    FILE* fp = stdin; // стандартный поток для чтения данных

    int c;

    while ((c = fgetc(fp)) != EOF) {
        byte = (char)c;

        long pos = ftell(fp); 
        printf("%d:%ld ", (unsigned char)byte, pos);

    }
    // fclose(fp); для стандартного потока делать не нужно
    return 0;
}
