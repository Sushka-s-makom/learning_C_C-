#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("no");
        return 0;
    }

    int simple = 1;   // флаг: 1 — простое, 0 — составное

    // достаточно проверять делители до sqrt(n)
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            simple = 0;
            break;
        }
    }

    if (simple) printf("yes");
    else        printf("no");

    return 0;
}
