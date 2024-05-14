/*10. Una tienda que vende pantalones al por menor y al por mayor con las siguientes tarifas, si se
compran menos de 5 pantalones estos se cobran a su precio normal, en caso de que se compren 5 o
más pero menos de 12, se les descuenta el 15% en cada pantalón, si se compran más de 12 se les
descuenta 30% en cada pantalón.
Escriba un programa que pida como dato de entrada el número de pantalones que se desean comprar y
con ello imprima el total a pagar por la compra hecha.*/

#include <stdio.h>

int main(){
    int cantidadPantalones;
    float precioPantalones = 10000; //Como el precio no esta indicado en el enunciado le puse 10000 
    float totalPagar;
    
    printf("Ingrese la cantidad de pantalones que desea comprar: ");
    scanf("%d", &cantidadPantalones);

    printf("---------------------------------------------\n");

    if (cantidadPantalones < 5){
        totalPagar = cantidadPantalones * precioPantalones;
        printf("El total a pagar es: $%.2f", totalPagar);
    }else if (cantidadPantalones == 5 || cantidadPantalones < 12){
        totalPagar = (cantidadPantalones * precioPantalones) * 0.85;
        printf("El total a pagar es: $%.2f", totalPagar);
    }else{
        totalPagar = (cantidadPantalones*precioPantalones) * 0.70;
        printf("El total a pagar es: $%.2f", totalPagar);
    }
}