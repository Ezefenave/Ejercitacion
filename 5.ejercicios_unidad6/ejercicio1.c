/*
1. Desarrollar un programa que llene un vector con los 30 primeros números pares a partir de un número
ingresado por el usuario. Al finalizar mostrar el promedio de los valores.
*/

#include <stdio.h>

#define tam 4

int main (){
int vectorPar [tam];
int acumulador = 0;
float promedio;
int contador;

    for(int i = 0; i < tam; i++){
        printf("Ingrese un numero para ingresar en el vector (recuerda que solo se almacenaran los numeros pares): "); //Solicito los numeros al usuario
        scanf("%d",&vectorPar[i]); // Ingreso los numeros en el vector

        if(vectorPar[i] % 2 == 0){ // Compruebo si el número ingresado es par o no
            contador++; 
            acumulador += vectorPar[i]; // Si es par lo sumo al acumulador para luego calcular el promedio
        }   
    }  

    promedio = (float)acumulador / contador; //De esta manera calculo el promedio
    printf("El promedio de los valores dentro del vector es igual a: %.2f", promedio);
}