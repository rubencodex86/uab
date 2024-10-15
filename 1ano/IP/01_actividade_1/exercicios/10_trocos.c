/*
Faça um programa que receba um montante em euros (com cêntimos), e que determina 
o menor número de moedas de cada tipo necessário para perfazer esse montante. 
Pode utilizar moedas de euros de todos os valores disponíveis (2€, 1€, ...).

Notas:

Deve efectuar os arredondamentos para a unidade mais próxima, no caso de o 
utilizador introduzir um valor com precisão abaixo do cêntimo.
*/

#include <stdio.h>

int main()
{
	/*variaveis*/
	double montante;
	int doisE=0;
	int umE=0;
	int cinquentaC=0;
	int vinteC=0;
	int dezC=0;
	int cincoC=0;
	int doisC=0;
	int umC=0;

	printf("Introduza um montante em euros, podendo ter centimos: ");
	scanf("%lf", &montante);

	montante=montante*100;

	//printf("%lf\n",montante);

	while(montante>=200){
		doisE++;
		montante-=200;
	}

	//printf("%lf\n",montante);
	//printf("%d\n",doisE);

	while(montante>=100){
		umE++;
		montante-=100;
	}

	while(montante>=50){
		cinquentaC++;
		montante-=50;
	}

	while(montante>=20){
		vinteC++;
		montante-=20;
	}

	while(montante>=10){
		dezC++;
		montante-=10;
	}

	while(montante>=5){
		cincoC++;
		montante-=5;
	}

	while(montante>=2){
		doisC++;
		montante-=2;
	}

	while(montante>=0){
		umC++;
		montante-=1;
	}

	/*

	printf("2 euros: %d\n",doisE);
	printf("1 euro: %d\n",umE);
	printf("50 cents: %d\n",cinquentaC);
	printf("20 cents: %d\n",vinteC);
	printf("10 cents: %d\n",dezC);
	printf("5 cents: %d\n",cincoC);
	printf("2 cents: %d\n",doisC);
	printf("1 cent: %d\n",umC);

	*/

	if(doisE!=0) {
		printf("2 euros: %d\n",doisE);
	}
	if(umE!=0) {
		printf("1 euro: %d\n",umE);
	}
	if(cinquentaC!=0) {
		printf("50 centimos: %d\n",cinquentaC);
	}
	if(vinteC!=0) {
		printf("20 centimos: %d\n",vinteC);
	}
	if(dezC!=0) {
		printf("10 centimos: %d\n",dezC);
	}
	if(cincoC!=0) {
		printf("5 centimos: %d\n",cincoC);
	}
	if(doisC!=0) {
		printf("2 centimos: %d\n",doisC);
	}
	if(umC!=0) {
		printf("1 centimo: %d\n",umC);
	}
}





/*

1st attempt


int main()
{
	
	double montante;
	int dois=0;
	int um=0;
	int cinquenta=0;
	int vinte=0;
	int dez=0;
	int cinco=0;
	int doisc=0;
	int umc=0;

	
	printf("Introduza um montante em euros, podendo ter centimos: ");
	scanf("%lf", &montante);

	
	double decimal = montante - (int)montante;
	int inteira= montante - decimal;
	printf("%.2lf\n", decimal);
	printf("%d\n", inteira);

	while(inteira-2>0){
		dois++;
		inteira-=2;
	}
	printf("2 euros: %d\n", dois);

	while(inteira==1){
		um++;
		inteira-=1;
	}
	printf("1 euro: %d\n", um);

	decimal=decimal*100;

	while(decimal>=50){
		cinquenta++;
		decimal-=50;
	}
	printf("50 centimos: %d\n", cinquenta);

	while(decimal>=20){
		vinte++;
		decimal-=20;
	}
	printf("20 centimos: %d\n", vinte);

	while(decimal>=10){
		dez++;
		decimal-=10;
	}
	printf("10 centimos: %d\n", dez);

	while(decimal>=5){
		cinco++;
		decimal-=5;
	}
	printf("5 centimos: %d\n", cinco);

	while(decimal>=2){
		doisc++;
		decimal-=2;
	}
	printf("2 centimos: %d\n", doisc);

	while(decimal>=1){
		umc++;
		decimal-=1;
	}
	printf("1 centimo: %d\n", umc);
}
*/