#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digit um numero qualquer: ");
	scanf("%d", &numero);
	if(numero < 0){
	
	printf("Numero menor que zero.");
	}else if(numero < 10){
	
	printf("Numero >=0  e < 10");
	}else if (numero < 100){
		printf("Numero >=10  e < 100");
	}else{
		printf("Número >=100");
	}
}