#include <stdio.h>

int main() {

int numero;

    printf("Informe um numero: ");
    scanf("%d" , &numero);

    if (numero%3==0 && numero%7==0){
     
        printf("\nO numero inserido e divisivel por 3 e 7");
    }
    else{

        printf("\nO numero inserido NAO e divisivel por 3 e 7");

    }

return 0;
    
}
