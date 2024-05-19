/*
5. Realizar un programa que maneje una matriz de enteros a través de un menú con seis opciones:
a- Añadir un elemento. (Verificar que la matriz no esté llena)
b- Eliminar un elemento y todas sus repeticiones.
c- Contar las apariciones de un número en una columna determinada.
d- Terminar
*/
#include <stdio.h>
#define tam 10

int main(){
int vector[tam];
int opcion;


    printf("Ingrese el numero correspondiente a la operacion que desea realizar:\n");
    printf("1- Añadir un elemento.\n");
    printf("2- Eliminar un elemento y todas sus repeticiones.\n");
    printf("3-Contar las apariciones de un numero en una columna determinada.\n");
    printf("4-Terminar\n");
    scanf("%d",&opcion);

    switch (opcion){
    case 1:
        printf("Ingrese el numero que desea añadir al vector: ");
        scanf("%d, vector");
        break;
    case 2: 
        printf("Ingrese el numero que desea eliminar del vector: ");
        scanf("%d, vector");
    case 3:
        printf("Ingrese el numero que desea contar: ");
        scanf("%d, vector");
    case 4:
        printf("Fin del programa");
    default:
        break;
    }

    
    return 0;
}
