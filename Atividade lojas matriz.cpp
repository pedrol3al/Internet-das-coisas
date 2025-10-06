#include <stdio.h>

int main() {
    char lojas[8][50], produtos[4][50];
    float preco[8][4];
    int i, j;

    printf("Pedro Gabriel Leal Costa\n\n");

    // Cadastro das lojas
    printf("=== Cadastro das lojas ===\n");
    for (i = 0; i < 8; i++) {
        printf("Loja %d: ", i + 1);
        scanf("%s", lojas[i]);
    }

    // Cadastro dos produtos
    printf("\n=== Cadastro dos produtos ===\n");
    for (j = 0; j < 4; j++) {
        printf("Produto %d: ", j + 1);
        scanf("%s", produtos[j]);
    }

    // Cadastro dos preços
    printf("\n=== Cadastro dos preços ===\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            printf("Preço de %s em %s: R$ ", produtos[j], lojas[i]);
            scanf("%f", &preco[i][j]);
        }
    }

    // Exibir produtos até R$60,00
    printf("\n=== Produtos até R$60,00 ===\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            if (preco[i][j] <= 60)
                printf("%s | %s | R$ %.2f\n", produtos[j], lojas[i], preco[i][j]);
        }
    }

    return 0;
}
