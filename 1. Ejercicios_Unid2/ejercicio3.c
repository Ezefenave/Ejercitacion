/*
3. Programe en ANSI C e indique por pantalla los valores que obtienen cada una de las variables en la
siguiente secuencia de instrucciones:
A=’y’
B=’K’
A=B
B=A-B
*/

#include <stdio.h>

int main(){

    char a = 'y';
    printf("El valor de la variable 'A' en la primera instruccion es %c\n", a);
    char b = 'k';
    printf("El valor de la variable 'B' en la segunda instruccion es %c\n", b);
    a = b;
    printf("El valor de la variable 'A' en la tercera instruccion es %c\n", a);
    b = a-b;
    printf("El valor de la variable 'B' en la cuarta instruccion es %c\n",b);

    return 0;
}