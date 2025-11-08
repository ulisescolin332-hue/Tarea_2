/*Francisco Colín Ulises
Tarea 2, Ejercicio 1*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    int n = 0, hasta = 0;
    int num = 1, resul = 0;
    
    printf("Ingrese el numero del cual requiere su tabla de multiplicar: ");
    scanf("%d", &n);
    
    do
    {
        printf("Ingrese hasta donde requiere su extension: ");
        scanf("%d", &hasta);
    }
    while (hasta < 1);
    
    while (num <= hasta)
    {
        resul = n * num;
        printf("\n%d * %d = %d", n, num, resul); 
        
        num = num + 1;
    }
}
