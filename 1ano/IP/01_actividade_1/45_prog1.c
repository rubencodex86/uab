#include <stdio.h>

/* programa que calcula o próximo ano bissexto */ 
/*int main()
{
	int i, ano, passos;
	printf("Indique Ano: ");
	scanf("%d", &ano);
	i=ano+1;
	passos=1;
	while((i%4!=0 || i%100==0) && i%400!=0) 
		i++;
		printf("nº de passos %d", passos);
		passos++;
	printf("Proximo ano bissexto: %d",i);
	printf("Ano: %d",ano);
}
*/


/* Programa que verifica se um número é perfeito. 
Um número é perfeito se a soma de todos os seus divisores for igual
ao próprio número. */


int main()
{
	int numero, soma=1, i=2;
	printf("Indique numero: ");
	scanf("%d", &numero);
	while(i<=numero/2) {
		if(numero%i==0)
			soma+=i;
		i++;
	}
	if(soma==numero)
		printf("Numero %d perfeito!",numero);
	else
		printf("Numero %d nao perfeito.",numero);
}


/* programa que calcula N^N */ 
/*int main()
{
	int i=0, N, resultado=1;
	printf("Indique N: ");
	scanf("%d", &N);
	while(i<N) {
		resultado*=N;
		i++;
	}
	printf("Resultado %d^%d: %d",N,N,resultado);
}
*/