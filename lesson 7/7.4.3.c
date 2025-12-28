#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20

int main(void)
{
    int lengths[MAX_LEN];
    int count = 0;

    
    while (count < MAX_LEN && scanf("%d", &lengths[count]) == 1) {
        count++;
    }

     int *ptr_lens = calloc(MAX_LEN, sizeof(int));
    if (ptr_lens == NULL) {
        return 1;
    }

    memcpy(ptr_lens, lengths, sizeof(int) * count);

    for (int i = 0; i < MAX_LEN; i++) {
        printf("%d", ptr_lens[i]);
        if (i < MAX_LEN - 1)
            printf(" ");
    }

    free(ptr_lens);
    
    return 0;
}
