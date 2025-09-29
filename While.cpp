#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int anoAtual, anoInicial=2020;
    float salario=1000, novoSalario, porcentagem=1.5, aumento;
    
    printf("Digite o ano atual: ");
    scanf("%d",&anoAtual);
    
    while(anoInicial < anoAtual){
        aumento = salario * (porcentagem/100);
        salario = salario + aumento;
        porcentagem = porcentagem * 2;
        anoInicial = anoInicial + 1;
        printf("\n\nO salário com reajuste, em %d é igual a %0.2f.",anoInicial,salario);
    }
}
   