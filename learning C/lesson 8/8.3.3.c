#include <stdio.h>

enum {max_length_ar=20};

int main(void)
{
    double temp[max_length_ar];

    FILE* fp = stdin; // имитация отрытого файлового потока

     int n = 0;
    while (n < max_length_ar && fscanf(fp, "%lf", &temp[n]) == 1) {
        if( temp[n] > 0){
            printf("%.2lf ", temp[n]);
        }
        n++; 
    }



    // fclose(fp); закрывать стандартный поток не нужно

    return 0;
}