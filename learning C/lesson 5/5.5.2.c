#include <stdio.h>

#define SIZE_BUFFER     128

int main(void)
{
    int buffer[SIZE_BUFFER];
    size_t count = 0, tmp;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while(count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;
    int mid = count/2;
    if( count % 2 == 0 ){
        for(int i = 0; i < mid; i++){
             tmp = buffer[i];
            buffer[i] = buffer[mid + i];
            buffer[mid + i] = tmp;
        }

    }
    else{
        for(int i = 0; i < mid; i++){
            tmp = buffer[i];
            buffer[i] = buffer[mid+ 1 + i];
            buffer[mid + 1 + i] = tmp;          
        }
    }
    for(size_t i = 0; i < count; i++){
        printf("%d ", buffer[i]);
    }

    return 0;
}