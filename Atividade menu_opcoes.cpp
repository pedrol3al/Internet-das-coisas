#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
 
 	char op;
	float salario, sal_imposto;
	
	printf("Menu de opções: \n 1.Imposto \n 2.Novo Salário \n 3.Classificação \n Digite a classificação desejada.");
	scanf("%c", &op);
	
	switch (op):
		case 1: 
			printf("Insira o seu salário: ");
			scanf("%f", salario);
			if (salario < 500){
				sal_imposto = salario * 5/100;
				printf("Seu salario com imposto é: %f, você recebe mal", sal_imposto);	
			}
}