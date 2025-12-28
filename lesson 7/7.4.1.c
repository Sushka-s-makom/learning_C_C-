#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short* data = malloc(sizeof(short) * 4);
    if(data == NULL){
        return 1;
    }
    data[0] = -4;
    data[1] = 3;
    data[2] = 0;
    data[3] = 100;

    free(data);

    return 0;
}