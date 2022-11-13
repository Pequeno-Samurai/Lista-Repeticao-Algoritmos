/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá
calcular e mostrar:
A menor altura do grupo;
A maior altura do grupo.*/
#include <stdio.h>

int main ()
{
	int n = 15, contador = 0;
	float maior=99999, menor=99999, altura;

	while (contador < n)
	{
		contador++;
		printf("Digite uma altura: ");
		scanf("%f", &altura);
		if(maior <altura)
		{
			maior = altura; 
		}
		if (menor > altura)
		{
			menor = altura; 
		}
	}
	
	printf("Maior altura: %.2f\n", maior);
	printf("Menor altura: %.2f\n", menor);
	
	return 0; }
