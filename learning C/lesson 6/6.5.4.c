#include <stdio.h>

int sum_ar(const int *ar, size_t len_ar, int (*check)(int))
{
    int res = 0;
   for(size_t i = 0; i < len_ar; i++){ 
    if (check( ar[i]) == 1){
         res += ar[i];
    }

   }
   return res;
}

int (*ptr_f)(int);

int is_even(int x){ 
    return  x % 2 == 0;
}
int main(void)
{
    int marks[20] = {0};
    int x;
    size_t count = 0;
    while(scanf("%d", &x) == 1) {
        if (count < 20) {
            marks[count++] = x;
    }}
    ptr_f = is_even;

    int res = sum_ar( marks, count, ptr_f );

    printf("%d", res);

    return 0;
    }
