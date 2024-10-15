/*
Faça um programa que verifica se um determinado número N é um número primo. 
Um número é primo se é divisível apenas por ele próprio e pela unidade. 
Se não for primo deve identificar o menor número pelo qual é divisível.

Notas:

-É suficiente testar até à raiz quadrada de N (pode utilizar a função sqrt da
 biblioteca math.h)

Em vez de calcular a raiz quadrada de N, pode calcular o quadrado do divisor.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n, divisor;
	int i=2; //contador
	int ultimoD=0; //ultimo divisor de n
	double raizN;

	printf("Funcao que verifica se um numero N e' primo:\nIndique N: ");
	scanf("%d", &n);

	divisor = sqrt(n) - (sqrt(n) - (int)sqrt(n));

	//printf("divisores: %d\n",divisor);

	while (i>1 && i<=divisor) {
		if((n%i)==0){
			ultimoD=i;
			printf("\n");
			printf("Numero divisível por %d\n",ultimoD);
			break;
		} else {
			printf("%d ",i);
		}
		i++;
	}
	if (ultimoD==0) {
		printf("\n");
		printf("Numero primo!\n");
	}
}

// VERSÃO PROF
/*
#include <stdio.h>
#include <math.h>

int main()
{
	int n, divisor;
	int i=2; //contador
	int ultimoD=0; //ultimo divisor de n
	double raizN;

	printf(" ");
	scanf("%d", &n);

	divisor = sqrt(n) - (sqrt(n) - (int)sqrt(n));

	while (i>1 && i<=divisor) {
		if((n%i)==0){
			ultimoD=i;
			printf("%d\n",ultimoD);
			break;
		}
		i++;
	}
	if (ultimoD==0)
		printf("%d",ultimoD);
}
*/