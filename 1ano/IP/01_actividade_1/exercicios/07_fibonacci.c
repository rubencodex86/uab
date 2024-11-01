/*
Calcular o valor da função fibonacci6, para um dado argumento N. Para N=1 ou 2, deve
retornar N, caso contrário retorna a soma dos dois valores anteriores:
*/

#include <stdio.h>

int main()
{
	int n, auxA, auxB;
	int i=3;

	printf("Calculo do valor da funcao Fibonacci:\nIndique N: ");
	scanf("%d",&n);

	auxA=2;
	auxB=1;

	if(n<=2) {
		auxA=2;
		auxB=1;
	} else {
		while(i<=n) {
			printf("Fib(%d)=%d\n",i,auxA+auxB);
			auxA=auxA+auxB;
			auxB=auxA-auxB;
			i++;
		}
		printf("Resultado: %d\n",auxA);
	}
}