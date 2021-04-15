#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int contador = 1;
    int limit = 10;

    while(contador <= limit){
        printf("Estamos no primeiro loop\n");
        if(contador == 3){
            int contador2 = 5;
            while(contador2 > 0){
                printf("Estamos no segundo loop\n");
                contador2--;
            }
        }
        contador++;
    }
    return 0;

}