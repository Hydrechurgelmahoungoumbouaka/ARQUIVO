#include <stdio.h>
 int main()
{
    int a;
    int b;
    int i = 0;
    printf("digite dois valores\n ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++)
    {

        printf("%d", a * i);
        if (i != b)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}