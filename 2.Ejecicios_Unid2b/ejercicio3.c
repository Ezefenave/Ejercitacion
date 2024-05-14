/*3. Programe en ANSI C un sistema que solicite una letra por teclado y devuelva su número ASCII
dividido 3.*/

#include <stdio.h>

int main(){

    char letra;

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    printf("El codigo ASCII de la letra %c es: %.2f\n", letra, (float)letra/3);

    printf("Conversor de caracteres a su codigo ASCII dividido por 3 \n");

    return 0;
}