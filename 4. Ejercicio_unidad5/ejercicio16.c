/*
16. (DIFICIL) Implementar una función que imprima los números perfectos menores que un límite especificado
hasta el cero por el usuario.
NOTA:
Un número perfecto es un número entero positivo que es igual a la suma de sus divisores propios positivos
(excluyendo al propio número). En otras palabras, la suma de los divisores positivos de un número perfecto
(excluyendo al número en sí mismo) es igual al propio número.
Por ejemplo, el primer número perfecto es 6. Sus divisores propios positivos son 1, 2 y 3, y su suma es 1 + 2
+ 3 = 6, que es igual al número mismo.
*/

#include <stdio.h>
int generador(int);

int main(){
    int limite, acumulador;
    
    printf("Ingrese el limite: ");
    scanf ("%d", &limite);

    acumulador = generador(limite); //Llamado a funcion

    printf("El numero perfecto segun ese limite es igual a: %d", acumulador);

    return 0;
}

int generador(int num){ 
    int acumulador = 0; //Sumo los divisores en el acumulador
    for (int i = 1; i <= num / 2; i++) { //Calculo si el numero perfecto iterando por los divisores
        if (num % i == 0) { //Si el resto que da ese numero es 0 lo almaceno 
            acumulador += i;
        }
    }
    return (acumulador);
}