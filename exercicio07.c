/*Implemente um programa que leia um valor inicial A e imprima a sequência de
valores do cálculo de A! e o seu resultado. Ex: 5! = 5 4 3 2 1 = 120*/
#include <stdio.h>

int main()
{
	int cont=1, a, result, b, n;
	
	printf("Digite o valor inicial: ");
	scanf("%d", &a);
	
	b=a, n=a;
	
	while (cont <n)
	{
		cont++;
		b=b-1;
		a=a*b; 
	}
	printf("Sequencia de valores do calculo de A: %d", a);
	return 0; 
}
