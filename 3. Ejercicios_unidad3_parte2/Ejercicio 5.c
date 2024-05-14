/*5. Realizar un programa, que calcule la máxima área de un terreno rectangular de lados 100-2x
y x respectivamente, para valores de x entre 10 y 300.
*/

#include <stdio.h>

int main(){

    int x;
    float max_area = 0;
    int max_x = 0;

    printf("Ingrese el valor de x: ");
        scanf("%d", &x);
        
    while (x <= 300) 
    {
        float area = (100 - 2 * x) * x;
        
        if (area > max_area)
        {
            max_area = area;
            max_x = x;
        }

        x++;
    }

    printf("La maxima area del terreno es: %.2f\n", max_area);
    printf("Se alcanza cuando x = %d\n", max_x);

    return 0;
    return 0;
}