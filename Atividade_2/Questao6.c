#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    if(num%5 == 0) {

        printf("Esse numero e divisivel por cinco.");

    } else {

        printf("Esse numero NAO e divisivel por cinco.");

    }

    return 0;

}