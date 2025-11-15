/*Francisco Colín Ulises
Tarea 2, Ejercicio 4*/

#include <stdio.h>

void main()
{
    int arr[100];
    int i = 0;
    int num = 0;

    for (i; i < 100; i = i + 1)
    {
        num = (i + 1) * 2;
        arr[i] = num;  
    }

    printf("Los primeros 100 numeros pares son:\n\n");

    i = 0;
    
    for (i; i < 100; i = i + 1)
    {
        printf("%d   ", arr[i]);
    }
}
