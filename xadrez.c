#include <stdio.h>
int main (){

    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    for (torre = 1; torre <= 5; torre++)
    {
        printf("Torre move para direita\n");
    }
    
    while (bispo <= 5)
    {
        printf("Bispo move para cima e direita\n");
        bispo++;
    }

    do
    {
        printf("Rainha move para esquerda\n");
        rainha++;
    } while (rainha <= 8);

    while (cavalo--)
    {
        for (int i = 1; i <= 2; i++)
        {
            printf("Cavalo para baixo\n");
        }
        printf("Cavalo para a esquerda\n");
    }
    
    
    
    return 0;
}