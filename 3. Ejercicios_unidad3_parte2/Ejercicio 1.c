/* 1. Realizar un programa que lea un importe bruto y calcule su importe neto, si es mayor de 15.000 se le aplicará un 16% de impuestos, en caso contrario se le aplicará un 10%. */
#include <stdio.h>

int main() {
    int importeBruto;
    float importeNeto;

    printf("Ingrese su importe en bruto: ");
    scanf("%d", &importeBruto);

    if (importeBruto >= 15000){
        printf("Se le aplicará un impuesto del 16%%.\n");
        importeNeto = importeBruto * 0.84; // 100% - 16% = 84%
        printf("Al aplicarse el impuesto del 16%%, el importe neto queda en: %.2f\n", importeNeto);
    } else {
        printf("Se le aplicará un impuesto del 10%%.\n");
        importeNeto = importeBruto * 0.90; // 100% - 10% = 90%
        printf("Al aplicarse el impuesto del 10%%, el importe neto queda en: %.2f\n", importeNeto);
    }
    return 0;
}


