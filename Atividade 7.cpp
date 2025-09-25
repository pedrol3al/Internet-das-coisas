#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 
   
   float n1,p1, n2,p2, n3,p3, mediaPonderada, pesoTotal , notaPeso;
   
   printf("Insira a primeira nota: ");
   scanf("%f", &n1);
   
	printf("Insira o peso dessa nota: ");
   scanf("%f", &p1);
   
   printf("Insira a segunda nota: ");
   scanf("%f", &n2);
   
   	printf("Insira o peso dessa nota: ");
   scanf("%f", &p2);
   
   printf("Insira a terceira nota: ");
   scanf("%f", &n3);
   
   	printf("Insira o peso dessa nota: ");
   scanf("%f", &p3);
   
   pesoTotal = p1 + p2 + p3;
   
   notaPeso =  (n1 * p1) + (n2 * p2) + (n3 * p3);

   mediaPonderada =   notaPeso / pesoTotal;
   
  printf("A média do aluno é: %.2f\n", mediaPonderada);

    
    return 0;
}
