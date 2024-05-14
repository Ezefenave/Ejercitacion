/*
1. Programe en ANSI C e indique por pantalla los valores que obtienen cada una de las variables en la
siguiente secuencia de instrucciones:
A=5
B=A+6
A=A+1
B=A-5
*/

#include <stdio.h>

int main(){

    int a = 5;
    printf("El valor de la variable 'A' en la primera instruccion es %d\n", a);
    int b = a + 6;
    printf("El valor de la variable 'B' en la segunda instruccion es %d\n", b);
    a = a+1;
    printf("El valor de la variable 'A' en la tercera instruccion es %d\n", a);
    b = a-5;
    printf("El valor de la variable 'B' en la cuarta instruccion es %d\n", b);

    return 0;
}