#include <stdio.h>

int main()
{
	/* code */
	char c;
	int x;
	double d;

	printf("Introduza um caracter: ");
	scanf("%c", &c);
	printf("Introduza um inteiro: ");
	scanf("%d", &x);
	printf("Introduza um real: ");
	scanf("%lf", &d);

	printf("Valores introduzidos: %c %d %f \n",c,x,d);
}
