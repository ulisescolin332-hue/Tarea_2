/*Francisco Colín Ulises
Tarea 2, Ejercicio 1*/

#include <stdio.h>
#include <math.h>

void main()
{
    int arr[10];
    int elementos = 0;
    int i = 0, sum = 0;
    
    do
    {
        printf("Proporciona el numero de elementos del arreglo (1 al 10): ");
        scanf("%d", &elementos);
    }
    while ((elementos < 1) || (elementos > 10));
    
    for (i; i < elementos; i = i + 1)
    {
        printf("ingrese un valor entero: ");
        scanf("%d", &arr[i]);
    }

    i = 0;
    for (i; i < elementos; i = i + 1)
    {
        sum = sum + arr[i];
    }
    
    printf("\nLa suma de los elementos ingresados es = %d", sum);
}
