#include <stdio.h>

//Desafio Nivel Novato - Tema 3

int main () {

    const int torre = 5, bispo = 5, rainha = 8, cavaloV = 2, cavaloH = 1;
    int i, j = 0, k = 0, l = 1, m;


    printf("A torre move-se nessa direção:\n");

    for (i = 0; i < torre; i++) {

        printf("Direita\n");

    }

    printf("\nO bispo move-se nessa direção:\n");

    while (j < bispo) {

        printf("Cima, Direita\n");
        j++;

    }

    printf("\nA rainha move-se nessa direção:\n");

    do {

        printf("Esquerda\n");
        k++;
    } while (k < rainha);

    printf("\nO cavalo move-se nessa direção:\n");

    do {

        for (m = 1; m <= 2; m++){
            printf("Baixo\n");
        }

        printf("Esquerda\n");
        l++;

    } while (l<=1);


    return 0;

}