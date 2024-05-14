/*11. Escriba un programa para determinar si un solicitante puede lograr un prestamo. Deberá pedir
los siguientes datos para cada solicitante: Nombre, historia crediticia (‘b’ buena o ‘m’ mala), cantidad
pedida, salario anual, y valor de otras propiedades. El banco solo considerará a los solicitantes con
un estado de crédito bueno. De aquellos, solo aceptara los que tengan más de 6 puntos. Los puntos
se obtienen como sigue:

5 puntos si el salario es 50% del prestamo o más.
3 puntos si el salario es por lo menos 25% pero menos de 50% del prestamo.
1 punto si el salario es por lo menos 10% pero menos de 25% del prestamo.
5 puntos si se tiene otra propiedad del doble del prestamo o mas.
3 puntos si se tiene otra propiedad igual al prestamo pero menor del doble.
*/

#include <stdio.h>

int main() {
    char apellido[20];
    char historiaCrediticia;
    int cantidadPedida;
    int salarioActual;
    int valorOtrasPropiedades;
    int puntos = 0;

    printf("Ingrese su apellido: ");
    scanf("%s", apellido);

    printf("Ingrese su historial crediticio ('b' para buena o 'm' para mala): ");
    scanf(" %c", &historiaCrediticia);    

    while (historiaCrediticia == 'b' || historiaCrediticia == 'm')
    {
        if (historiaCrediticia == 'b') {
        printf("Ingrese la cantidad pedida: ");
        scanf("%d", &cantidadPedida);

        printf("Ingrese su salario actual: ");
        scanf("%d", &salarioActual);

        printf("Ingrese el valor de otras propiedades: ");
        scanf("%d", &valorOtrasPropiedades);

        if (salarioActual >= 0.5 * cantidadPedida) {
            puntos += 5;
        } else if (salarioActual >= 0.25 * cantidadPedida && salarioActual < 0.50 * cantidadPedida) {
            puntos += 3;
        } else if (salarioActual >= 0.10 * cantidadPedida && salarioActual < 0.25 * cantidadPedida) {
            puntos += 1;
        }

        if (valorOtrasPropiedades >= 2 * cantidadPedida) {
            puntos += 5;
        } else if (valorOtrasPropiedades == cantidadPedida) {
            puntos += 3;
        }

        if (puntos > 6) {
            printf("El cliente %s tiene %d puntos y es aprobado\n", apellido, puntos);
        } else {
            printf("Lo siento, %s. No cumple con los requisitos para el prestamo %d.\n", apellido, puntos);
        }
    } else {
        printf("Lo siento, %s. Su historial crediticio no cumple con las condiciones para postularse a solicitar un prestamo.\n", apellido);
    }
    }
    {
        printf("El dato ingresado es invalido, ingrese uno valido ('b' para buena o 'm' para mala): ");
        scanf(" %c", &historiaCrediticia);    
    }
    
    
    
    return 0;
}