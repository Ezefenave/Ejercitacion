/*
14. Implementar una función que calcule el área de un círculo con un radio ingresado por el usuario.
*/

#include <stdio.h>
float calculadora(int radio);

int main(){   
    int radio;
    printf("Ingrese el radio: "); //Solicito el radio
    scanf("%d",&radio);

    float area = calculadora(radio); //Solicito el area de la funcion calculadora

    printf("El area del circulo es: %.4f", area); //Imprimo el area calculada con 4 decimales
    return 0;
}

float calculadora(int radio){
    float pi = 3.14159;
    float area;

    area = pi * radio*radio; //Calculo el area usando la formula pi * radio^2 
    return area; // Retorno el area calculada
}
