#include <stdio.h>

int main (){

    float salario, aumento, novosal;
    int codigo;

    printf("Informe o seu salario: ");
    scanf("%f" , &salario);

    printf("Digite o seu codigo: ");
    scanf("%d" , &codigo);


    switch (codigo)
    {
    case 1:

        aumento = salario*0.40;
        novosal = aumento+salario;

        printf("\nO seu cargo e de servente. \nO valor do aumento eh: %.2f \nE agora, o seu salario sera de: %.2f" , aumento , novosal);
        break;

    case 2:

        aumento = salario*0.35;
        novosal = aumento+salario;

        printf("\nO seu cargo e de pedreiro. \nO valor do aumento eh: %.2f \nE agora, o seu salario sera de: %.2f" , aumento , novosal);
        break;

    case 3:

        aumento = salario*0.20;
        novosal = aumento+salario;

        printf("\nO seu cargo e de mestre de obras. \nO valor do aumento eh: %.2f \nE agora, o seu salario sera de: %.2f" , aumento , novosal);
        break;

    case 4:

        aumento = salario*0.10;
        novosal = aumento+salario;

        printf("\nO seu cargo e de tecnico de seguranca. \nO valor do aumento eh: %.2f \nE agora, o seu salario sera de: %.2f" , aumento , novosal);
        break;
    
    default:
        break;
    }

    return 0;

}