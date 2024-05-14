/*
12. Implementar una función que verifique si un carácter ingresado por el usuario esta antes o después del 60
en el codigo ASCII.
*/

#include <stdio.h>
void validador(char caracter);

int main(){
    char caracter;

    printf("Ingrese el caracter que desea conocer si se encuentra antes o despues del 60 en el codigo ASCCI: ");
    scanf(" %c",&caracter);

    validador(caracter); // Llamado a la función

    return 0;
}

void validador(char caracter){
    int valorAscii = caracter;
    if (valorAscii < 60) {
        printf("El caracter '%c' esta antes del 60 en el codigo ASCII.\n", caracter);
    } else if (valorAscii == 60) {
        printf("El caracter '%c' es igual a 60 en el codigo ASCII.\n", caracter);
    } else {
        printf("El caracter '%c' esta despues del 60 en el codigo ASCII.\n", caracter);
    }
}