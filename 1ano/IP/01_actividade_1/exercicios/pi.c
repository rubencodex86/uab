#include <stdio.h>
#include <math.h>

int main()
{
    int k;
    double pi;

    // get k
    scanf("%d", & k);

    // 2sqrt(2)/9801
    double raiz = ((2 * sqrt(2)) / 9801);

    double somatorio = 0;

    // loop somatorio
    int current_k = 0;
    while (current_k <= k) {
        // 4k! * (1103 + 26390 * k)
        int i = 1;
        double fatorial = 1;
        double quatrok = 1;

        // calcula 4k!
        while (i <= 4 * current_k) {
            fatorial *= i;
            i++;
        }
        quatrok = fatorial;

        // big multiplication
        double bigmulti = (1103 + (26390 * current_k));
        double numerador = quatrok * bigmulti;

        // denominador: (k!)^4 * (396)^(4k)
        i = 1;
        fatorial = 1;

        // calcula k!
        while (i <= current_k) {
            fatorial *= i;
            i++;
        }
        double kfact = pow(fatorial, 4);

        // calcula (396)^(4k)
        double potencia = pow(396, 4 * current_k);

        // denominador
        double denominador = kfact * potencia;

        // division por current_k
        double divisao = numerador / denominador;

        somatorio += divisao;

        current_k++;
    }

    // calcula pi
    pi = 1 / (raiz * somatorio);
    printf("%.16lf\n", pi);
}



/* last version
#include <stdio.h>
#include <math.h>

int main()
{
    int k;
    double pi;

    // get k
    printf("k= ");
    scanf("%d", & k);
    //printf("Valor k= %d\n", k);

    // 2sqrt(2)/9801
    double raiz = ((2 * sqrt(2)) / 9801);
    //printf("Valor raiz= %lf\n", raiz);

    double somatorio = 0;

    // loop somatorio
    int current_k = 0;
    while (current_k <= k) {
        // numerador: 4k! * (1103 + 26390 * k)
        int i = 1;
        double fatorial = 1;
        double quatrok = 1;

        // calcula 4k!
        while (i <= 4 * current_k) {
            fatorial *= i;
            i++;
        }
        quatrok = fatorial;

        // big multiplication
        double bigmulti = (1103 + (26390 * current_k));
        double numerador = quatrok * bigmulti;

        // denominator: (k!)^4 * (396)^(4k)
        i = 1;
        fatorial = 1;

        // calcula k!
        while (i <= current_k) {
            fatorial *= i;
            i++;
        }
        double kfact = pow(fatorial, 4);

        // calcula (396)^(4k)
        double potencia = pow(396, 4 * current_k);

        // denominator
        double denominador = kfact * potencia;

        // division por current_k
        double divisao = numerador / denominador;

        somatorio += divisao;

        current_k++;
    }

    // calcula pi
    pi = 1 / (raiz * somatorio);
    printf("Valor de pi= %.17g\n", pi);

    return 0;
}
*/


/* 1st attempt
#include <stdio.h>
#include <math.h>

int main()
{
	int k;
	double pi;

	//get k
	printf("k= ");
	scanf("%d", & k);
	printf("Valor k= %d\n", k);

	//2raiz(2)/9801
	double raiz=((2*sqrt(2))/9801);
	printf("Valor raiz= %lf\n", raiz);

	double somatorio=0;

	//numerador
	//4k!
	int current_k=0;
	while (current_k<=k) {
		int i=1;
		double fatorial=1;

		// -> 4k
		double quatrok;
		//printf("Valor 4k= %lf\n", quatrok);

		// -> 4k!
		if (k==0) {
			quatrok=1;
			printf("Facorial(%d)=%d\n",k, i);
		} else {
			while (i<=4*current_k) {
				fatorial *= i;
				//printf("i= %d\n",i);
				//printf("fatorial=%d=%lf\n", i, fatorial);
				i++;
				if(i==4*current_k+1)
				{
					quatrok=fatorial;
				}
			}
		}
		printf("Valor de 4k! = %lf\n", quatrok);
		//fim 4k! -> quatrok=4k!

		//big multiplication
		double bigmulti=(1103+(26390*current_k));
		printf("1103+26390*k= %lf\n", bigmulti);

		double numerador=quatrok*bigmulti;
		printf("numerador: %lf\n", numerador);

		//denominador
		//(k!)^4
		i=1;
		fatorial=1;

		// -> k!
		double kfact;

		if (k==0) {
			kfact=i;
			//printf("Facorial(%d)=%d\n",k, i);
		} else {
			while (i<=current_k) {
				fatorial *= i;
				//printf("i= %d\n",i);
				//printf("fatorial=%d=%lf\n", i, fatorial);
				i++;
				if(i==current_k+1)
				{
					kfact=fatorial;
				}
			}
		}
		//printf("Valor de k! = %lf\n", kfact);

		// k!^4
		kfact=pow(kfact, 4);
		printf("Valor de (k!)^4 = %lf\n", kfact);
		//fim (k!)^4 -> kfact=(k!)^4

		// (396)^(4k)
		double potencia=pow(396,4*current_k);
		printf("Valor de (396)^4k = %lf\n", potencia);

		double denominador=kfact*potencia;
		printf("denominador: %lf\n", denominador);

		double divisao=numerador/denominador;
		//printf("divisao: %.34lf\n", divisao);
		printf("divisao: %lf\n", divisao);


		//somatorio
		i=1;
		double somatorio=0;

		 
		if(k==0) {
			somatorio=divisao;
		} else {
			while (i<=current_k) {
				somatorio+=divisao;
				i++;
			}
		}
	}
	
	printf("Valor somatorio divisao= %.17g\n", somatorio);

	pi=1/(raiz*somatorio);
	printf("Valor parcela direita= %.17g\n", pi);	
}
*/