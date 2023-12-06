#include <stdio.h>

int main()
{
    int part1, part2, amount1, amount2;
    float price1, price2;

    scanf("%d %d %f", &part1, &amount1, &price1);
    scanf("%d %d %f", &part2, &amount2, &price2);

    printf("VALOR A PAGAR: R$ %.2f\n", amount1 * price1 + amount2 * price2);

    return 0;
}
