#include <stdio.h>

int main()
{
    printf("Exercício 3\n");
    printf("Valor da temperatura na escala Celsius: ");
    float temp;
    scanf("%f", &temp);
    float F = 1.8 * temp + 32;
    printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit.\n", temp, F);
}