#include <stdio.h>
#include <string.h>

#define N   6
#define M   51

int main(void) {
    char cities[N][M];

    for (int i = 0; i < N; i++)
        scanf("%s", cities[i]);

    int max1_len = strlen(cities[0]), max2_len = 0 ;
    int max1_idx = 0, max2_idx = 0;

    for (int i = 1; i < N; ++i) {
        int curr_len = strlen(cities[i]);
        if (curr_len > max1_len) {
            max2_len = max1_len;
            max2_idx = max1_idx;

            max1_len = curr_len;
            max1_idx = i;
            }
        else if (curr_len > max2_len) {
            max2_len = curr_len;
            max2_idx = i;
            }
    }
    if( max1_idx < max2_idx){
        printf("%s %s", cities[max1_idx], cities[max2_idx]);
    }
    else{ 
        printf("%s %s", cities[max2_idx], cities[max1_idx]);
    }



    return 0;
}