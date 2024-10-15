#include <stdio.h>

int main()
{
	/* code */
	int x = 3;
	int y = 7;
	x = x+y; /* x=3+7 =10*/
	y = x-y; /* y=10-7 =3*/
	x = x-y; /* x=10-3 = 7*/

	printf("x: %d, y: %d\n", x ,y );
}
