#include <stdio.h>

int main(){

    float deposito , taxa;

    printf("Insira o valor do deposito: R$  ");
    scanf("%f" , &deposito);

    printf("Agora, digite a porcentagem da taxa de juros (apenas numero): ");
    scanf("%f" , &taxa);

    taxa /= 100;

    printf("Valor de rendimento: R$ %.2f\nValor total de R$ %.2f" , deposito/taxa , (deposito/taxa)+deposito);
    return 0;
}