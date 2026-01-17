#include <stdio.h>

int main (){
    
    int n1, n2, n3, n4, n5;

    printf("Informe cinco numeros: ");
    scanf("%d %d %d %d %d" , &n1 , &n2 , &n3 , &n4 , &n5);

    if (n1>n2 && n1>n3 && n1>n4 && n1>n5){
        
        printf("\nO numero maior e o %d" , n1);

    }
    else if (n2>n3 && n2>n4 && n2>n5){
        
        printf("\nO numero maior e o %d" , n2);

    }
    else if (n3>n4 && n3>n5){
        
        printf("\nO numero maior e o %d" , n3);

    }
    else if (n4>n5){
        
        printf("\nO numero maior e o %d" , n4);

    }
    else{
        
        printf("\nO numero maior e o %d" , n5);

    }


    if (n1<n2 && n1<n3 && n1<n4 && n1<n5){
        
        printf("\nE o numero menor e o %d" , n1);

    }
    else if (n2<n3 && n2<n4 && n2<n5){
        
        printf("\nE o numero menor e o %d" , n2);

    }
    else if (n3<n4 && n3<n5){
        
        printf("\nE o numero menor e o %d" , n3);

    }
    else if (n4<n5){
        
        printf("\nE o numero menor e o %d" , n4);

    }
    else{
        
        printf("\nE o numero menor e o %d" , n5);

    }

    return 0;

}