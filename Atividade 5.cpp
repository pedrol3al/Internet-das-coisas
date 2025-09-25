#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 
   
   int num1, num2, num3, num4, valorSoma;
   
   printf("Insira o primeiro valor a ser somado: ");
   scanf("%d", &num1);
   
   printf("Insira o segundo valor a ser somado: ");
   scanf("%d", &num2);
   
   printf("Insira o terceiro valor a ser somado: ");
   scanf("%d", &num3);
   
   printf("Insira o quarto valor a ser somado: ");
   scanf("%d", &num4);
  
   valorSoma = num1 + num2 + num3 +num4;
   
   printf("A soma dos 4 valores são: %d", valorSoma);
    
    return 0;
}
