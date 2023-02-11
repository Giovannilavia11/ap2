#include <stdio.h>

int main()
{
    printf("Exercício 4\n");
    printf("Diga o valor do primeiro cateto: ");
    int c1;
    scanf("%d", &c1);
    printf("Diga o valor do segundo cateto: ");
    int c2;
    scanf("%d", &c2);
    int H = (c1 * c1) + (c2 * c2);
    printf("Um triângulo retângulo com lados %d e %d tem uma hipotenusa igual a %d.\n", c1, c2, H);
}