#include <stdio.h>

int main() {

    float altura;
    int sexo;

    printf("Digite sua altura: ");
    scanf("%f" , &altura);

    printf("Informe seu sexo: \n1. Feminino \n2.Masculino \nSua resposta: ");
    scanf("%d" , &sexo);

    if(sexo == 1) {

        printf("Peso ideal: %.2f" , (62.1*altura)-44.7);

    } else if(sexo == 2) {

        printf("Peso ideal: %.2f" , (72.7*altura)-58);

    } else {

        printf("Informacao invalida.");

    }

    return 0;

}