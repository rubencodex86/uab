/* Somar os primeiros N números inteiros, sendo N definido pelo utilizador */
/*
#include <stdio.h>

int main()
{
	int N, i=1, soma;

	printf("Indique um inteiro: ");
	scanf("%d", &N);

	while(i<=N) {
		printf("adicionar %d", i);
		soma += i;
		i++;
		printf(", parcial %d\n", soma);
	}
	printf("Total: %d\n", soma);
}
*/


/*Site*/
#include <stdio.h>

int main()
{
    int n, i=1, soma;

    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    /* ler um número inteiro */
    scanf("%d", & n);
    /* na variável soma, será acumulado o resultado */
    soma = 0;
    while(i<=n) {
		printf("adicionar %d", i);
		soma += i;
		i++;
		printf(", parcial %d\n", soma);
	}
    /* mostrar resultado final */
    printf("\nTotal: %d\n", soma);
}