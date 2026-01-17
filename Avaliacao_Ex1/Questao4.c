#include <stdio.h>

int main() {

    int habilidade, participacao, idade;

    printf("Informe a sua habilidade: \n1.Forca \n2.Tecnologia \n3.Estrategia \n4.Magia \n5.Nenhuma das opcoes acima \nSua resposta: ");
    scanf("%d" , &habilidade);

    printf("Digite sua idade: ");
    scanf("%d" , &idade);

    printf("Ja participou de alguma missao? \n1.Sim \n2.Nao \nSua resposta: ");
    scanf("%d" , &participacao);

    if((habilidade == 1) && (idade < 35) && (participacao == 1)){

        printf("Aprovado para os Vingadores!");

    } else if ((habilidade == 2) && (participacao == 1)){

        printf("Aprovado para os Vingadores!");

    } else if ((habilidade == 3) && (idade > 30)) {

        printf("Aprovado para os Vingadores!");

    } else if ((habilidade == 4) && (idade > 100)) {

        printf("Aprovado para os Vingadores!");
        
    } else {

        printf("Reprovado pelo sistema de seguranca.");

    }

    return 0;

}