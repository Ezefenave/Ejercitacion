/*
15. Implementar una función que convierta una letra mayúscula ingresada por el usuario a minúsculas.
*/

#include <stdio.h>
char convertidor(char caracter);

int main(){
    char caracter;

    printf("Ingrese la letra mayuscula que desea convertir a minuscula: ");
    scanf(" %c", &caracter);

    char resultado = convertidor(caracter); // Llama a la función convertidor y guarda el resultado

    printf("La letra minuscula correspondiente a la letra mayuscula ingresada es: %c\n", resultado);

    return 0;
}

char convertidor(char caracter){
if (caracter >= 'A' && caracter <= 'Z') { // Verifica si el caracter es mayúscula
        caracter = caracter + 32; // Convierte la letra mayúscula a minúscula sumando 32 en la tabla ASCII
    }
    return caracter;
}
