/*
8. Implementar una función que genere una serie de números primos hasta un límite especificado por el
usuario.
*/
#include <stdio.h>
int esPrimo();

int main()
{
    int limite;

    printf("Ingrese el limite: ");
    scanf ("%d", &limite);

    printf("Los numeros primos generados segun el limite ingresado son: ");
    for (int i = 2; i <= limite; i++) {
        if (esPrimo(i)) {
            printf("%d ", i); // Imprimir el número si es primo
        }
    }
    return 0;
}

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0; // Si el número es menor o igual a 1, no es primo
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Si el número es divisible por algún número en el rango, no es primo
        }
    }
    return 1; // Si no se encontraron divisores, el número es primo

    //En esta caso se utliza 0 y 1 haciendo referencia a los booleanos
}


