#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char player[256];
    char player2[256];

    printf("Player 1, sua vez...");
    scanf("%s",&player);

    printf("Player 2,sua vez...");
    scanf("%s",&player2);

    printf("\nAguarde, estamos calculando o resultado...");

    if(strcmp(player,"papel") == 0){
            if(strcmp(player2,"papel") == 0){
                printf("Empate");
            }else if (strcmp(player2,"pedra") == 0){
                printf("Player 1 ganhou");
            }else if (strcmp(player2,"tesoura") == 0){
                printf("Player 2 ganhou");
            }else{
                printf("Player 2 jogou errado");
            }
    }else if (strcmp(player,"pedra") == 0){
            if(strcmp(player2,"papel") == 0){
                printf("Player 2 ganhou");
            }else if (strcmp(player2,"pedra") == 0){
                printf("Empate");
            }else if (strcmp(player2,"tesoura") == 0){
                printf("Player 1 ganhou");
            }else{
                printf("Player 2 jogou errado");
            }
    }else if (strcmp(player,"tesoura") == 0){
            if(strcmp(player2,"papel") == 0){
                printf("Empate");
            }else if (strcmp(player2,"pedra") == 0){
                printf("Player 1 ganhou");
            }else if (strcmp(player2,"tesoura") == 0){
                printf("Player 2 ganhou");
            }else{
                printf("Player 2 jogou errado");
            }
    }else
    {
        printf("Voce jogou errado");
    }
    return 0;

}