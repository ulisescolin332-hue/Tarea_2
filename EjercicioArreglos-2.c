/*Francisco Colín Ulises
Tarea 2, Ejercicio 2*/

#include <stdio.h>

void main()
{
    int arr[10];
    int nument = 0;
    int i = 0, numerador = 0;
    
    printf("Ingrese el valor para el cual requiere identificar las veces que se encuentra dentro del arreglo : ");
    scanf("%d", &nument);
    
    for (i; i < 10; i = i + 1)
    {
        printf("Ingrese un numero para asignarlo a su respectiva ubicacion dentro del arreglo: ");
        scanf("%d", &arr[i]);
    }

    i = 0;
    
    for (i; i < 10; i = i + 1)
    {
        if (nument == arr[i])
        {
            numerador = numerador + 1;
        }
    }

    printf("\nEl numero   %d   se encuentra   %d   veces dentro del arreglo", nument, numerador);
}
