#include <stdio.h>

int main() {
    int numeros[10]; 
    int i, achei = 0;

	printf("Pedro Gabriel Leal Costa\n\n");

    // pedir os números
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros maiores que 50:\n");

    // procurar os maiores que 50
    for (i = 0; i < 10; i++) {
        if (numeros[i] > 50) {
            printf("Posicao %d -> %d\n", i, numeros[i]);
            achei = 1;
        }
    }

    if (achei == 0) {
        printf("Nao tem nenhum numero maior que 50.\n");
    }

    return 0;
}