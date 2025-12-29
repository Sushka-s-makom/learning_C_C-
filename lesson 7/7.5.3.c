#include <stdio.h>

typedef enum {_do=1, _re=2, _mi=3, _fa=4, _sol=5, _la=6, _si=7} NOTES;

int get_major(NOTES n)
{
    if (n == _do || n == _mi || n == _sol)
        return 1;
    return 0;
}

int main(void)
{int x;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        if (get_major(x))
            printf("%d ", x);
    }

    return 0;
}
