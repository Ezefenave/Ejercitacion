/*
4. Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál o cuáles es el
mayor de ellos indicando la posición en que fue o fueron encontrados.
*/

#include <stdio.h>
#define tam 10 //Defino el tamaño de mi vector
    
int main(){
    int vectorN[10];
    int banderaMayor = 0;
    int mayor;
    int indiceMayor = 0;

    printf("Ingrese numeros:\n");
    
    for (int i = 0; i < tam; i++){ //Solicito al usuario que me ingrese los numeros que busca almacenar en el vector indicandoles el indice
        printf("Elemento %d: ", i);
        scanf("%d",&vectorN[i]);
    }
        mayor = vectorN[0]; //Determino al mayor como el primer elemento de mi vector

    for (int i = 1; i < tam; i ++){ //Inicio el bucle para recorrer el vector
        if(vectorN[i] > mayor){ //Si el numero que lee mi bucle es mayor al valor que contiene almacenado como mayor lo sustituye
        mayor = vectorN[i] ; //Cambio el valor del mayor para mi vector
        indiceMayor = i; //De esta manera indico en que posicion del indice fue encontrado el numero mayor
        banderaMayor = 1; //Cambio el valor de mi bandera 
        }
    }

    printf("El numero mayor encontrado entre los numeros ingresados es: %d. El cual fue encontrado en la posicion %d", mayor, indiceMayor);

    return 0;
}