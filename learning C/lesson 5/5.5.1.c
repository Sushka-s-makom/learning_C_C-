#include <stdio.h>

int main(void)
{
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while(count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;
       

    // здесь продолжайте программу
    size_t idx_ar = count;
    size_t idx_marks = 0;
     size_t sz_marks = sizeof(marks) / sizeof(*marks);
    while( idx_ar >0 && idx_marks < sz_marks){ 
        idx_ar--;                     // переходим к реальному последнему элементу
        marks[idx_marks] = ar[idx_ar];
        idx_marks++;
    }
     for (size_t i = 0; i < idx_marks; i++) {
        printf("%hd ", marks[i]);
    }

    return 0;
}