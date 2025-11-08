/*Francisco Colín Ulises
Tarea 2, Ejercicio 3*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float cantdolares = 0;
    float cantpesos = 0;
    
    printf("Ingrese la cantidad de dolares : ");
    scanf("%f", &cantdolares);
    
    cantpesos = (11.96 * cantdolares);
    
    printf("\nLa equivalencia en pesos es = %f", cantpesos);

}
