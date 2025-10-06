#include <stdio.h>

int main() {
    int vet[18];
    int mat[3][6];
    int i, j, k = 0;
    
    printf("Pedro Gabriel Leal Costa\n\n");

    printf("Digite 18 numeros:\n");
    for (i = 0; i < 18; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // Passando os valores do vetor pra matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            mat[i][j] = vet[k];
            k++;
        }
    }

    // Mostrando a matriz
    printf("\nMatriz 3x6:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}