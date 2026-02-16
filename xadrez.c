#include <stdio.h>

int main() {

    // ==============================
    // TORRE - usando FOR
    // Move 5 casas para a direita
    // ==============================

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for(int i = 1; i <= casasTorre; i++){
        printf("Direita\n");
    }


    // ==============================
    // BISPO - usando WHILE
    // Move 5 casas na diagonal
    // (Cima + Direita)
    // ==============================

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    while(contadorBispo <= casasBispo){
        printf("Cima ");
        printf("- Direita\n");
        contadorBispo++;
    }

    // ==============================
    // RAINHA - usando DO-WHILE
    // Move 8 casas para a esquerda
    // ==============================

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    do{
        printf("Esquerda\n");
        contadorRainha++;
    }while(contadorRainha <= casasRainha);


    // ===================================================
    // CAVALO - usando LOOPS (for + while)
    // Movimento em "L":
    // 3 casas para Baixo
    // 1 casa para Esquerda
    // ===================================================

    printf("\nMovimento do Cavalo:\n\n");

    int movimentoVertical = 3;
    int movimentoHorizontal = 1;

    // Loop externo (FOR obrigatório)
    for(int i = 1; i <= movimentoVertical; i++){

        printf("Baixo\n");

        // Quando terminar as 3 casas para baixo,
        // executa o movimento horizontal
        if(i == movimentoVertical){

            int contadorHorizontal = 1;

            while(contadorHorizontal <= movimentoHorizontal){
                printf("Esquerda\n");
                contadorHorizontal++;
            }

        }
    }

    return 0;
}
