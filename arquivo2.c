#include <stdio.h>
 int main()
{
    int n;
    int i = 0;
    printf("digite dois valores:\n ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d", n * i);
        if (i != 10)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}