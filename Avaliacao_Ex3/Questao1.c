#include <stdio.h>

int main() {

    char nome [30];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s" , nome);

    printf("Digite sua idade: ");
    scanf("%d" , &idade);

    printf("Digite sua altura (em M): ");
    scanf("%f" , &altura);

    printf("Eu sou %s \nTenho %d anos \nTenho %.2f m de altura" , nome , idade , altura);

    return 0;

}