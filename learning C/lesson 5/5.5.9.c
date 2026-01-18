#include <stdio.h>

#define TOTAL     20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while(count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    for(size_t i = count/2; i < count; i++){

        for(size_t j = i + 1; j < count; j++){

            if(ws[j] > ws[i]){ 
                float tmp = ws[i];
                ws[i] = ws[j];
                ws[j] = tmp;
            }
        }
    }
    for(size_t i = 0; i < count; i++){
        printf("%.2f ",ws[i]);
    }

    return 0;
}