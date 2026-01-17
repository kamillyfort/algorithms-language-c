#include <stdio.h>

int main() {

    int mana;

    printf("Informe a sua mana disponivel: ");
    scanf("%d" , &mana);

    if(mana >= 100){

        printf("Bola de fogo.");

    } else if(mana >= 50) {

        printf("Cura avancada.");
        
    } else if(mana >= 20) {

        printf("Escudo magico.");

    } else {

        printf("Descansar e meditar.");

    }

    return 0;

}