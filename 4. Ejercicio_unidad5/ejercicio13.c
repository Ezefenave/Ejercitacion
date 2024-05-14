/*
13. Implementar una función que encuentre el máximo común divisor (MCD) de dos números enteros
ingresados por el usuario.
*/

#include <stdio.h>
void buscador();

int main(){
    int n1, n2;

    printf("Ingrese el primer numero: ");
    scanf("%d",&n1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);

    printf("El MCD de %d y %d es: %d\n", n1, n2);

    return 0;
}

void buscador();
