#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[256];
    char sobrenome[256];
    int anoNascimento;
    int idade;

    printf("Qual seu nome?\n");

    scanf("%s",nome);

    printf("Show de bola %s... Qual sua idade?",nome);
    scanf("%d",&idade);
    printf("Muito bom! O %s tem %d anos",nome,idade);

    return 0;

}