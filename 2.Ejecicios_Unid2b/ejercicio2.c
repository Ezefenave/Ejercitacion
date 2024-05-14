/*2. Programe un algoritmo que sume la cantidad de bytes que ocupa un tipo de dato entero y un char
en memoria, y luego muestre su división por 2.*/

#include <stdio.h>

int main(){

    int entero;
    char caracter;
    float suma;
    float division;
    float tamano_entero;
    float tamano_caracter;

    tamano_entero = (float)sizeof(entero);
    tamano_caracter = (float)sizeof(caracter);

    suma = tamano_entero + tamano_caracter;

    printf("La suma de la cantidad de bytes entre un tipo de dato entero y un tipo de dato caracter es igual a: %.2f bytes\n", suma);

    division = suma / 2;

    printf("La suma de la cantidad de bytes entre un tipo de dato entero y un tipo de dato caracter dividida en 2 es igual a: %.2f bytes\n", division);

    return 0;
}