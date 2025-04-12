#include <stdio.h>


void moverRainha(int rainha){                           //Recursividade para fazer os movimentos da rainha, do bispo, e da torre
if(rainha < 7){
    printf ("Esquerda\n");
    moverRainha(rainha + 1);
}
}

void moverBispo(int bispo){
if(bispo < 7){
    printf("Diagonal pra cima\n");
    moverBispo(bispo + 1);
}
}

void moverTorre(int torre){
if(torre <= 4){
    printf ("Direita\n");
    moverTorre(torre + 1);
}
}
int main(){

printf("\n---------- RAINHA ----------\n");

moverRainha(0);

printf("\n---------- TORRE ----------\n");

moverTorre(0);

printf("\n---------- BISPO ----------\n");

moverBispo(0);


printf("\n---------- CAVALO ----------\n");

for(int i = 0; i < 2; i++){
        printf("Baixo\n");                      //loop com for para fazer os movimentos do cavalo
}
        for(int j = 0; j < 1; j++){
        printf("Esquerda\n");
        }


return 0;
}
