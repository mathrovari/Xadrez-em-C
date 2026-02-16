#include <stdio.h>

// ==============================
// FUNÇÕES RECURSIVAS
// ==============================

// FUNÇÃO TORRE
void moverTorre(int casas){

    if(casas <= 0){
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

// FUNÇÃO RAINHA
void moverRainha(int casas){

    if(casas <= 0){
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// FUNÇÃO BISPO
void moverBispo(int casas){

    if(casas <= 0){
        return;
    }

    printf("Cima - Direita\n");
    moverBispo(casas - 1);
}



int main() {

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // CAVALO 
    printf("\nMovimento do Cavalo:\n");

    int movimentoVertical = 3;
    int movimentoHorizontal = 1;

    for(int i = 1; i <= movimentoVertical; i++){

        printf("Cima\n");

        // Só executa horizontal após completar vertical
        if(i < movimentoVertical){
            continue; // volta para o início do loop
        }

        for(int j = 1; j <= movimentoHorizontal; j++){
            printf("Direita\n");
        }
    }

    return 0;
}
