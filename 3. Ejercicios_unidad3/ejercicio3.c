/*3. Realizar un algoritmo que lea dos caracteres y deducir si están en orden alfasegunda_letraético o sin iguales.*/

#include <stdio.h>

int main(){

    char primera_letra;
    char segunda_letra;

    printf("Ingrese el primer caracter: ");
    scanf(" %c", &primera_letra);

    
    printf("Ingrese el segundo caracter: ");
    scanf(" %c", &segunda_letra);

    if (primera_letra < segunda_letra)
    {
        printf ("La letra '%c' se encuentra antes de la letra '%c' en el orden alfabetico", primera_letra, segunda_letra);
    }
    else if (primera_letra > segunda_letra)
    {
        printf ("La letra '%c' se encuentra luego de la letra '%c' en el orden alfabetico", primera_letra, segunda_letra);
    }
    else{
        printf("Las letras ingresadas son iguales");
    }
    
    

    return 0;
}