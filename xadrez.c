#include <stdio.h>

int main(){

//variaveis para as peças

int rainha = 0;
int torre = 0;

//condição para o looping dos movimentos

printf("\n---------- RAINHA ----------\n");

while(rainha <= 7)
    {
    printf("Direita\n");
    rainha++;
}

printf("\n---------- BISPO ----------\n");

for(int bispo = 0; bispo < 7; bispo++)
    {
    printf("Diagonal pra cima\n");
}

for(int bispo = 0; bispo < 1; bispo++)
    {
    printf("Direita\n");
    }

    printf("\n---------- TORRE ----------\n");

while(torre <= 4)
    {
    printf("Direita\n");
    torre++;
}

return 0;

}
