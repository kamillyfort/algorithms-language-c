#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);
    
    if(num < 100) {

        printf("%d" , num+100);

    } else {

        printf("%d" , num-100);

    }

    return 0;

}