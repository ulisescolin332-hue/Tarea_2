/*Francisco Colín Ulises
Tarea 2, Ejercicio 1*/

#include <stdio.h>
#include <math.h>

void main()
{
    int a = 0, b = 0;
    int sum = 0, res = 0, mul = 0;
    
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    
    sum = a + b;
    res = a - b;
    mul = a * b;
    
    printf("\n%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, res);
    printf("%d * %d = %d\n", a, b, mul);

}
