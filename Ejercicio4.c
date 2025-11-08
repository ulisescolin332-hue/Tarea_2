/*Francisco Colín Ulises
Tarea 2, Ejercicio 4*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float dinero = 0;
    float total = 0;
    
    printf("Tasa mensual del 10%\n");
    printf("Ingrese la cantidad de dinero invertido: ");
    scanf("%f", &dinero);
    
    total = ((0.1 * dinero) + dinero);
    
    printf("\nEl total de dinero a recibir al final del mes es = %f\n", total);
    
}
