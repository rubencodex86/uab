#include <stdio.h>

int main()
{
	int ano;
	printf("Indique ano: ");
	scanf("%d", &ano);

	/*teste de ano bissexto*/
	if (ano%4==0 && ano%100!=0 || ano%400==0)
		printf("Bissexto\n");
	else
		printf("Normal\n");
}
