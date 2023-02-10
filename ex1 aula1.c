#include <stdio.h>

int main()
{
    printf("Exercício 1\n");
    printf("Primeiro valor: ");
    int valorp;
    scanf("%d", &valorp);
    printf("Segundo valor: ");
    int valors;
    scanf("%d", &valors);
    int S = valorp + valors;
    printf("soma = %d\n", S);
    int s = valorp - valors;
    printf("subtração = %d\n", s);
    int m = valorp * valors;
    printf("multiplicação = %d\n", m);
    int d = valorp / valors;
    printf("divisão = %d\n", d);
}