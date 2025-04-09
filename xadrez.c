#include <stdio.h>

int main(){

//variaveis para as peças

int rainha = 0;
int torre = 0;

//condição para o looping dos movimentos

printf("\n---------- RAINHA ----------\n");

while(rainha <= 7) //rainha se move 7 vezes para a direita
    {
    printf("Direita\n");
    rainha++;
}

printf("\n---------- BISPO ----------\n");

for(int bispo = 0; bispo < 7; bispo++) //bispo se move até 6 vezes na diagonal pra cima
    {
    printf("Diagonal pra cima\n");
}

for(int bispo = 0; bispo < 1; bispo++)
    {
    printf("Direita\n");
    }

    printf("\n---------- TORRE ----------\n");

while(torre <= 4) //torre se move 4 vezes em linha reta para a direita
    {
    printf("Direita\n");
    torre++;
}

     printf("\n---------- CAVALO ----------\n");


    // Dois passos para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Um passo para a esquerda
    int esquerda = 0;
    while (esquerda < 1) {
        printf("Esquerda\n");
        esquerda++;
    }
return 0;

}
