#include <stdio.h>

int main(){
	
	int M[2][2], R[2][2];
	int l, c, maior;
	
	printf("Pedro Gabriel Leal Costa");                              
	
	printf("Digite os valores da matriz 2x2: \n");
	for(l = 0; l < 2;l++){
		for(c = 0; c < 2; c++){
			printf("M[%d][%d]: ", l,c);
			scanf("%d", &M[l][c]);
		}
	}
	
	maior = M[0][0];
	
for(l = 0; l < 2;l++){
		for(c = 0; c < 2; c++){
			if(M[l][c] > maior){
				maior = M[l][c];
			}	
		}
	}
	for(l = 0; l < 2;l++){
		for(c = 0; c < 2; c++){
		R[l][c] = M[l][c] * maior;
		}
	}
	
	for(l = 0; l < 2;l++){
		for(c = 0; c < 2; c++){
			printf("|%d|", R[l][c]);
			}
			printf("\n");
		}
		return 0;
}