#include <stdio.h>

int main() {

    int centenas , dezenas , unidades , num;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d" , &num);

    centenas = num/100;
    dezenas = (num%100)/10;
    unidades = num%10;

    if ((centenas%dezenas == 0) || (dezenas%centenas == 0) && (dezenas%unidades == 0) || (unidades%dezenas == 07)){

        printf("Premio garantido!");

    } else {

        printf("Sem premio.");

    }

    return 0;

}