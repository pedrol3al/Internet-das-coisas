#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 
   
   float n1, n2, n3, media;
   
   printf("Insira a primeira nota: ");
   scanf("%f", &n1);
   
   printf("Insira a segunda nota: ");
   scanf("%f", &n2);
   
   printf("Insira a terceira nota: ");
   scanf("%f", &n3);

   media = (n1 + n2 +n3) / 3;
   
  printf("A média dos alunos é: %.2f\n", media);

    
    return 0;
}
