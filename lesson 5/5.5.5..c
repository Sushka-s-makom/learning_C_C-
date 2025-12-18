#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0, index_5 = 0, count_5 = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;
    for(int i = 0; i < count; i++, index_5++){      

        if(digs[i] == 5){
            count_5++;

            if(count < TOTAL){
                count++;
            }

            for(int j = count; j > index_5 + 1; j--) { 
                digs[j] = digs[j - 1];
                }

            digs[index_5 + 1] = -count_5;
              
        }
    }     
    
    for(size_t i = 0; i < count; i++){
        printf("%d ",digs[i] );
    }
    

    return 0;
}