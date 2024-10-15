/*
Faça um programa que leia as horas, minutos e segundos, e calcule o número de
segundos que passaram desde o início do dia.
*/

#include <stdio.h>

int main()
{
	int horas, minutos, segundos;

	/* ler o número de horas, minutos e segundos */
	printf("Calculo do numero de segundos desde o inicio do dia.\nHora: ");
	scanf("%d", & horas);
	printf("Minuto: ");
    scanf("%d", & minutos);
    printf("Segundos: ");
    scanf("%d", & segundos);

    printf("Numero de segundos desde o inicio do dia: %d\n", 3600*horas+60*minutos+segundos);
}
