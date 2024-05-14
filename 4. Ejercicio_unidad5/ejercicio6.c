/*
6. Implementar una función que reciba un carácter y muestre su valor en ASCII.
*/

#include <stdio.h>
char convertidor();

int main()
{
    char caracter;
    caracter = convertidor();

    printf("El valor ASCII del numero ingresado es: %d ", caracter);
    return 0;
}

char convertidor(){
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);

    return caracter;
}
