#include <stdio.h>

int main(){
    float salario = 1000.0;
    float percentual = 1.5;
    int ano_atual;
    
    printf("Digite o ano atual para calcular o salario: ");
    scanf("%d", &ano_atual);
    
    for(int ano = 2018; ano <= ano_atual; ano++ ){
        salario = salario + (salario * percentual / 100);
        printf("Salario em %d: %.2f\n", ano, salario); 

        if (ano >= 2019){
            percentual = percentual * 2;
        }
    }
    
    return 0;
}
