#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    for(size_t i = 0; i < count; i++){
        if(pows[i] % 3 == 0){
            size_t pos = i;
            
            for(int j = pos; j < count - 1; j++){
                pows[j] = pows[j + 1];
            }
            count--;
            i--;
            
        }
    }
    for(size_t i = 0; i < count; i++){
        printf("%d ", pows[i]);
    }

    return 0;
}