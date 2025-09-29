#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    
  int alunos = 1;
  
  float n1, n2, media, somaNota;
  
  	while (alunos < 7){
  		
  			printf("Insira a primeira nota do %d° aluno: ", alunos);
  			scanf("%f", &n1);
  			
  			printf("Insira a segunda nota do %d° aluno: ", alunos);
  			scanf("%f", &n2);
  			
  			alunos++;
  			
  			media = (n1 + n2) / 2;
  			
  			if(media <= 3){
  				printf("Aluno reprovado! Media: %.2f\n\n", media);
			  }else if(media < 7 ){
			  		printf("Aluno em exame! Media: %.2f\n\n", media);
			  }else{
			  	printf("Aluno aprovado! Media: %.2f\n\n", media);
			  }
			  somaNota += media / 6;
	  }
	  
	  
	  
	  printf("\nMedia geral: %.2f",somaNota);
}
   