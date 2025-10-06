#include <stdio.h>
#include <locale.h>
#include "C:\Users\pedro_g_costa\Documents\GitHub\Internet-das-coisas\rotinas.h"

int main()
{
	setlocale(LC_ALL,"portuguese");
	int num1, num2, res;
	sub_rotina1();
	sub_rotina2();
	
	printf("\nDigite um número: ");
	scanf("%d%*c", &num1);	
	printf("\nDigite outro numero: ");
	scanf("%d%*c", &num2);	
	res = sub_rotina3(num1, num2);
	printf("resultado = %d \n", res);
	getchar();
	return 0;
}