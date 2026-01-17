#include <stdio.h>

int main(){

    int num1 , num2 , num3 , num4;

    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d" , &num1 , &num2 , &num3 , &num4);
    
    printf("A media aritmetica desses numeros e %.2f" , (float) (num1+num2+num3+num4)/4);

    return 0;
}