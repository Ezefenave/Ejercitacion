/*4. Dados tres números, mostrarlos de menor a mayor.*/

#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int numero3;

    printf("Ingrese el primer numero: ");
    scanf("%d",&numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&numero2);
    
    printf("Ingrese el tercer numero: ");
    scanf("%d",&numero3);

    if(numero1 < numero2 && numero1 < numero3 && numero2 < numero3)
    {
        printf("El numero mayor es: %d\n",numero3);
        printf("El numero del medio numero: %d\n",numero2);
        printf("El menor numero: %d\n",numero1);
    }
    else if(numero2 < numero1 && numero2 > numero3 && numero3 < numero1)
    {
        printf("El numero mayor es: %d\n",numero1);
        printf("El numero del medio numero: %d\n",numero2);
        printf("El menor numero: %d\n",numero3);
    }
    else{
        printf("El numero mayor es: %d\n",numero2);
        printf("El numero del medio numero: %d\n",numero3);
        printf("El menor numero: %d\n",numero1);
    }

    return 0;
}