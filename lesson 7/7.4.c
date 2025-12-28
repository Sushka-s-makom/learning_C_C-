/*
int main(void) 
{
    char* ar = malloc(10);   // выделение 10 байт из кучи
    int* ptr_int = malloc(sizeof(int)); // выделение памяти под тип int
    short* ptr_short = malloc(7 * sizeof(short)); // выделение памяти под 7 элементов типа short
 
    free(ar);
    free(ptr_int);
    free(ptr_short);
    
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
 
void* append(short* data, size_t *length, size_t *capacity, short value)
{
    if(*length >= *capacity) {
        short* ar = malloc(sizeof(short) * 2 * *capacity);
        if(ar == NULL)
            return data;
            
        (*capacity) *= 2;
        for(int i = 0;i < *length;++i)
            ar[i] = data[i];
        
        free(data);
        data = ar;
    }
 
    data[*length] = value;
    (*length)++;
    
    return data;
}
 
int main(void) 
{
    size_t capacity = 10;
    size_t length = 0;
 
    short* data = malloc(sizeof(short) * capacity);
 
    for(int i = 0; i < 11;++i)
        data = append(data, &length, &capacity, rand() % 40 - 20);
 
    printf("length = %u, capacity = %u\n", length, capacity);
 
    for(int i = 0;i < length;++i)
        printf("%d ", data[i]);
 
    free(data);
    return 0;
}
