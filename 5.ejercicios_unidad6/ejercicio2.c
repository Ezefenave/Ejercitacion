/*
2. Modifique el ejercicio anterior, para mostrar los valores que sean mayores que el promedio.
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

    /// Calculo el promedio de esta manera ya que el tamaño del vector es fijo
    promedio = acumulador / tam; 
    printf("El promedio de los valores dentro del vector es igual a: %.2f\n", promedio);

    //Imprimo los numeros mayores al promedio que se encuentran en el vector
    printf("Los numeros pares dentro del vector que son mayores al promedio son:\n");
    for(int i = 0; i < tam; i++){ 
        if(vectorPar[i] > promedio) { 
            printf("%d,", vectorPar[i]); // Muestra el valor si es mayor que el promedio
        }
    }
    return 0;
}