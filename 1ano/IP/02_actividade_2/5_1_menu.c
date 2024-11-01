/* Escolha de opções num menu */
#include <stdio.h>

int main()
{

	int k;

	printf("Menu:\n1 - opcao A\n");
	printf("2 - opcao B\n");
	printf("3 - opcao C\n");
	printf("0 - sair\n");
	printf("Opcao: ");
	scanf("%d", &k);

	while(k>0) {
		
		if(k==1)
			printf("Opcao escolhida A\n");
		else
			if(k==2)
				printf("Opcao escolhida B\n");
			else
				if(k==3)
					printf("Opcao escolhida C\n");
				else
					printf("Opcao invalida\n");
		printf("\nMenu:\n1 - opcao A\n");
		printf("2 - opcao B\n");
		printf("3 - opcao C\n");
		printf("0 - sair\n");
		printf("Opcao: ");
		scanf("%d", &k);
	}
	printf("Fim do programa.");
}
