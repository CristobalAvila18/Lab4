/* El siguiente programa tiene una funcion, que es llegar al numero al revez de un numero previamente definido
 * el cliclo consta de que si el numero es mayor a 0
 * hace lo que esta en la funcion.
 * finalmente imprimimos el resultado.
*/

#include <stdio.h>
int numero_al_revez (int n){
	int resto;
	while (n>0){
		resto= n%10;
		printf("%d", resto);
		n=n-resto;
		n=n/10;
	}
	return n;
		}
	
int main ()
{	int n;
	printf("Ingrese un numero");
	printf("\n");
	scanf("%d",&n);
	numero_al_revez (n);
	return 0;
}

