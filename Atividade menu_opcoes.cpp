#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
 
     char op;
    float salario, novo_salario, imposto;
    
    printf("Menu de opções: \n 1.Imposto \n 2.Novo Salário \n 3.Classificação \n Digite a classificação desejada.");
    scanf("%c", &op);
    
    switch (op){
        case '1': 
            printf("Insira o seu salário: ");
            scanf("%f", &salario);
            if (salario < 500){
                imposto = salario * 5/100;
                printf("O imposto sobre o seu salário é: R$ %.2f", imposto);    
            }else if (salario >= 500 || salario <= 850){
                imposto =  salario * 10/100;
                printf("O imposto sobre o seu salário é: R$ %.2f", imposto);
            }else if(salario > 850){
                imposto = salario * 15/100;
                printf("O imposto sobre o seu salário é: R$ %.2f", imposto);
            }
            break;
            
        case '2': {
            printf("Insira o seu salário: ");
               scanf("%f", &salario);
               if(salario < 450 ){
                   novo_salario = salario + 100;
                   printf("Seu novo salário após o reajuste é de: R$ %.2f", novo_salario);
                   
               }else if (salario >= 450 || salario <= 749 ){
                   novo_salario = salario + 75;
                   printf("Seu novo salário após o reajuste é de: R$ %.2f", novo_salario);
                   
               }else if (salario >= 750 || salario <= 1500){
                   novo_salario = salario + 50;
                   printf("Seu novo salário após o reajuste é de: R$ %.2f", novo_salario);
                   
               }else if(salario > 1500){
                   novo_salario = salario + 25; 
                   printf("Seu novo salário após o reajuste é de: R$ %.2f", novo_salario);
               }
               break;
         
        }    
        
        case '3': {
         printf("Insira o seu salário: ");
         scanf("%f", &salario);
         
         if(salario <= 700){
             printf("Você é mal remunerado!");
         }else if(salario > 700){
             printf("Você é bem remunerado!");
            }
         }
         default: {
             printf("Opção invalida.");
         }
    }
}