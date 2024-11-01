#include <stdio.h>
int main()
{
    int LI;
    int LS;
    int i = 0;
    printf("digite dois valores:\n ");
    scanf("%d %d", &LS, &LI);
    for (i = 1; i <= LI; i++)
    {
        printf("%d ", LS * i);
    }
    printf("\n");

    return 0;
}
