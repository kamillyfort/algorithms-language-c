#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    printf("O seu sucessor e: %d\nE o seu antecessor e: %d" , num+1 , num-1);

    return 0;
}