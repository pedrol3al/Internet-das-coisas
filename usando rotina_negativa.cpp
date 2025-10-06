#include <stdio.h>
#include <locale.h>
#include "C:\Users\pedro_g_costa\Documents\GitHub\Internet-das-coisas\rotina_atividades.h"

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num, result;
	
	printf("Pedro Gabriel Leal Costa\n\n");
	
		printf("Insira um numero:");
		scanf("%d", &num);
		
		result = negativo_positivo(num);

	
}