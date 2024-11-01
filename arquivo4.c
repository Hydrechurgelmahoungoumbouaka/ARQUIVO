#include <stdio.h>
int main()
{
    int opção;
    int n1 = 5, n2 = 15;
    printf("escolha uma opção:\n ");
    do
    {
        scanf("%d", &opção);
        printf("escolha uma opção:\n ");
        printf("(1) opção 1\n ");
        printf("(2) opção 2\n ");
        printf("(3) opção 3\n ");

    } while (opção < 1 || opção > 3);

    printf("opção escolhida: %d\n", opção);
    while (n1 < n2)
    {
        n1 += 1;
        if (n1 == 10)
            break;
        printf("%d", n1);
    }
    printf("\n");

    return 0;
}