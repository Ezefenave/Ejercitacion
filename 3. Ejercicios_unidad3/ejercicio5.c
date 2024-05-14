/*Determinar el precio de un billete de ida y vuelta en tren conociendo la distancia a recorrer y
sabiendo que si el número de días de estancia es superior a siete y la distancia superior a 800 km. El
billete tiene una reducción del 30%. El precio por kilómetro es de $35,5.*/

#include <stdio.h>

int main(){

    float precioBillete;
    int dias;
    float distancia;
    float precioKm = 35.5;

    printf("Ingrese la distancia a recorrer en km: ");
    scanf("%f", &distancia);
                                                            //Ingreso de datos
    printf("Ingrese la cantidad de dias de estancia: ");
    scanf("%d", &dias);

    if(dias > 7 && distancia > 800){//Condiciones que se deben cumplir para aplicar descuento
        precioBillete = (distancia * precioKm) * 0.70;
    }else{
        precioBillete = distancia * precioKm;
    }
    printf("----------------------------------------------------\n");
    printf("El precio del billete es de: $%.2f", precioBillete);

    return 0;
}