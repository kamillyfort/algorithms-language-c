#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    if(num % 2 == 0) {

        printf("%d" , num);

    } else {

        printf("%d" , num+1);

    }

    return 0;

}