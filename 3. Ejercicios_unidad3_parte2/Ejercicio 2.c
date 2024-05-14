/*
2. Realizar un programa que calcule el sueldo que le corresponde al trabajador de una empresa
que cobra 40.000 euros anuales, el programa debe realizar los cálculos en función de los
siguientes criterios:
a. Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
b. Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
c. Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
d. Si lleva menos de 3 años se le aplica un aumento del 3%.
*/

#include <stdio.h>

int main() {
    float sueldoAnualAntiguo = 40000.0;
    int anosAntiguedad;
    float sueldoAnualActual;

    printf("Ingrese los anos de antiguedad del empleado en la empresa: ");
    scanf("%d", &anosAntiguedad);

    if (anosAntiguedad >= 10) {
        sueldoAnualActual = sueldoAnualAntiguo * 1.10;
        printf("Su sueldo anual tuvo un aumento del 10%% debido a su antiguedad en la empresa. Su nuevo sueldo es de: $%.2f\n", sueldoAnualActual);
    } else if (anosAntiguedad >= 5 && anosAntiguedad <= 9) {
        sueldoAnualActual = sueldoAnualAntiguo * 1.07;
        printf("Su sueldo anual tuvo un aumento del 7%% debido a su antiguedad en la empresa. Su nuevo sueldo es de: $%.2f\n", sueldoAnualActual);
    } else if (anosAntiguedad >= 3 && anosAntiguedad <= 4) {
        sueldoAnualActual = sueldoAnualAntiguo * 1.05;
        printf("Su sueldo anual tuvo un aumento del 5%% debido a su antiguedad en la empresa. Su nuevo sueldo es de: $%.2f\n", sueldoAnualActual);
    } else {
        sueldoAnualActual = sueldoAnualAntiguo * 1.03;
        printf("Su sueldo anual tuvo un aumento del 3%% debido a su antiguedad en la empresa. Su nuevo sueldo es de: $%.2f\n", sueldoAnualActual);
    }

    return 0;
}