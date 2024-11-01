/*
Faça um programa que peça os coeficientes de um polinómio do segundo grau, e retorna as
raízes reais, caso existam. Adicionalmente o programa deve retornar todos os conjuntos de
coeficientes inteiros, que têm apenas raízes inteiras reais. Os coeficientes estão entre -K e K não
tendo nenhum coeficiente nulo (K é introduzido pelo utilizador e é um inteiro pequeno). Relembra-
se a fórmula resolvente:

ax²+bx+c=0 <=> x=(-b +- sqrt(b²-4ac))/2a

Notas:
- Para calcular a raiz quadrada, utilize a função sqrt, disponível na biblioteca math.h
- Faça três ciclos um dentro do outro, um ciclo por cada um dos coeficientes, e varie a variável
  iteradora entre -K e K.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	printf("Inroduza os coeficientes (Formato: a b c)$ ");
	//scanf("%d, %d, %d", & a, & b, & c);
	scanf("%d", & a);
	scanf("%d", & b);
	scanf("%d", & c);

	/* debug */
	printf("a: %d\nb: %d\nc: %d\n", a, b, c);

/* Coeficientes nulos */	

	if(a==0 || b==0 || c==0){
		printf("\nERRO: O(s) queficiente(s) nao devem ser nulos!\nInroduza os coeficientes (Formato: a b c)$ ");
		scanf("%d, %d, %d", & a, & b, & c);
		while(a==0 || b==0 || c==0){
			printf("\nERRO: O(s) queficiente(s) nao devem ser nulos!\nIntroduza os coeficientes:$ ");
			//scanf("%d, %d, %d", & a, & b, & c);
			scanf("%d", & a);
			scanf("%d", & b);
			scanf("%d", & c);
		}
		printf("fórmula: %dx²+%dx+%d=0 <=> x=(-%d +- sqrt(%d²-4%d%d))/2%d\n", a, b, c, b, b, a, c, a);
		return 0;
	} else {
		return 0;
	}
}