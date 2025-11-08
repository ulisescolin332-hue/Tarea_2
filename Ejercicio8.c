/*Francisco Colín Ulises
Tarea 2, Ejercicio 8*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    int a = 0, b = 0;
    
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    
    if (b != 0)
    {
        if (a % b == 0)
        {
            printf("\n%d es divisible entre %d", a, b); 
        }
        else
        {
            printf("\n%d no es divisible entre %d", a, b);
        }
    }
    else
    {
        printf("Division entre cero, es indefinido");
    }
    
}
