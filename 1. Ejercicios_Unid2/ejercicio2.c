/*
2. Programe en ANSI C e indique por pantalla los valores que obtienen cada una de las variables en la
siguiente secuencia de instrucciones:
A=3,8
B=20,77
C=A+B
B=A+B
A=B
*/

#include <stdio.h>

int main(){

    float a = 3.8;
    printf("El valor de la variable 'A' en la primera instruccion es %f\n", a);
    float b = 20.77;
    printf("El valor de la variable 'B' en la segunda instruccion es %f\n", b);
    float c = a + b;
    printf("El valor de la variable 'C' en la tercera instruccion es %f\n", c);
    b = a + b;
    printf("El valor de la variable 'B' en la cuarta instruccion es %f\n", b);
    a = b;
    printf("El valor de la variable 'A' en la quinta instruccion es %f\n" , a);

    return 0;
}