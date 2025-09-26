#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cod_cidade[5], num_passeio[5], num_acidente[5];
    float indice[5];
    int i;

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Cidade %d\n", i + 1);

        printf("Código da cidade: ");
        scanf("%d", &cod_cidade[i]);

        printf("Número de veículos de passeio: ");
        scanf("%d", &num_passeio[i]);

        printf("Número de acidentes de trânsito com vítimas: ");
        scanf("%d", &num_acidente[i]);

        // Cálculo do índice de acidentes
        indice[i] = ( (float)num_acidente[i] / num_passeio[i] ) * 100;

        printf("Índice de acidentes = %.2f%%\n\n", indice[i]);
    }

    // a) Maior e menor índice
    int pos_maior = 0, pos_menor = 0;
    for (i = 1; i < 5; i++) {
        if (indice[i] > indice[pos_maior]) pos_maior = i;
        if (indice[i] < indice[pos_menor]) pos_menor = i;
    }

    printf("\nMaior índice de acidentes: Cidade %d (%.2f%%)\n",
           cod_cidade[pos_maior], indice[pos_maior]);
    printf("Menor índice de acidentes: Cidade %d (%.2f%%)\n",
           cod_cidade[pos_menor], indice[pos_menor]);

    // b) Média de veículos nas 5 cidades
    int soma_veiculos = 0;
    for (i = 0; i < 5; i++) {
        soma_veiculos += num_passeio[i];
    }
    float media_veiculos = soma_veiculos / 5.0;
    printf("\nMédia de veículos nas 5 cidades: %.2f\n", media_veiculos);

    // c) Média de acidentes nas cidades com menos de 2000 veículos
    int soma_acidentes = 0, cont = 0;
    for (i = 0; i < 5; i++) {
        if (num_passeio[i] < 2000) {
            soma_acidentes += num_acidente[i];
            cont++;
        }
    }
    if (cont > 0) {
        float media_acidentes = (float)soma_acidentes / cont;
        printf("\nMédia de acidentes nas cidades com menos de 2000 veículos: %.2f\n",
               media_acidentes);
    } else {
        printf("\nNenhuma cidade com menos de 2000 veículos.\n");
    }

    return 0;
}