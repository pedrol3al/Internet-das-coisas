#include <stdio.h>
#include <string.h>

int main() {
    char lojas[8][50];
    char produtos[4][50];
    float preco[8][4];
    int i, j;

	printf("Pedro Gabriel Leal Costa \n\n");4

    printf("=== Cadastro das lojas ===\n");
    for (i = 0; i < 8; i++) {
        printf("Nome da loja %d: ", i + 1);
        fgets(lojas[i], 50, stdin);
        lojas[i][strcspn(lojas[i], "\n")] = '\0';
    }

    printf("\n=== Cadastro dos produtos ===\n");
    for (j = 0; j < 4; j++) {
        printf("Nome do produto %d: ", j + 1);
        fgets(produtos[j], 50, stdin);
        produtos[j][strcspn(produtos[j], "\n")] = '\0';
    }

    printf("\n=== Digite os preços ===\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            printf("Preço do produto '%s' na loja '%s': R$ ", produtos[j], lojas[i]);
            scanf("%f", &preco[i][j]);
        }
    }

    printf("\n=== Produtos até R$60,00 ===\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            if (preco[i][j] <= 60) {
                printf("Produto: %s | Loja: %s | R$ %.2f\n", produtos[j], lojas[i], preco[i][j]);
            }
        }
    }

    return 0;
}