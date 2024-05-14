/*
4. Implementar una función reciba un numero entero positivo e imprima todos sus valores desde ese
parámetro al cero.
Ejemplo si ingresa el 5 imprime (5, 4, 3, 2, 1, 0);
*/

#include <stdio.h>
int receptor();

int main(){
    int numero = 0;

    numero = receptor();
    
    printf("El numero desciende hasta el 0 de la siguiente manera: ");

    int i;
    for (i = numero; i >= 0; i--){
        printf("%d, ", i);
    }
    return 0;
}

int receptor(){
    int numero;

    printf("Ingrese un numero: "); //Pedido al usuario del número
    scanf("%d", &numero);

    return numero; //Retorno del numero
}