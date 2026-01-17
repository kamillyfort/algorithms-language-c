#include <stdio.h>
#include <math.h>

int main(){

    int num1 , num2;

    printf("Digite um numero: ");
    scanf("%d" , &num1);

    printf("Digite outro numero: ");
    scanf("%d" , &num2);

    printf("O resultado dessa potenciacao e: %.f", pow(num1 , num2));
    return 0;
}