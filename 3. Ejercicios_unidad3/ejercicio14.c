/*14. Un almacén de alimentos, atendiendo al monto anual que los clientes compran al almacén, los
clasifica y les otorga descuentos permanentes según la tabla que se muestra a continuación:

a.- Cliente Preferente:
Recibe el 5% de descuento en montos menores a 500.00 pesos
Recibe el 10% de descuento en montos de 500.00 pesos o más
b.- Cliente Especial:
Recibe el 2% de descuento en montos menores a 500.00 pesos
Recibe el 5% de descuento en montos de 500.00 pesos o más
c.- Cliente Ordinario:
No recibe descuento

El programa deberá preguntar la clasificación del cliente y el monto a pagar, posteriormente mostrará
un reporte como el siguiente:
Monto a pagar...................:xxxxx.xx
Descuento.........................:xxxxx.xx
TOTAL con descuento......:xxxxx.xx
*/

#include <stdio.h>
int main(){
    int tipoCliente;
    int monto_a_pagar = 0;

    printf("Ingrese el tipo de cliente: ");
    scanf("%d", &tipoCliente);

    printf("Ingrese el monto a pagar: ");
    scanf("%d", &monto_a_pagar);
    return 0;
}