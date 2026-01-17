#include <stdio.h>

int main(){

    char nome [20];

    printf("Digite seu nome: ");
    gets(nome);
    //scanf("%s" , nome);

    printf("Bem-vindo a disciplina de Linguagem de Programacao, %s" , nome);


    return 0;
}