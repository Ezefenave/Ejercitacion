/*7. Realizar un programa para convertir de metros a kilómetros, centímetros y decímetros, sabiendo que 1km=10000dm y 1dm=10cm.*/

#include <stdio.h>

int main(){

    float metros;
    float kms;
    float dms;
    float cms;

    printf("Ingrese la cantidad de metros: ");
    scanf("%f", &metros);

    kms = (metros/1000);
    dms = (metros*10);
    cms = (metros*100);

    printf("La cantidad de metros ingresadas coresponde a: %.2f kilometros, %.2f decimetros y %.2f centimetros", kms, dms,cms);
}