#include <stdio.h>
int main()
{
    int num;
    int fat = 1;
    int i;
    printf("Digite um valor:\n ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        fat *= i;
    }
    printf("%d! = %d\n", num, fat);

    return 0;
}