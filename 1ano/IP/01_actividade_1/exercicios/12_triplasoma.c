/*
Dado um inteiro positivo N, escrever todas as decomposições distintas possíveis 
como soma de três inteiros positivos (considerar iguais as triplas com os mesmos 
valores mas por outra ordem). Calcular também o número de somas distintas.

Notas:

Assumir que os números mais altos aparecem sempre primeiro.
*/

/*
	Numero:10

	_+1+1 = 8+1+1
	_+2+1 = 7+2+1
	_+3+1 = 6+3+1
	_+4+1 = 5+4+1
	_+5+2 = 6+2+2
	_+4+2 = 5+3+2
	        4+4+2
	        4+3+3
*/
/*
int n=89093;

	int ultimo=10;
	int volta=ultimo/3;
	int voltaA=volta/3;

	printf("%d\n",ultimo);
	printf("%d\n",volta);
	printf("%d\n",voltaA);
*/


/*

First Attempt

#include <stdio.h>

int main()
{
	int n, contador=0;
	int first, second=1, third=1;

	printf("Escreva um numero para decompor em somas de tres parcelas.\nNumero: ");
	scanf("%d", &n);

	//funciona apenas para n>=3

	first=n-second-third;
	//contador++;

	//printf("%d+%d+%d\n",first,second,third);

	while (first>=second) {
		printf("%d+%d+%d\n",first,second,third);
		first--;
		second++;
		contador++;
	}

	first++;
	second--;

	//printf("%d\n", first);
	//printf("%d\n", second);
	//printf("%d\n", third);

	while (second>third) {
		second--;
		third++;
		printf("%d+%d+%d\n",first,second,third);
		contador++;
	}

	printf("contador: %d\n",contador);

}
*/

/*
#include <stdio.h>

int main()
{
	//variaveis
	int n, first;
	int count=1;
	int second=1;
	int third=1;

	//get input
	//printf("Escreva um numero para decompor em somas de tres parcelas.\nNumero: ");
	printf(" ");
	scanf("%d", &n);

	first=n-2;

	//print 1st=5, 2nd=1, 3rd=1 //output=5+1+1

	while(first>=second) {
		second++;
		first--;
		//count++;
		if(first>=second) {
			count++;
			printf("%d+%d+%d\n",first,second,third);	
		} else {
			while(second>=third)
			third++;
				second--;
			}
			if(second>=third) {
			count++;
			printf("%d+%d+%d\n",first,second,third);
		}
	}

	/*	
	while(second<=first && second>=third){
		third++;
		//count++;
		second--;
		count++;
		printf("%d+%d+%d\n",first,second,third);
	}
	*/
	
/*
	printf("%d\n", count);

}*/


// PROF - fdd!

/* triplasoma.c */
/* exemplo com 14*/
#include <stdio.h>

int main()
{

	int i, j, n, count; // também defini 3 variáveis n=first; i=second, j=third, count==count
	printf("Escreva um numero para decompor em somas de tres parcelas.\nNumero:");
	scanf("%d", & n); // n=14
	count = 0; // count=0;

	/* percorrer todas as possíveis permutações (apenas dois ciclos aninhados),
	assumindo que os números mais altos aparecem sempre primeiro */
	i = n - 2; // i=12 | acertei na formula do first
	while((n - i) <= i *2) // 2<=24 -> porque multiplica i * 2? | avalaria numeros consecutivos em ciclos de 2 | faz duas passagens... numero de divisoes
	{
		/* este condicional garante que há parcelas para além desta,		
		mais pequenas ou iguais, pelo menos duas iguais a i */
		j = (n - i) - 1; // j=2-1=1
		if(j > i) // 1 > 12    // reset?
			j = i; // j=12 
		while((n - i - j) <= j) //14-12-12=0 <= 12.... fuck! Bem feito... mas eu nunca chegaria lá 
		{
			/* encontrado i+j+(n-i-j), imprimir */
			printf(" %d+%d+%d\n", i, j, n - i - j);// i=12, j=12, 14-12-12c=0
			count++; //=1
			j--; //=11
		}
		i--;//=11
	}
	printf("Numero de somas: %d\n", count);
}
