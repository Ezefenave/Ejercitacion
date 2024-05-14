/*1. Realice un programa que muestre por pantalla el tamaño en bytes de los tipos de datos “int”,
“short”, “long” y “char”.*/

#include <stdio.h>

int main(){

    int entero;
    short numeroCorto;
    long numeroLargo;
    char caracter;

    printf("El size de bytes del tipo de dato int es de: %u bytes \n", sizeof(entero));
    printf("El size de bytes del tipo de dato short es de: %u bytes \n", sizeof(numeroCorto)); 
    printf("El size de bytes del tipo de dato long es de: %u bytes \n", sizeof(numeroLargo));
    printf("El size de bytes del tipo de dato char es de: %u bytes \n", sizeof(caracter));
    
    return 0;
}