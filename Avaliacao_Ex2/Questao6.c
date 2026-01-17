#include <stdio.h>

int main() {

    int qualidade;

    printf("De uma nota de 1 a 10 para esta banana: ");
    scanf("%d" , &qualidade);

    if(qualidade >= 8) {

        printf("Banana Premium.");

    } else if (qualidade >= 5) {

        printf("Banana regular.");

    } else {

        printf("Banana duvidosa.");

    }

    return 0;

}