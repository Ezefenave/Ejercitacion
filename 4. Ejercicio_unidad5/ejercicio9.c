/*
9. Implementar una función que calcule el interés compuesto para una cantidad de dinero, con tasas y
períodos por mes.
*/

#include <stdio.h>
float calculador(float, float, float);

int main()
{
    float cantidadDinero;
    float tasas;
    int periodoMes;

    printf("Ingrese el dinero inicial: ");
    scanf("%lf", &cantidadDinero);
    printf("Ingrese la tasa de interes: ");
    scanf("%lf", &tasas);
    printf("Ingrese el perdiodo por mes: ");
    scanf("%d", &periodoMes);


    return 0;
}

float calculador(float cantidadDinero, float tasas, float periodoMes){
    float total;

    total = cantidadDinero;
    
}
