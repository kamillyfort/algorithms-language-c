#include <stdio.h>

int main() {

    float saldo;

    printf("Digite o seu saldo: R$ ");
    scanf("%f" , &saldo);

    if(saldo >= 50) {

        printf("Bife com batata frita.");

    } else if (saldo >= 20){

        printf("Macarrao com molho.");

    } else if (saldo >= 10) {

        printf("Sanduiche de presunto.");

    } else {

        printf("Bolacha agua e sal.");

    }

    return 0;

}