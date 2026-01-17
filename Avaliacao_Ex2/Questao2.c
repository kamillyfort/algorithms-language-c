#include <stdio.h>

int main() {

    float velocidade;

    printf("Digite a velocidade percorrida (em km/h): ");
    scanf("%f" , &velocidade);

    if(velocidade < 5) {

        printf("Gato preguicoso.");

    } else if (velocidade < 15) {

        printf("Gato normal.");

    } else {

        printf ("Gato turbo! Cuidado!");

    }

return 0;

}