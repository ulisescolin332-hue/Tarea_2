/*Francisco Colín Ulises
Tarea 2, Ejercicio 2*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float sueldo = 0;
    float sueldototal = 0;
    
    printf("Ingrese el sueldo percibido: ");
    scanf("%f", &sueldo);
    
    if (sueldo > 0)
    {
        if (sueldo < 1000)
        {
            sueldototal = (sueldo + (sueldo * 0.15));
        }
        else
        {
            sueldototal = (sueldo + (sueldo * 0.12));
        }
        
        printf("\nEl sueldo con el aumento incorporado es = %f", sueldototal);  
    }
    else
    {
        printf("Sueldo percibido ingresado no valido");
    }
    
}
