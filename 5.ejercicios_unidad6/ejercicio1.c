/*
1. Desarrollar un programa que llene un vector con los 30 primeros números pares a partir de un número
ingresado por el usuario. Al finalizar mostrar el promedio de los valores.
*/

#include <stdio.h>
#define tam 30

int main (){
    //Declaro las variables
int vectorPar [tam];
int numeroInicial;
float acumulador = 0;
float promedio;

    printf("Ingrese el numero que deseas poner como limite: "); //Solicito el número al usuario
    scanf("%d",&numeroInicial); 

    //Si el numero que me ingresa es impar le sumo 1 para que se incremente de a numeros pares
    if (numeroInicial % 2 != 0) { 
        numeroInicial++;
    }
    //Genero 30 numeros para llenar el vector
    for(int i = 0; i <tam; i++){
        vectorPar[i] = numeroInicial + 2 * i; //De esta manera logro que se almacenen en el vector los numeros pares. 
        acumulador += vectorPar[i]; // Sumo los numeros generados al acumulador
    }

    printf("El vector queda de la siguiente manera:\n");
    for(int i = 0; i < tam; i++){ //Imprimo el vector 
        printf("%d ", vectorPar[i]);
    }

    // Calculo el promedio de esta manera ya que el tamaño del vector es fijo
    promedio = acumulador / tam; 
    printf("\nEl promedio de los valores dentro del vector es igual a: %.2f", promedio);
    
    return 0;
}