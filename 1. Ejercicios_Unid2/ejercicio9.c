/*
9. Programe en ANSI C la siguiente secuencia de instrucciones:

Inicio
Leer Número de horas trabajadas
Leer Tarifa (costo por hora)
Leer tasa de impuesto (porcentaje)
Calcular Paga Bruta = Número de horas trabajadas * Tarifa
Calcular Impuestos = Paga Bruta * Tasa
Calcular Pago Neta = Paga Bruta – Impuestos
Visualizar Paga Bruta
Visualizar Impuestos
Visualizar Pago Neta
Fin
*/

#include <stdio.h>

int main(){
    
    float horastrabajadas;
    float tarifa;
    float tasaiimpues;
    float pagabruta;
    float impuestosaplicados;
    float pagoneto;

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf ("%f",&horastrabajadas);
    
    printf("Ingrese el valor de la tarifa: $ ");
    scanf ("%f",&tarifa);
    
    printf("Ingrese el valor de la tasa de impuestos:  ");
    scanf ("%f",&tasaiimpues);

    printf("----------------------------------------------------------------\n");
    
    pagabruta = horastrabajadas * tarifa;
    printf("El valor de la paga bruta es: $ %2.f\n", pagabruta);

    impuestosaplicados = (pagabruta * tasaiimpues) / 100;
    printf("El valor de los impuestos aplicados es de: $ %2.f\n", impuestosaplicados);
    
    pagoneto = pagabruta-impuestosaplicados;
    printf("El valor del pago neto es de : $%2.f", pagoneto);

    return 0;
}