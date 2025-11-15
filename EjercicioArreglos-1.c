/*Francisco Colín Ulises
Tarea 2, Ejercicio 1*/

#include <stdio.h>
#include <math.h>

void main()
{
    int arr[10];
    int i = 0, sum = 0;

    for (i; i < 10; i = i + 1)
    {
        printf("Ingrese un valor entero: ");
        scanf("%d", &arr[i]);
    }

    i = 0;
    
    for (i; i < 10; i = i + 1)
    {
        sum = sum + arr[i];
    }

    printf("\nLa suma de los elementos ingresados es = %d", sum);
}
