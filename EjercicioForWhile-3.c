/*Francisco Colín Ulises
Tarea 2, Ejercicio 3*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    int num = 10, sum= 0;

    while (num <= 50)
    {
        if (num % 2 == 0)
        {
            sum = sum + num;  
        }
        
        num = num + 1;
    }
    
    printf("\nLa suma de los pares comprendidos entre el 10 y 50 es = %d", sum);

}
