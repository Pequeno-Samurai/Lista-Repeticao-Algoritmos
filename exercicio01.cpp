/*Desenvolver um algoritmo que efetue a soma de todos os n�meros �mpares que
s�o m�ltiplos de tr�s e que se encontram no conjunto dos n�meros de 1 at� 500*/
#include <stdio.h>
int main (){
	int n=500, contador=1, a=1, soma=0;
	while (contador < n){
		contador++;
		a++;
		if(a%3==0){
			if(a%2==1){
				printf("%d\n", a);
				soma += a;
				printf("Valor corrente: %d\n", soma); }
		}
	}
	printf("Valor final: %d\n", soma);
	return 0; }
