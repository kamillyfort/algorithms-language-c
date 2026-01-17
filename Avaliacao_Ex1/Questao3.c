#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d" , &num);

    switch (num)
    {
    case 0:
        printf("Zero.");
        break;
    
    case 1:
        printf("Um.");
        break;
    
    case 2:
        printf("Dois.");
        break;
    
    case 3:
        printf("Três.");
        break;
    
    case 4:
        printf("Quatro.");
        break;
    
    case 5:
        printf("Cinco.");
        break;
    
    case 6:
        printf("Seis.");
        break;
    
    case 7:
        printf("Sete.");
        break;
    
    case 8:
        printf("Oito.");
        break;
    
    case 9:
        printf("Nove.");
        break;
    
    default:
        printf("Numero invalido.");
        break;
    }


    return 0;

}