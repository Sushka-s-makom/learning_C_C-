#include <stdio.h>

int main(void)
{
    char buff[512];
    int w, h;

    FILE* fp = stdout; // имитация отрытого файлового потока

    if (scanf("%d %d", &w, &h) != 2) {
        return 0;
    }

    snprintf(buff, sizeof(buff), "rectangle: %d; %d", w, h);

    fputs(buff, fp);

    return 0;
}