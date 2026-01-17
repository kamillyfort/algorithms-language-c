#include <stdio.h>

int main(){

    int horas, minutos , segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d" , &segundos);

    horas = segundos/3600;
    minutos = (segundos%3600)/ 60;
    segundos = segundos%60;

    printf("Horario\n%02d:%02d:%02d" , horas , minutos , segundos);
    return 0;
}