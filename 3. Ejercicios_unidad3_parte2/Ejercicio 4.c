/*
Realizar un programa que simule el funcionamiento de un cajero automático en el
transcurso de un día, asumiendo que el cajero dispone un saldo inicial de 10 mil pesos.
El cajero debe permitir realizar las siguientes operaciones:
- Extraer dinero.
- Depositar dinero.
- Finalizar, mostrando el saldo disponible en el cajero.
Nota: validar que los valores ingresados sean múltiplos de 10.
*/

#include <stdio.h>

int main(){
    int saldoInicial = 10000;
    int cantidadIngresada;
    int opcion;

    printf("Opciones disponibles: \n");
    printf("1. Extraer dinero \n");
    printf("2. Depositar dinero \n");
    printf("3. Terminar \n");
    printf("Ingrese el numero de la opcion que desea realizar: ");
    scanf("%d", &opcion);

    switch (opcion) 
    {
    case 1: //Extracción
        printf("Ingrese la cantidad que desea extraer : ");
        scanf("%d", &cantidadIngresada); 
            if (cantidadIngresada %10 == 0 && cantidadIngresada <= saldoInicial)
            {
                saldoInicial -= cantidadIngresada;
                printf("Se han extraido: $%d\n", cantidadIngresada);
                printf("El saldo actual es de: $%d\n", saldoInicial);
            }
            else
            {
                printf("Cantidad de dinero no valida (Debe ser multiplo de 10) o el cajero ya no dispone de dinero");
            }
        break;
    case 2: //Deposito
        printf("Ingrese la cantidad que desea depositar : ");
        scanf("%d", &cantidadIngresada); 
            if (cantidadIngresada %10 == 0)
            {
                saldoInicial += cantidadIngresada;
                printf("Se han depositado: $%d\n", cantidadIngresada);
                printf("El saldo actual es de: $%d\n", saldoInicial);
            }
            else
            {
                printf("Cantidad de dinero no valida (Debe ser multiplo de 10)");
            }
            break;
    case 3: //Salida
        printf("Gracias por utilizar esta terminal de cajero automatico. El saldo disponible es de: $%d\n", saldoInicial);
        break;
    default:
        printf("La opcion elegida no es valida");
        break;
    }

    return 0;
}
