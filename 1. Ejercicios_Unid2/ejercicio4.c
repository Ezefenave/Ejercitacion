/*
4. Se tienen tres variables enteras A, B y C. Escribir las instrucciones necesarias para intercambiar entre si
sus valores del modo siguiente:

B toma el valor de A
C toma el valor de B
A toma el valor de C
*/

#include <stdio.h>

int main(){

    int A = 1;
    int B = 2;
    int C = 3;

    int b = A;
    printf("El valor de la variable 'B' en la primera instruccion es %d\n", b);
    int c = B;
    printf("El valor de la variable 'C' en la segunda instruccion es %d\n", c);
    int a = C;
    printf("El valor de la variable 'A' en la tercera instruccion es %d\n",a);

    return 0;
}