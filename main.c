#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int horaCinema = 20;
    int horaAtual = 20;

    //Posso entrar no cinema?
    if(horaAtual < horaCinema + 30){
        printf("Passou");
    }else if(horaAtual > horaCinema - 30){
        printf("Porta nem abriu");
    }else{
        printf("O horario esta certo");
    }

    return 0;

}