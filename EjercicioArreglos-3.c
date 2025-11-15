/*Francisco Colín Ulises
Tarea 2, Ejercicio 3*/

#include <stdio.h>
#include <math.h>

void main()
{
    int arr[10];
    int i = 0;
    int positivo = 0, negativo = 0, nulo = 0;
    
    for (i; i < 10; i = i + 1)
    {
        printf("Ingrese un valor entero: ");
        scanf("%d", &arr[i]);
    }

    i = 0;
    
    for (i; i < 10; i = i + 1)
    {
        if (arr[i] != 0)
        {
            if (arr[i] > 0)
            {
                positivo = positivo + 1;
            }
            else
            {
                negativo = negativo + 1; 
            }
        }
        else
        {
            nulo = nulo + 1; 
        }
    }
    
    printf("\nDel total de numeros ingresados: ");
    printf("\n  %d  son positivos", positivo); 
    printf("\n  %d  son negativos", negativo);
    printf("\n  %d  son nulos o cero", nulo); 
}
