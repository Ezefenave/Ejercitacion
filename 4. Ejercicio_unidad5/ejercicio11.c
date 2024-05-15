/*
11. (SUPER DIFICIL OPCIONAL) Implementar una función que simule el lanzamiento de un dado y devuelva la
suma acumulada de los resultados hasta que el usuario decida detenerse.
NOTA: Necesitarás incluir la biblioteca stdlib.h para usar la función rand();
Ejemplo de uso:
Generar un número aleatorio entre 1 y 6 (simulando el lanzamiento del dado)
// Semilla para generar números aleatorios, se usa para que no repita el numero.
srand(time(NULL));
int resultado = rand() % 6 + 1;
explicación:
La función rand() genera un número entero aleatorio. Sin embargo, este número podría ser en un rango
más grande que el deseado
El operador % calcula el resto de la división del número aleatorio generado por rand() entre 6. Esto
asegura que el resultado esté en el rango de 0 a 5.
Se le suma 1 al resultado del operador %. Esto desplaza el rango de 0-5 al rango de 1-6, que es lo que se
espera en el lanzamiento de un dado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    return 0;
}


int resultado(){
    return 0;
}
