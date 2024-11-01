#include <stdio.h>

int main()
{
	int ano;
	int mes;

	printf("Indique ano: ");
	scanf("%d", &ano);

	printf("Indique mes: ");
	scanf("%d", &mes);

	if(mes==2) {
		if(ano%4==0 && ano%100!=0 || ano%400==0) {
			printf("29\n");
		}
		else {
			printf("28\n");
		}
	}
	else {
		if(mes==1 || mes==3 || mes== 5 || mes==7 || mes==8 || mes==10 || mes==12) {
			printf("31\n");
		}
		else {
			printf("30\n");
		}
	}
}