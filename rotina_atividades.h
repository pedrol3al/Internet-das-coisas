#include <stdio.h>
#include <string.h>

int negativo_positivo(int num)
{
	if(num == 0){
		printf("Você digitou 0!");
	}
	else if(num > 0  ){
		printf("Número positivo");
		
	}else{
		printf("Número negativo");
	}
}