/*Francisco Colín Ulises
Tarea 2, Ejercicio 2*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    int n = 0, num = 0;
    int positivo = 0, negativo = 0, nulo = 0;
    

    while (num < 100)
    {
        printf("Ingrese algun numero: ");
        scanf("%d", &n);
        
        if (n != 0)
        {
            if (n > 0)
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
        num = num + 1;
    }
    
    printf("\nDel total de numeros ingresados: ");
    printf("\n%d  son positivos", positivo); 
    printf("\n%d  son negativos", negativo);
    printf("\n%d  son nulos o 0", nulo); 

}
