#include <stdio.h>

int main() {

    int num1 , num2 , resultado;

    printf("Digite um numero: ");
    scanf("%d" , &num1);

    printf("Digite outro numero: ");
    scanf("%d" , &num2);

    resultado = num1+num2;

    switch (resultado){

        case 0: printf("0. PROXYCITY."); break;
        case 1: printf("1. P.Y.N.G"); break;
        case 2: printf("2. DNSUEY!"); break;
        case 3: printf("3. SERVERS"); break;
        case 4: printf("4. HOST!"); break;
        case 5: printf("5. CRIPTONIZE"); break;
        case 6: printf("6. OFFLINE DAY"); break;
        case 7: printf("7. SALT"); break;
        case 8: printf("8. ANSWER!"); break;
        case 9: printf("9. RAR?"); break;
        case 10: printf("10. WIFI ANTENNAS"); break;
        default: break;

    }

    return 0;

}