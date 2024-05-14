/*
8. Programar en ANSI C la siguiente secuencia de instrucciones de los valores de A, B, C y D. Mostrar el
contenido de las variables entre cada instrucción, a modo de tabla de seguimiento de variables:

A=1
B=4
C=A+B
D=A-B
A=C+2*B
B=C+B
C=A*B
D=B+D
A=D+C
*/

#include <stdio.h>

int main(){

    int a = 1;
    printf("El valor de la instruccion 'A' en la primera operacion es %d\n", a);
    int b = 4;
    printf("El valor de la instruccion 'B' en la segunda operacion es %d\n", b);
    int c = a+b;
    printf("El valor de la instruccion 'A+B' en la tercera operacion es %d\n", c);
    int d = a-b;
    printf("El valor de la instruccion 'A-B' en la cuarta operacion es %d\n", d);
    int e = c + 2*b;
    printf("El valor de la instruccion 'C+2*B' en la quinta operacion es %d\n", e);
    int f = c+b;
    printf("El valor de la instruccion 'C+B' en la sexta operacion es %d\n", f);
    int g = a*b;
    printf("El valor de la instruccion 'A*B' en la septima operacion es %d\n", g);
    int h = b+d;
    printf("El valor de la instruccion 'B+D' en la octava operacion es %d\n", h);
    int i = d+c;
    printf("El valor de la instruccion 'D+C' en la novena operacion es %d\n", i);
    return 0;
}