/*8. Escriba un programa que solicite dos números, uno que represente el precio de un tipo de producto y
otro que represente el número de productos que se va a adquirir, y muestre el costo total teniendo en
cuenta que hay que aplicar un IVA del 21%.*/

#include <stdio.h>

int main(){

    float precioProducto;
    int cantidadProductos;
    float precioCobro;

    printf("Ingrese el precio del producto que desea adquirir: ");
    scanf("%f", &precioProducto);

    printf("Ingrese la cantidad de productos que desea adquirir : ");
    scanf("%d", &cantidadProductos);

    precioCobro = precioProducto * cantidadProductos * 1.21;

    printf("El costo total de su compra es de: %.2f", precioCobro);

    return 0;
}