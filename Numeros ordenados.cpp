#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	 setlocale(LC_ALL, "Portuguese");
	 
	 float num1, num2;
	 
	 printf("Insira o primeiro numero: ");
	 scanf("%f", &num1);
	 
	 printf("Insira o segundo numero: ");
	 scanf("%f", &num2);
	 
	 if(num1 > num2){
	 	printf("%0.2f, %0.2f", num1, num2);
	 }else if (num2 > num1){
	 		printf("%0.2f, %0.2f", num2, num1);
	 }else{
	 	printf("Os números são iguais");
	 }
}