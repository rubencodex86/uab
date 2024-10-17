/* Não funciona. Feito em pi.c */

#include <math.h>
#include <stdio.h>

/* Fórmula do Pi
	1/pi = 2sqrt(2)/9801 * somatório(k=0 até k) de ((4k!)*(1103+26390k))/(((k!)^4)*(396^4k)) */

int main()
{
	double pi, somatorio, fatorial, fatexp4k=0;
	int k, i;
	double raiz=0, quatrok=0, bigplus=0;
	double numexp4k=0;

	printf("k= ");
	scanf("%d", & k);

	raiz=2*sqrt(2)/9801;
	quatrok=4*k;
	bigplus=1103+26390*k;
	numexp4k=pow(396, 4*k);
	//falta -> factorial

	printf("raiz: %lf\nquatrok: %lf\fbigplus: %lf\nnumexp4k: %lf\n", raiz, quatrok, bigplus, numexp4k);

	// fatorial
	/*
		int n, i, produto;
    printf("Calculo do produto dds primeiros N numeros.\nIndique N: ");
    scanf("%d", & n);
    i=1;
    produto=1;

    if(n==0)
        printf("Facorial(%d)=%d\n",n, i);
    else
        while (i<=n) {
            produto *= i;
            printf("Factorial(%d)=%d\n",i,produto);
            i++;         
        }
    printf("Resultado: %d\n", produto);
	*/
	//(4K)!
	i=1;
	fatorial=1;

	if(4*k==0) {
        printf("Facorial(%d)=%d\n",k, i);
	} else 
		while (i<=4*k) {
        	fatorial *= i;
        	i++;
        	if(i==4*k+1) {
        		quatrok=fatorial;
        	}
   		}
   	printf("quatrok: %lf\n", quatrok); //4k fatorial
   	
   	   	// K!
   	i=1;
	fatorial=1;

	if(k==0){
        printf("Facorial(%d)=%d\n",k, i);
	} else
        while (i<=k) {
            fatorial *= i;
            i++;        
            if(i==k+1) {
        		fatexp4k=fatorial;
        	} 
        }
    fatexp4k = pow(fatexp4k, 4); // (k!)^4 exp4

    printf("fatexp4k: %lf\n", fatexp4k); // (k!)^4 exp4


    somatorio = ((quatrok*bigplus)/(fatexp4k*numexp4k));
    //printf("Somatorio(%d)=%lf\n",k, somatorio);
    
    //somatorio
    
    i=0;
    while (i<=k) {
    	somatorio += ((quatrok*bigplus)/(fatexp4k*numexp4k));
    	printf("Somatorio(%d)=%lf\n",k, somatorio);
    	i++;
    }
    
    printf("Somatorio(%d)=%lf\n",k, somatorio);
}



/* output so far

[ruben@archlinux exercicios]$ ./13_pi 
k= 2
raiz: 0.000289                                                                                                                                                                                                
quatrok: 8.000000 -> (4k)!                                                                                                                                                                                             
                 bigplus: 53883.000000 -> (1103+26390k)                
numexp4k: 604729962940281651200.000000 -> (396)^4k                                                                                                                                                                        
quatrok: 40320.000000
fatexp4k: 16.000000
Somatorio(2)=0.000000
Somatorio(2)=0.000000
Somatorio(2)=0.000000
Somatorio(2)=0.000000
[ruben@archlinux exercicios]$ 

*/