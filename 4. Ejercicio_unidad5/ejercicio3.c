/*
3. Implementar una función que imprima las letras del alfabeto en mayúsculas (Ver tabla ASCII).
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
    for (i = 65; i <=90; i++){
        printf("%c. ", i); //Imprimir el alfabeto en mayuscula por su codigo ASCII 
    }
}

