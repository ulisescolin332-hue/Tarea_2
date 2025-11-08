/*Francisco Colín Ulises
Tarea 2, Ejercicio 4*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    int n = 0;
    int num = 1, mult = 1;
    
    do
    {
        printf("Indique hasta que numero quiere que se haga la multiplicacion de numeros naturales: ");
        scanf("%d", &n); 
    }
    while (n < 1);
    

    while (num <= n)
    {
        mult = mult * num;
        num = num + 1;
    }
    
    printf("\nLa multiplicacion de los primeros  %d  numeros naturales es =  %d", n, mult);

}
