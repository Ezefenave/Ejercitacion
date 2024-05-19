/*
3. Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo vector por pantalla
pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería imprimir 10 9 8 7 6 5 4
3 2 1.
*/

#include <stdio.h>
#define tam 10 //Defino el tamaño de mi vector
    
int main(){
    int vectorOrdenado[10];
    int vectorInverso[10];

    printf("Ingrese numeros:\n");
    
    for (int i = 0; i < tam; i++){ //Solicito al usuario que me ingrese los numeros que busca almacenar en el vector
        printf("Elemento %d: ", i);
        scanf("%d",&vectorOrdenado[i]);
    }

    printf("\nLos numeros ingresados son:\n"); //Imprimo como quedo mi vector de la manera ordenada 
    for (int i = 0; i < tam; i++) {
        printf("%d ", vectorOrdenado[i]);
    }
    
    for (int i = 0; i < tam; i++){
    vectorInverso[i] = vectorOrdenado[tam - 1 - i]; //De esta manera queda invertido mi vector || Lo obtengo al obtener los indices de mi vector desde el ultimo (9) hasta el primero (0)
    }
    printf("\nLos numeros del vector en forma inversa:\n"); //Imprimo como quedo mi vector de la manera inversa
    for (int i = 0; i < tam; i++) {
        printf("%d ", vectorInverso[i]);
    }

    return 0;
}