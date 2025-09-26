#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	 
    char op;
    float num1, num2;

    printf("Digite um número, um operador (+ - * /), e outro número:\n");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("= %.2f\n", num1 + num2);
            break;

        case '-':
            printf("= %.2f\n", num1 - num2);
            break;

        case '*':
            printf("= %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("= %.2f\n", num1 / num2);
            else
                printf("Erro: divisão por zero!\n");
            break;

        default:
            printf("OPERADOR INVÁLIDO!!\n");
    }

    return 0;
}
