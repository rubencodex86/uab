#include <stdio.h>

/* ano%400==0 || ano%4==0 && ano%100!=0 */

int Bissexto(int ano) 
{
	return ano%400==0 || ano%4==0 && ano%100!=0;
}

int main(int argc, char const *argv[])
{
	int ano;

	printf("Indique ano: ");
	scanf("%d", &ano);

	if(Bissexto(ano))
		printf("Bissexto");
	else
		printf("Normal");
}