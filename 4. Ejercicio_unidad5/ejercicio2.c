/*
2. Implementar una función que reciba 1 y 0 solamente.
➔ Si es 1 imprima del 15 a 50
➔ Si es 0 imprima del 51 al 100.
*/

#include <stdio.h>
int receptor(); //Prototipo de la función de la función

int main()
{
    int numero = 0;
    numero = receptor(); //Llamado de la función

        if (numero == 0){
            int i;
            for (i = 15; i <= 50; i++) {
                printf("%d ", i); // Imprimir del 15 al 50
            }
        }else if(numero == 1){
            int i;
            for (i = 51; i <= 100; i++) {
                printf("%d ", i); // Imprimir del 51 al 100
        }
        }else{
            printf("El numero ingresado debe ser 0 o 1"); //
            }

    return 0;
}

int receptor(){
    int numero;

    printf("Ingrese un numero 0 o 1: ");
    scanf("%d", &numero);

    return numero; //Retorno del numero
}