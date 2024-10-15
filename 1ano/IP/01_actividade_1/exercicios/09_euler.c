/*
Calcular o número de Euler e, através da utilização da série de Taylor para ex
quando x=1: soma dos inversos dos fatoriais, de 0 a K, com K a tender para 
infinito: 1/0! + 1/1! + 1/2! + ... + 1/K!

Notas:

- Considere o fatorial de zero como sendo 1 (N! é o fatorial de N, sendo o produto 
dos números de 1 a N)
- Utilize a precisão dupla para valores reais, neste e em outros exercícios
- Na função printf pode imprimir um número real em notação científica, e especificando 
a precisão a 16 dígitos utilizando a string de formatação: %.16g
*/

#include <stdio.h>

int main()
{
	int e, k;
	int n=0;
	double somatorio=1;
	int produto=1;

	//printf("Calculo do numero de Euler.\nIndique K: ");
	printf(" ");
	scanf("%d", &k);

	while(n<=k) {
		while(n==0) {
			//printf("%d: %.5g\n", n,somatorio);
			n++;
		}
		produto *= n;
		somatorio += (1.00/produto);
		//printf("%d: %.5g\n", n,somatorio);
		n++;
		if (k==0) {
			somatorio=1;
		}
		{
			/* code */
		}
	}
	//printf("Resultado: %.16g\n", somatorio);
	printf("%.16g\n", somatorio);
}