#include<stdio.h>
#include<stdlib.h>

int funcionCuadrado(int x);


int main()
{
int n, cuadrado, v, a, b;

printf("Ingrese un numero al que quiera calcular su cuadrado: ");
scanf("%d", &n);

cuadrado = funcionCuadrado(n);

printf("\nCuadrado de %d es: %d", n, cuadrado);

printf("\n\nIngrese el valor de a: ");
scanf("%d", &a);

printf("Ingrese el valor de b: ");
scanf("%d", &b);


return 0;    
}
//Apartado a)
int funcionCuadrado(int x)
{
    //Apartado c)
    printf("\nLa direccion de memoria de la variable es: %d", &x);
    printf("\nEl contenido de la variable es: %d",x);
    int c;
    c = x * x;
    return c;
}

