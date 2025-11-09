#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "player.h"

int main() {

    Player player1 = playerCreate(7, "Cristiano Ronaldo", FORWARD, true);
    
    Player player2 = playerCreate(1, "Rui Patrício", GOALKEEPER, true);
    
    printf("=== JOGADORES CRIADOS ===\n\n");
    playerPrint(player1);
    printf("\n");
    playerPrint(player2);

    return EXIT_SUCCESS;
}