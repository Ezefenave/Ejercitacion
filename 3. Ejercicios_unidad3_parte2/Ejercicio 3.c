/* 
3. Una central distribuye cal hacia diferentes almacenes sucursales. Disponen de un muelle de
carga a donde van llegando sacos de cal de entre 3000 y 9000 Kgs, con pesos variables en
función de las circunstancias de la producción. La empresa dispone de una flota de camiones
con capacidades de carga de entre 18000 y 28000 Kgs. Se pretende establecer un protocolo
consistente en cargar 20 camiones diarios. Cada camion se quiere cargar como máximo a su
límite de capacidad debiendo partir si con la siguiente saca en la línea de producción se
fuera a exceder su capacidad. La empresa quiere desarrollar un programa que le pida al
operario encargado de carga la capacidad del camion y el peso de las sacos, indicándole si
debe cargar la saca o despachar el camion para comenzar a cargar otro.
*/

#include <stdio.h>

int main() {
    // Definir variables
    int capacidad_camion;
    int peso_saco;
    int camiones_cargados = 0;

     // Bucle para cargar 20 camiones
    while (camiones_cargados < 20) {
        // Solicitar la capacidad del camion al operario
        printf("Ingrese la capacidad del camion en kilogramos.(Debe ser un valor entre 18000 y 28000 KGS): ");
        scanf("%d", &capacidad_camion);

        // Verificar si la capacidad del camion es válida
        if (capacidad_camion >= 18000 && capacidad_camion <= 28000) 
        {
            //Imprimo por pantalla la capacidad de camion que se esta cargando actualmente
            printf("La capacidad del camion actual es de: %d KGS \n", capacidad_camion);
            printf("================================================================\n");
            // Bucle para cargar los sacos en el camion
            int carga_actual = 0;
            while (1) { // Usamos un bucle infinito para que el operario pueda ingresar sacos hasta que el camion esté lleno o se exceda la capacidad
                // Solicitar el peso del saco al operario
                printf("Ingrese el peso del saco en kilogramos.(Debe ser un valor entre 3000 y 9000 KGS): ");
                scanf("%d", &peso_saco);
                // Verificar si el peso del saco es correcto
                if (peso_saco >= 3000 && peso_saco <= 9000){
                    // Verificar si se puede cargar el saco en el camion
                    if (carga_actual + peso_saco <= capacidad_camion) {
                        carga_actual += peso_saco;
                        printf("Saco cargado en el camion. ");
                        printf("La carga actual es de: %d KGS \n ", carga_actual);
                        printf("================================================================\n");
                    // Imprimo por pantalla en caso de que el camion este lleno
                    } else {
                        printf("El saco no se puede cargar en este camion ya que excederia. Despachando camion.\n");
                        // Aumentar el número de camiones cargados
                        camiones_cargados++;
                        //Imprimo por pantalla la cantidad de camiones despachados ese dia
                        printf("La cantidad de camiones despachados el dia de hoy es de: %d\n", camiones_cargados);
                        break;
                    }
                }else
                {
                    printf("El valor del saco es incorrecto. Debe estar entre 3000 y 9000 KGS.\n");
                }
            }
        } else 
        {
            printf("La capacidad del camion es invalida. Debe estar entre 18000 y 28000 kilogramos.\n");
        }
    }
    printf("Se han cargado 20 camiones el dia de hoy . Programa finalizado.\n");

    return 0;
}

