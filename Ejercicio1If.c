/*Francisco Colín Ulises
Tarea 2, Ejercicio 5*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float montocompra = 0;
    float total = 0;
    
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &montocompra);
    
    if (montocompra > 0)
    {
        if (montocompra > 2500)
        {
            total = (montocompra - (montocompra * 0.08));
        }
        else
        {
            total = montocompra;
        }
        
        printf("\nEl total a pagar es = %f", total);  
    }
    else
    {
        printf("Monto ingresado no valido");
    }
    
}
