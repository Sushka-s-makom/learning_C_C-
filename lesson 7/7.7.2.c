#include <stdio.h>
#include <stdlib.h>

struct tag_rub {
    double ratio_usd;  // курс доллара к рублю (1$ = xx рублей)
    int rubs;          // количество рублей
};

int main(void)
{
    struct tag_rub *account_r = (struct tag_rub *)malloc(sizeof(struct tag_rub));

    account_r->ratio_usd = 91.32;
    scanf("%d", &account_r->rubs);

    double usd = account_r->rubs / account_r->ratio_usd;

    printf("%.2f", usd);

    return 0;
}