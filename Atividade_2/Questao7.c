#include <stdio.h>

int main() {

    char nome [30];
    int idade;

    printf("Informe seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%d" , &idade);

    printf("Nome: %s \nIdade: %d" , nome , idade);

    if(idade <= 18) {

        printf("\nValor da mensalidade do plano de saude: R$ 50.00");

    } else if(idade <= 29) {

        printf("\nValor da mensalidade do plano de saude: R$ 70.00");

    } else if(idade <= 45) {

        printf("\nValor da mensalidade do plano de saude: R$ 90.00");

    } else if(idade <= 65) {

        printf("\nValor da mensalidade do plano de saude: R$ 130.00");

    } else {

        printf("\nValor da mensalidade do plano de saude: R$ 170.00");

    }

    return 0;

}