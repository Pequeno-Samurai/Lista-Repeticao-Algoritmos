/*Implemente um programa que leia uma quantidade desconhecida de números e
conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e
[76-100]. A entrada de dados deve terminar quando for lido um número negativo*/
#include <stdio.h>
int main (){
	int contador=0, n=9999, a=0, b=0, c=0, d=0, num;
	while (contador < n){
		contador++;
		printf("Digite um valor: ");
		scanf("%d", &num);
		if (num >=0 and num <=25){
			a++; }
		else if (num >=26 and num <=50){
			b++; }
		else if (num >=51 and num <=75){
			c++; }
		else if (num >=76 and num <=100){
			d++; }
		else if (num <0){
			contador=9999; }
	}
	printf("Foi digitado %d numeros entre 0 e 25\n", a);
	printf("Foi digitado %d numeros entre 25 e 50\n", b);
	printf("Foi digitado %d numeros entre 51 e 75\n", c);
	printf("Foi digitado %d numeros entre 76 e 100\n", d);
	return 0; }
