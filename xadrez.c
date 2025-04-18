#include <stdio.h>

//Desafio Nivel Novato - Tema 3

int main () {

    //Declaração de constantes e variáveis
    const int torre = 5, bispo = 5, rainha = 8;
    int i, j = 0, k = 0;

    //Movimentação da Torre
    printf("A torre move-se nessa direção:\n");

    for (i = 0; i < torre; i++) {

        printf("Direita\n");

    }

    //Movimentação do Bispo
    printf("\nO bispo move-se nessa direção:\n");

    while (j < bispo) {

        printf("Cima, Direita\n");
        j++;

    }

    //Movimentação da Rainha
    printf("\nA rainha move-se nessa direção:\n");

    do {

        printf("Esquerda\n");
        k++;
    } while (k < rainha);


    return 0;

}