#include <stdio.h>
int main()
{
    int num;
    float soma=0;
    int i = 0;
    printf("Digite um numero:\n ");
    while (1)
    {
        scanf("%d", &num);
        if (num < 1)
            break;
        i += num;
    
    printf("soma = %d", i);
    }
    printf("\n");

    return 0;
}