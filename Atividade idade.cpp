#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	 setlocale(LC_ALL, "Portuguese");
	 
	 int idade;
	 
	 printf("Insira a idade que deseja: ");
	 scanf("%d", &idade);
	 
	 if(idade == 11){
	 	printf("Essa pessoa é uma criança e tem %d anos.", idade);
	 }else if(idade >= 12 && idade <= 18){
	 		printf("Essa pessoa é um adolescente e tem %d anos.", idade);
	 }else if(idade >=19 && idade <= 24){
	 		printf("Essa pessoa é um jovem e tem %d anos.", idade);
	 }else if(idade >= 25 && idade <= 59){
	 		printf("Essa pessoa é um jovem e tem %d anos.", idade);
	 }else{
	 		printf("Essa pessoa é um idoso e tem %d anos.", idade);
	 }
}