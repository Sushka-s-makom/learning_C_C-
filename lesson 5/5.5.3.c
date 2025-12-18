#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0, tmp, index_5 = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;
    for(int i = 0; i < count; i++, index_5++){ 
        tmp = digs[i];
        if(tmp == 5){
            break;
        }
    }
    if(tmp == 5){
        for(int i = count; i > index_5 + 1; i--) { 
        digs[i] = digs[i - 1];
        }
        digs[index_5 + 1] = -5;
        if(count < TOTAL){
            count++;
        }
        
    }
    
    for(int i = 0; i < count; i++){
        printf("%d ",digs[i] );
    }
    

    return 0;
}