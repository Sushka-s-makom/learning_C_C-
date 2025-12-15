#include <stdio.h>

int main(void)
{
    int var; // 4 bite pamyti

    scanf("%d", &var);

    // здесь продолжайте программу
    int *ptr_var  = &var; // 4 bite pamyti
    char *ptr_ch;  // 1 bite pamyti
    
    ptr_ch = (int*)ptr_var;

    printf("%d", *ptr_ch);

    return 0;
}