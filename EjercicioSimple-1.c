/*Francisco Colín Ulises
Tarea 2, Ejercicio 1*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float a = 0, b = 0;
    float sum = 0, res = 0, mul = 0;
    
    printf("Ingrese un numero: ");
    scanf("%f", &a);
    printf("Ingrese otro numero: ");
    scanf("%f", &b);
    
    sum = a + b;
    res = a - b;
    mul = a * b;
    
    printf("\n%f + %f = %f\n", a, b, sum);
    printf("%f - %f = %f\n", a, b, res);
    printf("%f * %f = %f\n", a, b, mul);

}
