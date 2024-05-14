/*6. Realizar un programa que convierta un número dado en segundos en el equivalente de
minutos y segundos.*/

#include <stdio.h>

int main(){
    int segundos;
    int minutos;
    int segundosRestantes;

    printf("Ingrese el numero de segundos: "); //Ingreso de datos
    scanf("%d",&segundos);

    minutos = segundos / 60;     //Conversion a minutos

    segundosRestantes = segundos % 60;  //Conversion a segundos restantes

    printf("El numero ingresado corresponde a : %d minutos y %d segundos\n", minutos, segundosRestantes); //Impresion del mensaje

    return 0;
}