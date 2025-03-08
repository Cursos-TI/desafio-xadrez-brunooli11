#include <stdio.h>

void torreMover(int torre){
    if (torre > 0)
    {
        printf("Torre para a direita\n");
        torreMover(torre - 1); // movimento torre
    }
}

void rainhaMover(int rainha){
    if (rainha > 0)
    {
        printf("Rainha para a esquerda\n");
        rainhaMover(rainha - 1); // movimento rainha
    }
}

int main() {
    torreMover(5);
    rainhaMover(8);

    int i, j, cavalo = 3; 

    for (i = 0; i < 5; i++) {
        printf("Bispo para cima\n");
        printf("Bispo para direita\n");
    } // movimento Bispo


    while (cavalo--) {
        for (i = 1; i <= 2; i++) {
            printf("Cavalo para cima\n");
        }
        printf("Cavalo para a direita\n");
        cavalo = 0;
    }

    return 0;
}
