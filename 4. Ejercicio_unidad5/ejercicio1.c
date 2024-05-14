/*
1. Implementar una función que calcule la suma de 4 números (recibidos como parámetros) y evaluar si la
suma es mayor que 100 retornar el valor total sino retornar cero. Imprimir el valor retornado.
*/

#include <stdio.h>
int sumaDeCuatroNumeros(); //Prototipo de la funcion

int main(){
    int resultadoSuma;
    resultadoSuma = sumaDeCuatroNumeros();
    printf("El resultado de la suma de los cuatros numeros es: %d",resultadoSuma );
    return 0;
}

int sumaDeCuatroNumeros() {
    int numero1, numero2, numero3, numero4; 
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &numero3);

    printf("Ingrese el cuarto numero: ");
    scanf("%d", &numero4);
    
    int total = numero1 + numero2 + numero3 + numero4; // Calcular la suma
    return total; // Retornar el resultado de la suma
}