#include <stdio.h>
/* El siguiente algoritmo muestra el porque para que sea justo la fraccion de dinero que Antonio
 * tiene que entregarle a sus dos amigos por comer 8 huevos revueltos entre los 3.
 * 
 *por falta de tiempo y por conocimiento hice la funcion de una manera bastante corta y sencilla
 * no volvera a ocurrir la proxima vez
*/	
void repartir_huevo (){
	float j=5,m=3,x,pm,pj,dm,dj;
	x=((j+m)/3);
	pm=(m-x);
	pj=(j-x);
	dm=((pm*10)+1);
	dj=((pj*10)+1);

	printf("Juanito puso 5 huevos, Manuel 3 huevos y Antonio 0 huevos");
	printf("\n");
	printf("llegaron al Sacuerdo de que Antonio pagara 80 pesos por los 8 huevos");
	printf("\n");
	printf("pero para que que todo sea justo, Antonio tiene pagar lo que no comieron los otros 2 amigos");
	printf("\n");
	
	printf("Juanito recibe: %1.f pesos", dj);
	printf("\n");
	printf("Manuel recibe: %1.f pesos", dm);
	printf("\n");
	printf("Esta, seria la medida mas justa para los 3 amigos, ya que Antonio solo pagaria por los huevos que comió");
	printf("\n");
	
}
	
int main()
{
	repartir_huevo ();
	return 0;
}

