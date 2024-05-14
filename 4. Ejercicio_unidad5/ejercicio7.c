/*
7. Implementar una función que imprima letras del alfabeto en minúsculas.
*/

#include <stdio.h>
void impresor();

int main(){
    printf("El alfabeto en mayuscula es: "); // Impresion del alfabeto
    impresor(); //Llamado a la función
    return 0;
}

void impresor(){ //Ya que no tiene retorno debe ser un VOID
    int i;
    for (i = 97; i <=122; i++){
        printf("%c. ", i); //Imprimir el alfabeto en minuscula por su codigo ASCII 
    }
}