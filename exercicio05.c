/*Implemente um programa que gera e escreve os números ímpares entre 100 e
200.*/
#include <stdio.h>

int main()
{
	int x=200, cont=100, a=100, b, c;
	
	while (cont < x)
	{
		cont++;
		a++;
		if (a%2==1)
		{
			printf("%d\n", a); 
		}
	}
	return 0; 
}
