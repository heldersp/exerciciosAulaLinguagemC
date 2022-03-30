#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*implementar um algoritmo que imprima a tabuada dos numeros pares de 0 ao 10*/

int main(int argc, char *argv[]) 
{
	int x, y;
	
	for(x=0; x<=10; x++) //primeiro laço indicando qual tabuada vai ser apresentada
		{
			printf("\nTabuada do %i:\n\n", x);
			for(y=0; y<=10; y++) //segundo laço indicando qual intervalo das tabuadas apresentadas
			{
				if(x % 2 ==0)
				{
					printf("%ix%i = %i\n", x, y, x*y);
				}
				
			}
			
		}
	
	return 0;
}
