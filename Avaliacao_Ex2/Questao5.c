#include <stdio.h>

int main() {

    float peso;

    printf("Insira o peso (KG): ");
    scanf("%f" , &peso);

    if(peso < 10) {

        printf("Deixe-o passar, e apenas um passarinho!");

    } else if (peso < 50) {

        printf("Atencao, mas nao e tao pesado.");

    } else {

        printf("Alerta! Esse animal pode quebrar o gelo!");

    }

    return 0;

}