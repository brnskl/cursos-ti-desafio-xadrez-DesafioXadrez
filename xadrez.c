#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   // Quantidade de casas que cada peça irá percorrer UTILIZANDO FOR
   int torre = 5;
   int bispo = 5;
   int rainha = 8;


  // MOVIMENTO DA TORRE USANDO FOR
  printf("\nMovimento da torre: \n");
 
  for (int i = 0; i < torre; i++) {
    printf("Direita\n"); //Imprime a direção do movimento
  }

    printf("\n");

  //MOVIMENTO DO BISPO UTILIZANDO WHILE
  printf("\nMovimento do bispo: \n");

  int i = 0;

  while (i < bispo) {
    printf("Cima Direita\n");
    i++;
  }

    printf("\n");

  // MOVIMENTO DA RAINHA UTILIZANDO DO WHILE
  printf("\nMovimento Rainha:\n");

  i = 0;

  do {
    printf("Esquerda\n");
    i++;

   } while (i < rainha);

    printf("\n");

  // MOVIMENTO DO CAVALO UTILIZANDO FOR E WHILE
  printf("\nMovimento Cavalo:\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

     for (int i = 0; i < casasBaixo; i++) {

        printf("Baixo\n");

        if (i == casasBaixo - 1) {

            int esquerda = 0;

            while (esquerda < casasEsquerda) {
                printf("Esquerda\n");
                esquerda++;
            }
        }
    }

    return 0;
}
