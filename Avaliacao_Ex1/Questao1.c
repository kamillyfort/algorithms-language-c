#include <stdio.h>

int main () {

    int num1, num2;

    printf("Digite um numero ('1' para verdadeiro, ou '0' para falso): ");
    scanf("%d" , &num1);

    printf("Digite outro numero ('1' para verdadeiro, ou '0' para falso): ");
    scanf("%d" , &num2);

    if ((num1 == 0 && num2 == 1) || (num1 == 1 && num2 == 0)){

        printf("Aceito!");

    } else {

        printf("Rejeitado.");

    }

    return 0;

}