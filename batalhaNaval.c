#include <stdio.h>
#include <locale.h>
#include <windows.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    // Nível Novato - Posicionamento dos Navios
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
    };

    int navio1 [3] = {3,3,3};//horizontal
    int navio2 [3] = {3,3,3};//vertical
    int navio3 [3] = {3,3,3};//diagonal
    int navio4 [3] = {3,3,3};//diagonal

    //Posicionamento dos navios
    for (int i = 0; i < 3; i++){
        if (tabuleiro[0][2+i] == 3){
            printf("Posicionamento do navio 1 inválido!\n");
            break;
        } else {
            tabuleiro[0][2+i] = 3;//Navio 1 
        }
        if (tabuleiro[2+i][1] == 3){
            printf("Posicionamento do navio 2 inválido!\n");
            break;
        } else {
            tabuleiro[2+i][1] = 3;//Navio 2
        }
        if (tabuleiro[3+i][4+i] == 3){
            printf("Posicionamento do navio 3 inválido!\n");
            break;
        } else {
            tabuleiro[3+i][4+i] = 3;//Navio 3
        } 
        if (tabuleiro[9-i][3+i] == 3){
            printf("Posicionamento do navio 4 inválido!\n");
            break;
        } else {
            tabuleiro[9-i][3+i] = 3;//Navio 4
        }
    }
    //Exibição do tabuleiro
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
