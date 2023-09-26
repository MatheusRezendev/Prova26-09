#include<stdio.h>
int main(){

    printf("1.Cadastrar\n");
    printf("2.Buscar\n");
    printf("3.Atualizar\n");
    printf("4.Excluir\n");
    printf("5.Sair\n");

    printf("Escolha uma opcao\n");
    int opcao;
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Voce escolheu a opcao 1.Cadastrar\n");
        break;
    case 2:
        printf("Voce escolheu a opcao 2.Buscar\n");
        break;
    case 3:
        printf("Voce escolheu a opcao 3.Atualizar\n");
        break;
    case 4:
        printf("Voce escolheu a opcao 4.Excluir\n");
        break;
    case 5:
        printf("Voce escolheu a opcao 5.Sair\n");
        break;
    default:
    printf("Voce escolheu uma opcao invalida");
        break;
    }
}