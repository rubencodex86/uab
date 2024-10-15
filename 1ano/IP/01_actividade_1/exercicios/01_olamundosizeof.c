#include <stdio.h>

int main()
{
	/* print hello world */
	printf("Olá Mundo!\n");

	/* indique o tamanho em bytes (operador sizeof) dos seguintes
	   tipos de dados: char; short; int; long; long long; float;
	   double; long double.
	*/
	printf("Sizeof(char): %lu\n", sizeof(char));
	printf("Sizeof(short): %lu\n", sizeof(short));
	printf("Sizeof(int): %lu\n", sizeof(int));
	printf("Sizeof(long): %lu\n", sizeof(long));
	printf("Sizeof(long long): %lu\n", sizeof(long long));
	printf("Sizeof(float): %lu\n", sizeof(float));
	printf("Sizeof(double): %lu\n", sizeof(double));
	printf("Sizeof(long double): %lu\n", sizeof(long double));

	printf("A soma dos tamanhos é: %lu\n", sizeof(char)+sizeof(short)+sizeof(int)+
		sizeof(long)+sizeof(long long)+sizeof(float)+sizeof(double)+sizeof(long double));
}
