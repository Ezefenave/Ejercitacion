/*
11. (SUPER DIFICIL OPCIONAL) Implementar una función que simule el lanzamiento de un dado y devuelva la
suma acumulada de los acumuladors hasta que el usuario decida detenerse.
NOTA: Necesitarás incluir la biblioteca stdlib.h para usar la función rand();
Ejemplo de uso:
Generar un número aleatorio entre 1 y 6 (simulando el lanzamiento del dado)
// Semilla para generar números aleatorios, se usa para que no repita el numero.
srand(time(NULL));
explicación:
La función rand() genera un número entero aleatorio. Sin embargo, este número podría ser en un rango
más grande que el deseado
El operador % calcula el resto de la división del número aleatorio generado por rand() entre 6. Esto
asegura que el acumulador esté en el rango de 0 a 5.
Se le suma 1 al acumulador del operador %. Esto desplaza el rango de 0-5 al rango de 1-6, que es lo que se
espera en el lanzamiento de un dado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzamiento() {
    return rand() % 6 + 1;//Genero el numero aleatorio del rango 1-6
}

int main(){
    srand(time(NULL)); //Inicio la semilla generadora de numeros aleatorios
    int acumulador = 0;
    char confirmacion;

    printf("Presiona 's' para lanzar el dado o 'n' para detenerte: "); 
    scanf("%c", &confirmacion);
    
    while (confirmacion == 's') { //Mientras la persona confirme que quiere continuar sigo llamando a la función lanzamiento
        int resultadoActual = lanzamiento();
        printf("\nEl dado dio el resultado de: %d\n", resultadoActual);
        acumulador += resultadoActual;

        printf("\nPresiona 's' para lanzar el dado de nuevo o 'n' para detenerte: "); 
        scanf(" %c", &confirmacion); // 
    }
    printf("---------------------------------------------------------------------------------");
    printf("\nLa suma de los resultados del lanzamiento del dado es igual a: %d",acumulador);
    return 0;
}