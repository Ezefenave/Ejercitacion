/*4. Solicite el ingreso por pantalla de 3 valores, de forma que el primero sea un “short”, el otro un float
y el tercero un char. Mostrar por pantalla de forma que se visualice de la siguiente forma (los valores
23, 23.5 y g son ejemplos de ingresos):*/

#include <stdio.h>

int main(){

    short corto;
    float flotante;
    char caracter;

    printf("Ingrese un tipo de dato short: ");
    scanf("%hd", &corto);

    printf("Ingrese un tipo de dato float: ");
    scanf("%f", &flotante);

    printf("Ingrese un tipo de dato char: ");
    scanf(" %c", &caracter); //El espacio es necesario para que no me tome el dato " " como caracter

    printf("\n----------------------->Entero corto: %hd --- Num Float: %.1f --- Simbolo char: %c <-----------------------",corto, flotante, caracter);
    

    return 0;
}