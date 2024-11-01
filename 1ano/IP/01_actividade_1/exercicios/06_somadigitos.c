/*
Calcule a soma dos quadrados dos dígitos de um número introduzido pelo utilizador.
Notas:

Pode obter o valor do dígito mais baixo, calculando o resto da divisão por 10.
Mostre o resultado parcial, neste e nos restantes exercícios.
*/

#include <stdio.h>

int main()
{
	int n, soma, digito;
	soma=0;

	printf("Calculo da soma do quadrado dos gigitos de um numero:\nNumero: ");
	scanf("%d", &n);

	while(n>0) {
		digito=n%10;
		soma=soma+(digito*digito);
		printf("n=%d; soma=%d\n",n,soma);
		n=n/10;
	}
	printf("Resultado: %d",soma);
}