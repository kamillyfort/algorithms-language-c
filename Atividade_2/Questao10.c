#include <stdio.h>

int main() {

    int calorias , prato , bebida;

    printf("Escolha uma opcao de prato: \n1. Italiano \n2. Japones \n3. Salvadoreno \nSua resposta: ");
    scanf("%d" , &prato);

    printf("Escolha uma opcao de bebida: \n1. Cha \n2. Suco de Laranja \n3. Refrigerante \nSua resposta: ");
    scanf("%d" , &bebida);

    calorias = 0;
    
    switch(prato) {

        case 1: calorias = 750; break;
        case 2: calorias = 342; break;
        case 3: calorias = 545; break;

    }

    switch(bebida) {

        case 1: printf("Total de calorias: %d" , calorias+30); break;
        case 2: printf("Total de calorias: %d" , calorias+80); break;
        case 3: printf("Total de calorias: %d" , calorias+90); break;

    }

    return 0;

}