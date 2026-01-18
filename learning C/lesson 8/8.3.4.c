#include <stdio.h>

typedef struct {
    unsigned int id;
    unsigned int width, height, depth;
    double weight;
} BOX;

int main(void)
{
    FILE* fp = stdout; // имитация отрытого файлового потока
    BOX b;

    if (fscanf(stdin, "%u; %u; %u; %u; %lf",
               &b.id, &b.width, &b.height, &b.depth, &b.weight) != 5) {
        return 0;
    }

    fprintf(fp, "box %u: %u x %u x %u", b.id, b.width, b.height, b.depth);

    return 0;
}
