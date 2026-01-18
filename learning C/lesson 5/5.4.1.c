#include <stdio.h>

int main(void){
    const total = 5;
    size_t marks[100];
    
    for(int i = 0; i < total; i++){
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i< total; i++){
        printf("%d ", marks[total - 1 - i]);
    }

    return 0;
}