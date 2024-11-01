/*
Calculo dos arranjos de N, R a R: multiplicar os números de N-R+1 até N
Notas:
- Atenção que R tem de ser menor que N
- Os arranjos de 3 elementos {A, B, C}, 2 a 2, são os seguintes 6: (A,B); (A,C); 
(B,A); (B,C); (C,A); (C,B).
*/

#include <stdio.h>

int main()
{
	int n, r, arranjo, i;
	arranjo=1;

	/*recebe dados utilizador*/
	printf("Calculo dos arranjos de N, R a R:\nIndique N: ");
	scanf("%d", &n);
	printf("Indique R: ");
	scanf("%d", &r);

	/*confirma r>n*/
	while(r>=n || r<1) {
		printf("ERRO!: R tem de ser maior do que N.\nIndique R: ");
		scanf("%d", &r);
	}

	i=n-r+1;

	/*calculo do arranjo*/
	while(i<=n) {
		arranjo *= i;
		printf("i=%d; arranjos=%d\n",i,arranjo);
		i++;
	}
	printf("Resultado: %d\n", arranjo);
}

/* versão plataforma */
/*
#include <stdio.h>

int main()
{
	int n, r, produto, i;
	produto=1;

	
	printf("Calculo dos arranjos de N, R a R:\nIndique N: ");
	scanf("%d", &n);
	printf("Indique R: ");
	scanf("%d", &r);

    if(r>=n || r<1)
        printf("Erro: N tem de ser maior que R e este maior que 0.");
    else {
        i=n-r+1;
    	
    	while(i<=n) {
    		produto *= i;
    		printf("i=%d; arranjos=%d\n",i,produto);
    		i++;
    	}
	    printf("Resultado: %d\n", produto);
    }
}
*/
