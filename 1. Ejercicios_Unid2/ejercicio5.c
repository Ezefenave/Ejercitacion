/*
5.Programe en ANSI C y realice en papel el seguimiento de los valores de las variables (tabla de variables).

Entero: X,Y,Z
X=15
Y=30
Z=Y-X
Mostrar(X,Y)
Mostrar(Z)
*/

#include <stdio.h>

int main(){
    int X = 15;
    int Y = 30;
    int Z = Y-X;

    printf("El valor de X, Y es: %d ,%d\n", X, Y);
    printf("El valor de de Z es: %d\n", Z);


    return 0;
}