#include <stdio.h>
#include <string.h>

int main() {
    char modelos[5][20];      // vetor de strings para os nomes dos carros
    float consumo[5];         // vetor para km/l de cada carro
    float litros[5];          // vetor para guardar litros gastos em 1000 km
    int i, maisEconomico = 0; // índice do carro mais econômico

	printf("Pedro Gabriel Leal Costa\n\n");

    // Entrada dos modelos dos carros
    for (i = 0; i < 5; i++) {
        printf("Digite o modelo do %do veiculo: ", i + 1);
        scanf("%s", modelos[i]);
    }

    // Entrada do consumo e cálculo dos litros
    for (i = 0; i < 5; i++) {
        printf("\nDigite quantos kilometros por litro que o %do veiculo faz: ", i + 1);
        scanf("%f", &consumo[i]);

        // cálculo dos litros para 1000 km
        litros[i] = 1000.0 / consumo[i];

        // mostra o resultado já no loop
        printf("O veiculo %s consome %.2f litro(s) de combustivel para percorrer 1000Km/s\n",
               modelos[i], litros[i]);

        // verifica o mais econômico
        if (consumo[i] > consumo[maisEconomico]) {
            maisEconomico = i;
        }
    }

    // mostra o carro mais econômico
    printf("\nO veiculo mais economico e o %s\n", modelos[maisEconomico]);

    return 0;
}