#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, novoSalario;

    printf("Informe o salário do funcionário que deseja saber o reajuste: ");
    scanf("%f", &salario);

    printf("Salário atual: R$ %.2f\n", salario);
    printf("O valor do reajuste é: R$ %.2f\n", salario * 0.25);

    novoSalario = salario + (salario * 0.25);

    printf("O valor do salário com o reajuste é: R$ %.2f\n", novoSalario);

    return 0;
}
