#include <stdio.h>
#define MAX_SIZE    20

void reverse(short *arr, int count)
{
    for (int i = 0; i < count/ 2; i++) {
        short tmp = arr[i];
        arr[i] = arr[count - 1 - i];
        arr[count - 1 - i] = tmp;
    }
}

int main(void)
{
    short digs[MAX_SIZE];
    int count = 0;
    while(count < MAX_SIZE && scanf("%hd", &digs[count]) == 1){count++;
    }

    short *arr = digs;
    reverse( arr, count);

    for (int i = 0; i < count; i++) {
        printf("%hd ", digs[i]);
    }

    

    return 0;
}