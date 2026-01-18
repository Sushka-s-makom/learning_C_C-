#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int s = 0;

    for (int i = 0; i <= n; i++) {

        for (int j = 0; j <= m; j++) {
            if (i + j >= 10) 
                break;            

            s += i + j;
        }
    }

    printf("%d", s);
    return 0;
}
