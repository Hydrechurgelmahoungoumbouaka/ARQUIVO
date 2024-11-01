#include <stdio.h>
int main()
{
    int LI,LS;
    int i = 0;
    int n;
    printf("digite dois valores:\n ");
    scanf("%d %d", &LS, &LI);
    n = (5 * (i - 32) / 9);
    for (i = 1; i <= LS; i++)
    {
        // converte a temperatura
        printf("%.2d (C)", n);
    }
    printf("\n");
    return 0;
}