#include <stdio.h>
#include <stdlib.h>


int main(){
	int m;
	 int *p;
	m = 10;
	p = &m;
	
    printf("Valor de la variable P: %d \n", *p);
    printf("Direccion de memoria que apunta el puntero P: %d\n", p);
    printf("La direccion de memoria de la variable M: %d\n", &m);
    printf("La direccion de memoria del puntero P: %d\n", &p);
    printf("Tamaño de la memoria M: %d\n", sizeof(m));

}