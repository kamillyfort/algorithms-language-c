#include <stdio.h>

int main() {

    float temperatura;

    printf("Informe a temperatura atual da geladeira: ");
    scanf("%f" , &temperatura);

    if(temperatura < 0) {

        printf("Comida congelada. Que tal um sorvete?");

    } else if (temperatura <= 5) {

        printf("Tudo em ordem.");

    } else {

        printf("Comida estragando. Ligue para o tecnico.");

    }

    return 0;

}