/*
Multiplicar os primeiros N números inteiros positivos (factorial de N), sendo N
definido pelo utilizador

int main()
{
    int n, i, produto;

    printf("Calculo do produto dos primeiros N numeros.\nIndique N:");
    scanf("%d", & n);



    printf("Resultado: %d", produto);
}

*/

#include <stdio.h>

int main()
{
    int n, i, produto;
    printf("Calculo do produto dds primeiros N numeros.\nIndique N: ");
    scanf("%d", & n);
    i=1;
    produto=1;

    if(n==0)
        printf("Facorial(%d)=%d\n",n, i);
    else
        while (i<=n) {
            produto *= i;
            printf("Factorial(%d)=%d\n",i,produto);
            i++;         
        }
    printf("Resultado: %d\n", produto);
}