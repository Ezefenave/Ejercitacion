/*
10. Implementar una función que valide un número ingresado si es par o impar.
*/

#include <stdio.h>
void validador(int numero);

int main(){
    int numero;
    printf("Ingrese el numero que desea saber si es par o impar: "); 
    scanf("%d",&numero);

    validador(numero); //Llamado a función
    return 0;
}

void validador(int numero){  //Función validadora
    if (numero / 2 == 0){
        printf("El numero ingresado es impar");
    }else{
        printf("El numero ingresado es par");
    }
}
