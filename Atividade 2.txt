#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 

    float salario, salReceber, gratificacao, imposto;

    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario);

    // imposto de 7%
    imposto = salario * 0.07;
    printf("O valor do imposto é: R$ %0.2f\n", imposto);

    // gratificação de 5%
    gratificacao = salario * 0.05;
    printf("O valor da gratificação é: R$ %.2f\n", gratificacao);

    // salário final
    salReceber = salario + gratificacao - imposto;
    printf("O salário final é: R$ %0.2f\n", salReceber);

    return 0;
}
