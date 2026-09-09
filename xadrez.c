#include <stdio.h>

/*

    Desafio de Xadrez - Nível Mestre

    Torre  -> recursividade
    Bispo  -> recursividade + loops aninhados
    Rainha -> recursividade
    Cavalo -> loops aninhados + break/continu\e
*/


// ============================================================
// MOVIMENTO DA TORRE - RECURSIVIDADE
// ============================================================

void moverTorre(int casas) {

    // Caso base: quando não houver mais casas,
    // a função encerra a recursividade.
    if (casas == 0) {
        return;
    }

    // Movimenta uma casa para a direita.
    printf("Direita\n");

    // Chama a própria função novamente,
    // diminuindo uma casa.
    moverTorre(casas - 1);
}


// ============================================================
// MOVIMENTO DO BISPO - RECURSIVIDADE + LOOPS ANINHADOS
// ============================================================

void moverBispo(int casas) {

    // Caso base da recursividade.
    if (casas == 0) {
        return;
    }

    /*
        O Bispo se movimenta na diagonal.

        Para cada casa:
        - Cima
        - Direita

        O loop externo representa o movimento vertical.
        O loop interno representa o movimento horizontal.
    */

    for (int vertical = 0; vertical < 1; vertical++) {

        printf("Cima\n");

        for (int horizontal = 0; horizontal < 1; horizontal++) {

            printf("Direita\n");
        }
    }

    // Chama a função novamente para movimentar
    // a próxima casa da diagonal.
    moverBispo(casas - 1);
}


// ============================================================
// MOVIMENTO DA RAINHA - RECURSIVIDADE
// ============================================================

void moverRainha(int casas) {

    // Caso base da recursividade.
    if (casas == 0) {
        return;
    }

    // Movimenta uma casa para a esquerda.
    printf("Esquerda\n");

    // Chama a própria função novamente,
    // diminuindo a quantidade de casas.
    moverRainha(casas - 1);
}


// ============================================================
// MOVIMENTO DO CAVALO - LOOPS ANINHADOS
// ============================================================

void moverCavalo() {

    /*
        O Cavalo deverá realizar o seguinte movimento:

        2 casas para cima
        1 casa para a direita

        O loop externo controla o movimento vertical.
        O loop interno controla o movimento horizontal.
    */

    int cima = 2;
    int direita = 1;

    for (int vertical = 0; vertical < cima; vertical++) {

        // Imprime Cima para cada uma das duas casas.
        printf("Cima\n");

        for (int horizontal = 0; horizontal < direita; horizontal++) {

            /*
                A direita só acontece depois que
                o Cavalo percorreu as duas casas para cima.
            */

            if (vertical != cima - 1) {

                // Enquanto não chegou na última casa,
                // continua o loop.
                continue;
            }

            printf("Direita\n");

            // Encerra o loop interno após mover para a direita.
            break;
        }
    }
}


// ============================================================
// FUNÇÃO PRINCIPAL
// ============================================================

int main() {

    // Quantidade de casas que cada peça irá percorrer.
    // Os valores são definidos diretamente no código.

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;


    // ========================================================
    // TORRE
    // ========================================================

    printf("\nMovimento da Torre:\n");

    moverTorre(casasTorre);


    // ========================================================
    // BISPO
    // ========================================================

    printf("\nMovimento do Bispo:\n");

    moverBispo(casasBispo);


    // ========================================================
    // RAINHA
    // ========================================================

    printf("\nMovimento da Rainha:\n");

    moverRainha(casasRainha);


    // ========================================================
    // CAVALO
    // ========================================================

    printf("\nMovimento do Cavalo:\n");

    moverCavalo();


    return 0;
}