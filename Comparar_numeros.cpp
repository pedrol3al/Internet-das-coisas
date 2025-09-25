#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	 setlocale(LC_ALL, "Portuguese");
	
	float num1,num2,num3;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Insira o terceiro numero: ");
	scanf("%f", &num3);
	
	if(num1 > num2 && num1 > num3){
		printf("O primeiro numero é maior que os demais");
	}else if( num2 > num1 && num2 > num3){
			printf("O segundo numero é maior que os demais");
	}else if( num3 > num1 && num3 > num1) {
		printf("O terceiro numero é maior que os demais");
	}else{
		printf("Há numeros iguais");
	}
	return 0;
}