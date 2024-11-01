#include <stdio.h>

int main()
{
	double montante;
	int dois=0;
	int um=0;
	int cinquenta=0;
	int vinte=0;
	int dez=0;
	int cincoC=0;
	int doisC=0;
	int umC=0;

	printf("Introduza um montante em euros, podendo ter centimos: ");
	scanf("%lf", &montante);

	double centimos=montante-(int)montante;
	//double centimos=montante-floor(montante);
	double euros=montante-centimos;
	//double euros=floor(montante);
	//centimos=round(centimos*100)/100;

	printf("%lf\n",euros);
	printf("%lf\n",centimos);

	while(euros>=2) {
		dois++;
		euros-=2;
	}
	printf("%lf\n",euros);
	printf("%lf\n",centimos);

	while(euros>=1) {
		um++;
		euros-=1;
	}
	printf("%lf\n",euros);
	printf("%lf\n",centimos);

	while(centimos>=0.5) {
		cinquenta++;
		centimos-=0.5;
	}
	printf("%lf\n",euros);
	printf("%lf\n",centimos);

	while(centimos>=0.2) {
		vinte++;
		centimos-=0.2;
	}
	printf("%lf\n",euros);
	printf("%lf\n",centimos);

	while(centimos>=0.1) {
		dez++;
		centimos-=0.1;
	}
	printf("%lf\n",euros);
	printf("%lf\n",centimos);

	while(centimos>=0.05) {
		cincoC++;
		centimos-=0.05;
	}
	printf("%lf\n",euros);
	printf("%lf\n",centimos);
/*
	while(centimos>=0.02) {
		centimos-=0.02;
		doisC++;
	}
*/

//Importante
	while(centimos<0.05 && centimos>=0.01){
		
		printf("deduz: %lf\n", centimos);
		centimos-=0.01;
		
	}

	printf("%lf\n",euros);
	printf("%lf\n",centimos);


	//printf("%lf\n",euros);
	//printf("%lf\n",centimos);






	if(dois!=0) {
		printf("2 euros: %d\n", dois);
	}
	if(um!=0) {
		printf("1 euro: %d\n", um);
	}
	if(cinquenta!=0) {
		printf("50 centimos: %d\n", cinquenta);
	}
	if(vinte!=0) {
		printf("20 centimos: %d\n", vinte);
	}
	if(dez!=0) {
		printf("10 centimos: %d\n", dez);
	}
	if(cincoC!=0) {
		printf("5 centimos: %d\n", cincoC);
	}
	if(doisC!=0) {
		printf("2 centimos: %d\n", doisC);
	}
	if(umC!=0) {
		printf("1 centimo: %d\n", umC);
	}
}