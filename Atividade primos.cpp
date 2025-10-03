#include <stdio.h>

int main() {
    int numeros[9]; // vetor com 9 posições
    int i, j, primo;
    
    printf("Pedro Gabriel Leal Costa\n\n");

    // pedir os números
    for (i = 0; i < 9; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // verificar quem é primo
    printf("\nNumeros primos encontrados:\n");
    for (i = 0; i < 9; i++) {
        primo = 1; // assume que é primo

        if (numeros[i] < 2) {
            primo = 0; // menor que 2 não é primo
        } else {
            for (j = 2; j < numeros[i]; j++) { // testa divisores
                if (numeros[i] % j == 0) {
                    primo = 0;
                    break; // achou divisor, não é primo
                }
            }
        }

        if (primo == 1) {
            printf("Posicao %d -> %d\n", i, numeros[i]);
        }
    }

    return 0;
}