/*
Calcule as combinações de N, R a R: multiplicar os números de N-R+1 até N, 
dividindo o resultado pelo factorial de R (produto de todos os números de 1 a R).

Notas:

Se efectuar as multiplicações e só dividir no final, rapidamente ultrapassa o
limite do inteiro. Se multiplicar e depois dividir em cada passo, consegue obter 
valores correctos para uma maior gama de números.

As combinações de 3 elementos {A, B, C}, 2 a 2, são as seguintes 3: {A,B}; 
{A,C}; {B,C}. Notar que relativamente aos arranjos, neste caso a ordem não interessa.
*/

#include <stdio.h>

int main()
{
	/*arranjos*/
	/*aux - salva valores parciais p/ display*/
	int n, r, i, j, aux1, aux2, aux3;

	/*divisor*/
	j=1;

	printf("Calculo das combinacoes de N, R a R:\nIndique N: ");
	scanf("%d", &n);
	printf("Indique R: ");
	scanf("%d", &r);

	i=n-r+1;

	if (r>=n || r<1 || n<1) {
		printf("Erro: N tem de ser maior que R e este maior que 0.\n");
	} else {
		aux1=i/j;
		//printf("%d*%d=%d/%d=%d\n",j,i,i,j,aux1);
		printf("%d*%d=%d, %d/%d=%d\n",j,i,aux1,i,j,aux1);
		i++;
		j++;
		while(i<=n && j<=r) {
			aux2=aux1*i;
			aux3=aux2/j;
			//printf("%d*%d=%d/%d=%d\n",aux1,i,aux2,j,aux3);
			printf("%d*%d=%d, %d/%d=%d\n",aux1,i,aux2,aux2,j,aux3);
			aux1=aux3;
			i++;
			j++;
		}
		printf("Resultado: %d\n",aux1);
	} 
}