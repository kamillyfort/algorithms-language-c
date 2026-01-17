#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {

    float raio;

    printf("Digite o valor de um raio: ");
    scanf("%f" , &raio);

    printf("Area: %.2f\nPerimetro: %.2f" , PI*pow(raio,2) , 2*PI*raio);

    return 0;

}