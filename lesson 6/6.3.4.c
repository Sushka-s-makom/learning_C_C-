#include <stdio.h>

int get_max(int a, int b);
int get_min(int a, int b);

int main(void)
{
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);
    int res;
    res = (t == 1) ? get_max(a, b) : get_min(a, b);
    printf("%d", res);

    return 0;
}
int get_max(int a, int b)
{ 
    int max  = (a < b) ? b : a;
    return max;
}
int get_min(int a, int b)
{ 
    int min  = (a < b) ? a : b;
    return min;
}