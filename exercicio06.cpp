/*Implemente um programa que leia um valor para uma variável N de 1 a 10 e
calcule a tabuada de N. Mostre a tabuada na forma: 0 N = 0; 1 N = 1N; 2 N = 2N;
; 10 N = 10N.*/
#include <stdio.h>
int main (){
	int cont=0, a=11, x, mult=0, result;
	printf("Digite um valor: ");
	scanf("%d", &x);
	while (cont < a){
		cont++;
		if(x>=1 && x<+10){
			result = x*mult;
			printf("Tabuada de: %d\n", result);
			mult++; }
	}
	return 0; }
