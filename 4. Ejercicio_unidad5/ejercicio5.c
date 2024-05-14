/*
5. Implementar una función que calcule el promedio de calificaciones ingresadas recibiendo como parámetros
5 notas. Retornar el valor del promedio.
*/
#include <stdio.h>
float receptor();

int main()
{
    float promedio = receptor(); //Llamado a función
    printf("El promedio de las notas es igual a: %.2f\n", promedio); //Impresión del promedio
    return 0;
}

float receptor(){
    int notas[5];
    float acumulador = 0;
    float promedio = 0;
    
    printf("Ingrese las 5 notas:\n"); //Pedido de las notas

    for (int i = 0; i < 5; i++) {
        printf("Ingrese la nota %d: ", i + 1); //Bucle para pedido de las notas
        scanf("%d", &notas[i]);
        acumulador += notas[i];
    }

    promedio = acumulador / 5.0; //Calculo de promedio

    return promedio;
}