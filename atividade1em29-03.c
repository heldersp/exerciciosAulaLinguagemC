#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*implementar um algoritmo que leia um numoro imprima a sua tabuada*/

int main(int argc, char *argv[]) 
{
	int x, entrada;
	
	printf("Digite um numero de 1 a 10: ", entrada); //solicita entrada ao usuário
	scanf("%i", &entrada); //grava a entrada fornecida pelo usuário
	
	for(x=0; x<=10; x++) 
		{
			printf("%ix%i = %i\n", entrada, x, x*entrada); //imprime a tabuada do numero de entrada
		}
	
	return 0;
}
