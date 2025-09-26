#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
 
    char op;
    float salario, novo_salario, imposto;
    
    printf("Menu de opcoes: \n\n1. Imposto \n2. Novo Salario \n3. Classificacao \n\nDigite a opcao desejada: ");
    scanf(" %c", &op); // espaço antes de %c para ignorar enter anterior
    
    switch (op) {
        case '1': 
            printf("Insira o seu salario: ");
            scanf("%f", &salario);
            if (salario < 500) {
                imposto = salario * 5/100;
            } else if (salario >= 500 && salario <= 850) {
                imposto = salario * 10/100;
            } else {
                imposto = salario * 15/100;
            }
            printf("O imposto sobre o seu salario é: R$ %.2f", imposto);
            break;
            
        case '2':
            printf("Insira o seu salario: ");
            scanf("%f", &salario);
            if (salario < 450) {
                novo_salario = salario + 100;
            } else if (salario >= 450 && salario <= 749) {
                novo_salario = salario + 75;
            } else if (salario >= 750 && salario <= 1500) {
                novo_salario = salario + 50;
            } else {
                novo_salario = salario + 25; 
            }
            printf("Seu novo salario após o reajuste é de: R$ %.2f", novo_salario);
            break;
         
        case '3':
            printf("Insira o seu salario: ");
            scanf("%f", &salario);
            if (salario <= 700) {
                printf("Voce é mal remunerado!");
            } else {
                printf("Voce é bem remunerado!");
            }
            break;

        default:
            printf("Opção invalida.");
    }

    return 0;
}
