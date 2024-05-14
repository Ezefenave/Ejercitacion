/*12. Para determinar si un año es bisiesto o no debe de cumplir la siguiente regla: Ser divisible entre 4 y
no divisible entre 100 o bien divisible entre 400.
Escriba un programa que pida como entrada el año e imprima si el año es bisiesto o no.*/

#include <stdio.h>

int main(){

    int anoIngresado = 0;

    printf("Ingrese el year que desea saber si fue bisiesto o no: ");
    scanf("%d", &anoIngresado);

    if(anoIngresado % 4 == 0 && anoIngresado % 100 != 0){
        printf("El year %d es bisiesto", anoIngresado);
    }else{
        printf("El year %d no es bisiesto", anoIngresado);
    }

    return 0;
}