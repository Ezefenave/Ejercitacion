/*
13. Implementar una función que encuentre el máximo común divisor (MCD) de dos números enteros
ingresados por el usuario.
*/

#include <stdio.h>
int calcularMCD(int, int); //Prototipo de la función con los parametros que voy a utilizar

int main(){
    int n1, n2;
    int mcd;

    printf("Ingrese el primer numero: ");
    scanf("%d",&n1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);

    mcd = calcularMCD(n1, n2); //Llamado a función con los parametros de la funcion CalcularMCD

    printf("El MCD de %d y %d es: %d", n1, n2,mcd);

    return 0;
}

int calcularMCD(int num1, int num2) {
    int mcd = 1;
    int menor = (num1 < num2) ? num1 : num2; // Desconpongo el número hasta el mas chico
    
    for (int i = 1; i <= menor; ++i) {
        if (num1 % i == 0 && num2 % i == 0) { // Si i es divisor común de num1 y num2, cambio el mcd
            mcd = i;
        }
    }    
    return mcd;
}
