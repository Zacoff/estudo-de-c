#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[256];
    int idade;

    printf("Ola! Qual seu nome?\n");
    scanf("%s",&nome);

    printf("\nQual sua idade\n");
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...");

    printf("A primeira letra do seu nome: %c",nome[0]);
    if (idade >= 60){
        printf("\nIdoso");
    }else if(idade >= 18 ){
        printf("\nAdulto");
    }else if (idade >= 12){
        printf("\nAdolescente");
    }else{
        printf("\nCrianca");
    }
    return 0;

}