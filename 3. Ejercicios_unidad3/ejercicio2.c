/*2. Realizar un algoritmo que lea un carácter y deducir si esta situado antes o después de la “m” en orden
alfabético.
*/

#include <stdio.h>
int main(){
    char letra;

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    if (letra < 'm') {
        printf("La letra '%c' esta antes de la 'm' en el orden alfabetico.\n", letra);
    } else if (letra > 'm') {
        printf("La letra '%c' esta después de la 'm' en el orden alfabetico.\n", letra);
    } else {
        printf("La letra '%c' es la 'm'.\n", letra);
    }

    return 0;
}