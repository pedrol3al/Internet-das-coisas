#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 

  	float pe, jarda, milha, polegada;
  	
  	printf("Insira o valor em pés: ");
  	scanf("%f", &pe);
  	
  	jarda = pe / 3;
  	milha = pe / 1760;
  	polegada = pe * 12 ;
  	
  	printf("O valor de %f pés equivalem a %f jardas \n", pe, jarda);
  	printf("O valor de %f pés equivalem a %f milhas \n", pe, milha);
  	printf("O valor de %f pés equivalem a %f polegadas \n", pe, polegada);
  	
  	
    
    return 0;
}
