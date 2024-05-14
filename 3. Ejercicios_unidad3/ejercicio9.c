/*9. Se requiere escribir un programa que pida el ingreso del sexo de una persona y la edad, luego que
muestre por pantalla si es hombre o mujer mayor o menor de edad.*/

#include <stdio.h>

int main(){
    char sexo;
    int edad;

    printf("Ingrese su sexo(M o F): ");
    scanf(" %c",&sexo);

    printf("Ingrese su edad: ");
    scanf("%d",&edad);

    if (sexo == 'F') {
        if (edad >= 18){
            printf("Es mujer mayor de edad");
        }
        else{
            printf("Es mujer menor de edad");
        }
        }
    else if (sexo == 'M'){
        if (edad >= 18){
            printf("Es hombre mayor de edad");
        }
        else{
            printf("Es hombre menor de edad");
        }
    }else{
        printf("El sexo ingresado es invalido");
    }
    return 0;
}