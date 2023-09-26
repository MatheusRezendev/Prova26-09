#include<stdio.h>

int main(){
    int par=0, impar=0, numero;
    int indice;

    printf("Digite um numero: ");;
    scanf("%d",&numero);

    if(numero % 2 == 0){
        par ++;
    }else{
        impar++;
    }
    for(indice=1; indice<=numero; indice++){
        printf("%d\n", indice+=impar);
        
    for(indice=1; indice<=numero; indice++){
        printf("%d\n", indice+=par);
    }
    }
}  