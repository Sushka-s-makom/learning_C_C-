#include <stdio.h> 

void print_hi(void)
{
    puts("Hello pysska!");
}
int get_per(int width, int height)
{ 
    int p = 2 * (width +  height);

    return p;
}

int main(void)
{ 
    int per_1 = get_per( 4, 2);
    print_hi();
    return 0;
}