#include <stdio.h>
extern float pows[];   

int main(void)
{
    size_t counter = sizeof(pows)/sizeof(pows[0]);

    for(; counter >0; counter-- ){
        printf("%.1f ",pows[counter - 1]);
    }
 

    return 0;
}
