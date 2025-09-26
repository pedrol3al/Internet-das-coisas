#include <stdio.h>

int main() {
    int num_criancas, i;
    int fem_mortas = 0, masc_mortas = 0, ate_24_meses = 0;
    int total_fem = 0, total_masc = 0;
    char sexo;
    int tempo_vida;
    
    
    printf("Digite o número de crianças nascidas no período: ");
    scanf("%d", &num_criancas);
    
    
    for (i = 1; i <= num_criancas; i++) {
        printf("\nCriança %d:\n", i);
        
        
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        
        
        printf("Tempo de vida (meses): ");
        scanf("%d", &tempo_vida);
        
        
        if (sexo == 'F' || sexo == 'f') {
            total_fem = total_fem + 1;
            if (tempo_vida == 0) {
                fem_mortas = fem_mortas + 1;
            }
        }
        
        if (sexo == 'M' || sexo == 'm') {
            total_masc = total_masc + 1;
            if (tempo_vida == 0) {
                masc_mortas = masc_mortas + 1;
            }
        }
        
        // Conta crianças que viveram 24 meses ou menos
        if (tempo_vida <= 24) {
            ate_24_meses = ate_24_meses + 1;
        }
    }
    
    // Cálculo das porcentagens
    float porc_fem_mortas = 0;
    float porc_masc_mortas = 0;
    float porc_ate_24_meses = 0;
    
    // Evita divisão por zero
    if (total_fem > 0) {
        porc_fem_mortas = (fem_mortas * 100.0) / total_fem;
    }
    
    if (total_masc > 0) {
        porc_masc_mortas = (masc_mortas * 100.0) / total_masc;
    }
    
    if (num_criancas > 0) {
        porc_ate_24_meses = (ate_24_meses * 100.0) / num_criancas;
    }
    
    // Mostra os resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Porcentagem de crianças do sexo feminino mortas: %.2f%%\n", porc_fem_mortas);
    printf("Porcentagem de crianças do sexo masculino mortas: %.2f%%\n", porc_masc_mortas);
    printf("Porcentagem de crianças que viveram 24 meses ou menos: %.2f%%\n", porc_ate_24_meses);
    
    return 0;
}