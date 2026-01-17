#include <stdio.h>

int main() {

    int num1 , num2;

    printf("Informe um numero: ");
    scanf("%d" , &num1);

    printf("Informe outro numero: ");
    scanf("%d" , &num2);

    if((num1%num2 == 0) || (num2%num1 == 0)) {

        printf("Sao multiplos.");

    } else {

        printf("Nao sao multiplos.");

    }

    return 0;

}