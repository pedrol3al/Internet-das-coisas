#include <stdio.h>

int main() {
    float preco[10];     // preço de cada objeto
    int qtd[10];         // quantidade vendida de cada objeto
    float valorTotal[10]; // preço * qtd
    float totalGeral = 0; 
    int i;
    int maisVendido = 0; // posição do mais vendido
    int maiorQtd = 0; 

    float salario = 545.0; 
    float comissao;

printf("Pedro Gabriel Leal Costa\n\n");

    // pedir preço e quantidade
    for (i = 0; i < 10; i++) {
        printf("Digite o preco do objeto %d: ", i+1);
        scanf("%f", &preco[i]);
        printf("Digite a quantidade vendida do objeto %d: ", i+1);
        scanf("%d", &qtd[i]);

        valorTotal[i] = preco[i] * qtd[i]; // calcula o total daquele objeto
        totalGeral += valorTotal[i];       // soma no geral

        // ver qual foi o mais vendido
        if (qtd[i] > maiorQtd) {
            maiorQtd = qtd[i];
            maisVendido = i;
        }
    }

    // relatório
    printf("\nRelatório de vendas:\n");
    for (i = 0; i < 10; i++) {
        printf("Objeto %d: Qtd=%d | Preço=%.2f | Total=%.2f\n", i+1, qtd[i], preco[i], valorTotal[i]);
    }

    // comissão = 5% das vendas
    comissao = totalGeral * 0.05;

    printf("\nValor total das vendas: R$ %.2f\n", totalGeral);
    printf("Comissao: R$ %.2f\n", comissao);
    printf("Salario final: R$ %.2f\n", salario + comissao);
    printf("Objeto mais vendido: Objeto %d (Qtd=%d)\n", maisVendido+1, maiorQtd);

    return 0;
}