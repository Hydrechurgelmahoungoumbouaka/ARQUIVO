#include <stdio.h>
int main()
{
    int capital;
    float taxa;
    int i = 0;
    printf("digite dois valores:\n ");
    scanf("%d %f", &capital, &taxa);
    for (i = 10; i <= 20; i++)
    {
        printf("%d = %.2f", i, (capital + (capital * taxa * i)));
    }
    printf("\n");
    return 0;
}