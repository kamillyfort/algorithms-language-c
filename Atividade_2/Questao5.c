#include <stdio.h>

int main() {

    int codigoestado , codigocarga;
    float pesocarga, pesocargaKG , precocarga , imposto;

    printf("Digite o codigo do estado de origem da carga de um caminhao: ");
    scanf("%d" , &codigoestado);

    printf("Informe o peso da carga em toneladas: ");
    scanf("%f" , &pesocarga);

    printf("Digite o codigo da carga (KG): \n10 a 20. R$ 180.00 \n21 a 30. R$ 120.00 \n31 a 40. R$230.00 \nSua resposta: ");
    scanf("%d" , &codigocarga);

    pesocargaKG = pesocarga*1000;

    printf("\nO peso da carga em KG: %.2f" , pesocargaKG);

    if(codigocarga >= 10 && codigocarga <= 20) {

        precocarga = pesocargaKG*180;
        printf("\nPreco da carga: %.2f" , precocarga);

    } else if(codigocarga >= 21 && codigocarga <= 30) {

        precocarga = pesocargaKG*120;
        printf("\nPreco da carga: %.2f" , precocarga);

    } else if(codigocarga >= 31 && codigocarga <= 40) {

        precocarga = pesocargaKG*230;
        printf("\nPreco da carga: %.2f" , precocarga);

    }

    switch(codigoestado) {

        case 1: printf("\nValor do imposto: %.2f" , imposto = precocarga*0.20); break;
        case 2: printf("\nValor do imposto: %.2f" , imposto = precocarga*0.15); break;
        case 3: printf("\nValor do imposto: %.2f" , imposto = precocarga*0.10); break;
        case 4: printf("\nValor do imposto: %.2f" , imposto = precocarga*0.05); break;
        default: break;

    }

    printf("\nValor total da carga: %.2f" , precocarga+imposto);

    return 0;

}