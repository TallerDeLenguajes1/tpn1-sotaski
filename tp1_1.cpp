#include <stdio.h>
#include <stdlib.h>

// ----------------trabajo practino N-1--------------------------


int main(){
	int m;
	 int *p;
	m = 10;
	p = &m;
	
    printf("Valor de la variable P: %d \n", *p);// PUNTO a
    printf("Direccion de memoria que apunta el puntero P: %d\n", p);// PUNTO b
    printf("La direccion de memoria de la variable M: %d\n", &m);// PUNTO c
    printf("La direccion de memoria del puntero P: %d\n", &p);// PUNTO d
    printf("Tamaño de la memoria M: %d\n", sizeof(m));// PUNTO e

}