#include <stdio.h>
extern short marks[];   

int main(void)
{
    size_t length = sizeof(marks) / sizeof(marks[0]);
    size_t size   = sizeof(marks);

    printf("%zu %zu", length, size);

    return 0;
}
