#include<stdio.h>

int main(){
    int opcao, numero1, numero2;

    printf("1.Multiplicacao\n");
    printf("2.Divisao\n");

    printf("Escolha uma opcao\n");
    scanf("%d", &opcao);

    if(opcao < 1 || opcao > 2){
        printf("Digite uma opcao valida\n");
        printf("Escolha uma opcao\n");
        scanf("%d", &opcao);
    }
        printf("Digite o numero 1:\n");
        scanf("%d", &numero1);

        printf("Digite o numero 2:\n");
        scanf("%d", &numero2);
    
    if(opcao = 1){
        printf("Resultado eh:%d", numero1 * numero2);
    }
    if(opcao = 2){
        printf("Resultado eh:%d", numero1 / numero2);
    }else 
        if(numero2 = 0){
            printf("Nao eh possivel fazer a divisao por zero");
        }        
    }

