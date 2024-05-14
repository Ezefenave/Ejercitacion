/*
6. Programe en ANSI C para poder imprimir el contenido VALOR después de la ejecución de la siguiente
operación (considere tipo de la variable requerida en cada caso):
VALOR=Y*X - Z

a) Y=70000, X=55000, Z=5
b) X=3.0, Y=2,5, Z=1.2
c) X= ́a ́, Y=2, Z=’A’
*/

#include <stdio.h>

int main(){
    int Y1 =70000;
    int X1 =55000;
    int Z1 = 5;
    int valor = Y1*X1 - Z1;
    printf("El primer valor de VALOR es: %d\n", valor);

    float X2 =3.0;
    float Y2 =2.5;
    float Z2 = 1.2;
    float valor2 = Y2*X2 - Z2;
    printf("El segundo valor de VALOR es: %f\n", valor2);

    char X3 = 'á';
    int Y3 = 2;
    char Z3 = 'A';
    int valor3 = Y3*X3 - Z3;
    printf("El primer valor de VALOR es: %d\n", valor3);

    return 0;
}