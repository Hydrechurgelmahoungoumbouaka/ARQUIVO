#include <stdio.h>
int main()
{
    int n;
    float media, nota;
    float soma = 0;
    int i;
    printf("digite o numero de uma nota do aluno: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    // calcula a media
    media = soma / n;
    // determinar se aluno for aprovado ou reprovado
    if (media >= 7.0)
    {
        printf("aluno  aprovado com media %.2f",media);
    }
    else
    {
        printf("aluno reprovado com media %.2f",media);
    }
    printf("\n");

    return 0;
}