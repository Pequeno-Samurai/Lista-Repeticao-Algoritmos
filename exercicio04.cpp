/*Implemente um programa que leia uma quantidade n�o determinada de n�meros
positivos. Calcule a quantidade de n�meros pares e �mpares, a m�dia de valores
pares e a m�dia geral dos n�meros lidos. O n�mero que encerra a leitura ser� zero.*/
#include <stdio.h>
int main (){
	int valor, par=0, somapar=0, impar=0, somaimpar=0;
	float mediapar, mediageral;
	
	while (1){
		printf("Digite um valor positivo: ");
		scanf("%d", &valor);
		if (valor > 0){
			if (valor%2==0)
				par++;
				somapar+=par;
				else if (valor%2=1){
					impar++;
					somaimpar+=impar;
				}
			}
		}
	
	printf("Qantidade de valores pares: %d", pares);
	printf("Qantidade de valores impares: %d", impares);
	
	
	
	
	
	
	
	
	
	return 0; }
