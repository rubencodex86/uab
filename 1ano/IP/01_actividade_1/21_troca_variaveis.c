#include <stdio.h>

int main()
{
	/* code */
	int x = 3;
	int y = 7;
	int aux;

	aux = x;
	x = y;
	y = aux;

	printf("x: %d, y: %d\n", x, y);
}