/*Francisco Colín Ulises
Tarea 2, Ejercicio 1*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float distancia = 0, dias = 0;
    float total = 0;
    
    printf("Ingrese los kilometros a recorrer: ");
    scanf("%f", &distancia);
    printf("Ingrese el numero de dias: ");
    scanf("%f", &dias);
    
    if (distancia > 0 && dias > 0)
    {
        if (distancia > 800 && dias > 7)
        {
            total = (((distancia * 2) * 0.23) * 0.7);
        }
        else
        {
            total = ((distancia * 2) * 0.23);
        }
        printf("\nEl total a pagar es = %f", total);  
    }
    else
    {
        printf("Dias o distancia no validas");
    }
    
}
