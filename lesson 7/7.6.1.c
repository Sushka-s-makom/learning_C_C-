#include <stdio.h>

struct tag_vector {short x; short y; short z};

int main(void)
{
    struct tag_vector vector;
    scanf("%hd %hd %hd", &vector.x, &vector.y, &vector.z);

    return 0;
}