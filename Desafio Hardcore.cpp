#include <stdio.h>

int main() {
	
    int i = 1; //Variável para contar o número de produtos
    float precoUnit, imposto, custoEst, precoFinal; //
    char refri, cat;

    float somaAdicionais = 0, maiorPreco = 0, menorPreco = 0;
    float totalImpostos = 0;
    int qtdBarato = 0, qtdNormal = 0, qtdCaro = 0;

	//Laço de repetição para os 12 produtos
    while (i <= 12) {
    	
    	
        printf("\nProduto %d\n", i); //Exibe o número do produto
        printf("Preco unitario: "); //Solicita o valor unitario
        scanf("%f", &precoUnit);	//Captura o valor unitario dentro da variavel "precoUnit"
         
        printf("Refrigeracao (S/N): ");
        scanf(" %c", &refri);
        
        printf("Categoria (A/L/V): ");
        scanf(" %c", &cat);

        // --- Calculo do custo de estocagem---
        if (precoUnit >= 20) {
            if (cat == 'A' || cat == 'a') custoEst = 2.0;
            else if (cat == 'L' || cat == 'l') custoEst = 3.0;
            else custoEst = 4.0; 
        } 
        else if (precoUnit <= 50) {
            if (refri == 'S' || refri == 's') custoEst = 6.0;
            else custoEst = 0.0; // Sem valor para N nessa faixa
        } 
        else { // preço > 50
            if (refri == 'S' || refri == 's') {
                custoEst = 5.0;
            } else { 
                if (cat == 'A' || cat == 'V') custoEst = 2.0;
                else if (cat == 'L') custoEst = 1.0;
            }
        }

        // --- Calculo do imposto ---
        if (cat == 'A' && refri == 'S') //Se for Alimento e precisar ser refrigerado
            imposto = precoUnit * 0.02;
        else //Se não
            imposto = precoUnit * 0.04;

        // --- Preço final ---
        precoFinal = precoUnit + custoEst + imposto;

        // --- Inicializa maior e menor com o primeiro produto ---
        if (i == 1) {
            maiorPreco = precoFinal;
            menorPreco = precoFinal;
        }

        // --- Acumular totais dos maiores preços e dos menores preços ---
        somaAdicionais += (custoEst + imposto);
        totalImpostos += imposto;

        if (precoFinal > maiorPreco) maiorPreco = precoFinal;
        if (precoFinal < menorPreco) menorPreco = precoFinal;

        // --- Classificacao dos mais baratos, preços normais e preços caros---
        if (precoFinal <= 20)
            qtdBarato++;
        else if (precoFinal <= 100)
            qtdNormal++;
        else
            qtdCaro++;

        i++; // incrementa contador para pedir novamente um valor
    }

    // --- Resultados finais de acordo com o solicitado no slide ---
    printf("\n========== RESULTADOS ==========\n");
    printf("Media dos valores adicionais (custos + impostos): %.2f\n", somaAdicionais / 12); //Calculo da media dos valores adicionais
    printf("Maior preco final: %.2f\n", maiorPreco);
    printf("Menor preco final: %.2f\n", menorPreco);
    printf("Total dos impostos: %.2f\n", totalImpostos);
    printf("Quantidade de produtos Barato: %d\n", qtdBarato);
    printf("Quantidade de produtos Normal: %d\n", qtdNormal);
    printf("Quantidade de produtos Caro: %d\n", qtdCaro);

    return 0;
}