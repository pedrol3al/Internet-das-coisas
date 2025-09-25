#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    float deposito, taxa, rendimento, posRend;
    
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    
    taxa = taxa / 100; // converte de % para decimal
    
    rendimento = deposito * taxa;       // só o ganho
    posRend = deposito + rendimento;    // depósito + ganho
    
    printf("O valor do rendimento é: R$ %.2f\n", rendimento );
    printf("O valor total após o rendimento é: R$ %.2f\n", posRend);
    
    return 0;
}
