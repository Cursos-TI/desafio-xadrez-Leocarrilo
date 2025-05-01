#include <stdio.h>

//Desafio Nivel Mestre - Tema 3

void movimentoTorre (int t) {
   if (t>0){
        printf("Direita\n");
        movimentoTorre(t-1);
    }
   }

void movimentoBispo (int b) {
    if (b>0){
        printf("Cima, Direita\n");
        movimentoBispo(b-1);
    }
}

void movimentoRainha (int r) {
    if (r>0){
        printf("Esquerda\n");
        movimentoRainha(r-1);
    }
}

int main () {

    const int torre = 5, bispo = 5, rainha = 8, cavaloV = 2, cavaloH = 1;

    printf("A torre move-se nessa direção:\n");

    movimentoTorre(torre);

    printf("\nO bispo move-se nessa direção:\n");

    movimentoBispo(bispo);

    printf("\nA rainha move-se nessa direção:\n");

    movimentoRainha(rainha);

    printf("\nO cavalo move-se nessa direção:\n");


    for (int i = 1; i <= 10; i++){

        if (i > cavaloH){
            break;
        }

        for (int j = 1; j <= 10; j++){
            if (j > cavaloV){
                break;
            }
            printf("Cima\n");
        }

        printf("Direita\n");
    }


    return 0;

}