#include <stdio.h>
#include <math.h>

int main()
{
    printf("Exercício 2\n");
    printf("Digite seu peso: ");
    float peso;
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    float altura;
    scanf("%f", &altura);
    float imc = peso / (altura * altura);
    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f\n", peso, altura, imc);
}