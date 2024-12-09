#include <stdio.h>

void trocaValor(int *a,int *b){
int aux;
aux=*a;
*a=*b;
*b=aux;
}
int main()
{
    int num1=40;
    int num2=20;
    trocaValor(&num1,&num2);
    printf("Num1 eh: %d\n",num1);
    printf("Num2 eh: %d\n",num2);

    return 0;
}
