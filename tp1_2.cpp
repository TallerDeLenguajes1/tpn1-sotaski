#include <stdio.h>
#include <stdlib.h>

// ----------------trabajo practino N-1--------------------------

int cuadrado(int n); //PUNTO A
void mostrarCuadrado(int n);//PUNTO B
void invertir(int a);// PUNTO D
void Menor_A_Mayor(int a);//PUNTO E

int main(){
	// ---------------PUNTO A-----------------
	int num, cuad, num2;
	printf("Ingrese el numero que desea obtener su cuadrado: \n");
	scanf("%d", &num);

	printf("El contenido de la variable es de: %d\n", num);//PUNTO C 
	printf("La dirrecion de la variable es de: %d\n\n", &num);//PUNTO C

	cuad = cuadrado(num);
	printf("El cuadrado de %d es: %d\n\n\n", num, cuad);

	//----------------PUNTO B------------------
	printf("Ingrese un numero: \n");
    scanf("%d", &num2);

    printf("Variable num2 es: %d\n", num2);//PUNTO C
	printf("La dirrecion de la variable m2: %d\n\n", &num2);//PUNTO C

    mostrarCuadrado(num2);

    //----------------PUNTO D------------------
    int a;
    printf("Ingrese un numero(dos digitos) para invertir: \n\n");
    scanf("%d", &a);
    invertir(a);

    //----------------PUNTO E------------------
    int numO;
    printf("ingrese un numero de 2 digitos que desee ordenar de menor a mayor: \n");
    scanf("%d", &numO);
    Menor_A_Mayor(numO);
}

int cuadrado(int n){
	return n * n;
}

void mostrarCuadrado(int m){
	int total;
	total = cuadrado(m);
	printf("El numero %d al cuadrado  es: %d\n\n\n", m, total);
}

void invertir(int a){
	int invert, resto, cosc;
	resto = (a % 10);
	cosc = (a / 10);
	invert = (resto * 10) + cosc;
	printf("El mumero %d invertido es: %d\n", a, invert);
}

void Menor_A_Mayor(int a){
	int numOrdenado, resto, cosc;
	resto = (a % 10);
	cosc = (a / 10);
	if(resto <= cosc){
		numOrdenado = (resto * 10) + cosc;
	}
	else{
		numOrdenado = (cosc * 10) +resto;
	}
	printf("El numero %d ordenado es: %d\n", a, numOrdenado);
}