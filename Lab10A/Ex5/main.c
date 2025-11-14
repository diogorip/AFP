#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "player.h"

int main() {

    printf("=== TESTE DO MÓDULO PLAYER ===\n\n");

    int number1 = 7;
    char name1[] = "Cristiano Ronaldo";
    Position pos1 = FORWARD;
    bool mainTeam1 = true;

    Player player1 = playerCreate(&number1, name1, &pos1, &mainTeam1);
    printf("Teste 1: Criar e imprimir jogador 1\n");
    playerPrint(&player1);
    printf("\n");

    int number2 = 1;
    char name2[] = "Rui Patrício";
    Position pos2 = GOALKEEPER;
    bool mainTeam2 = true;

    Player player2 = playerCreate(&number2, name2, &pos2, &mainTeam2);
    printf("Teste 2: Criar e imprimir jogador 2\n");
    playerPrint(&player2);
    printf("\n");

    int number3 = 8;
    char name3[] = "Bruno Fernandes";
    Position pos3 = MIDFIELDER;
    bool mainTeam3 = true;

    Player player3 = playerCreate(&number3, name3, &pos3, &mainTeam3);

    int number4 = 3;
    char name4[] = "Pepe";
    Position pos4 = DEFENDER;
    bool mainTeam4 = false;

    Player player4 = playerCreate(&number4, name4, &pos4, &mainTeam4);

    PlayerList list;
    list.actualSize = 0;

    list.elements[list.actualSize++] = player1;
    list.elements[list.actualSize++] = player2;
    list.elements[list.actualSize++] = player3;
    list.elements[list.actualSize++] = player4;

    printf("Teste 3: Imprimir lista de jogadores\n");
    playerListPrint(&list);

    return EXIT_SUCCESS;
}