#include <stdio.h>
#include <math.h>

int main(){

    int num;

    printf ("Digite um numero: ");
    scanf("%d" , &num);

    printf("Esse numero ao quadrado fica: %d \nE sua raiz e: %.1f" , num*num , sqrt(num));

    return 0;
}