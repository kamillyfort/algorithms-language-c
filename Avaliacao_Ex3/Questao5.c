#include <stdio.h>

int main () {

    int mes;

    printf("Digite um numero correspondente ao mes:\n1.Janeiro \n2.Fevereiro \n3.Marco \n4.Abril \n5.Maio \n6.Junho \n7.Julho \n8.Agosto \n9.Setembro \n10.Outubro \n11.Novembro \n12.Dezembro \nSua resposta: ");
    scanf("%d" , &mes);

    if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) {

        printf("Mes com 31 dias.");

    } else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) {

        printf("Mes com 30 dias.");

    } else if (mes == 2) {

        printf("Mes com 28 dias.");

    } else {

        printf("Mes invalido.");

    }

    return 0;

}