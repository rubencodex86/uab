#include <stdio.h>
#include "04_produto.c"

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