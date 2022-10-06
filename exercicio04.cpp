/*Implemente um programa que leia uma quantidade não determinada de números
positivos. Calcule a quantidade de números pares e ímpares, a média de valores
pares e a média geral dos números lidos. O número que encerra a leitura será zero.*/
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
