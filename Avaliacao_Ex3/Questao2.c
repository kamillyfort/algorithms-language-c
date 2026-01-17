#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {

    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f" , &raio);

    printf("A area dessa desse circulo e: %.2f" , PI*pow(raio,2));

    return 0;

}