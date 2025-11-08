/*Francisco Colín Ulises
Tarea 2, Ejercicio 2*/

#include <stdio.h>
#include <math.h>

void main()
{
    
    float r = 0;
    float Area = 0, Circunferencia = 0;
    
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &r);
    
    Area = (3.141592 * pow(r,2));
    Circunferencia = 2 * 3.141592 * r;
    
    printf("\nArea del circulo = %f\n", Area);
    printf("Perimetro de la circunferencia = %f", Circunferencia);
    
}
