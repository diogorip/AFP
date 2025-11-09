#include "player.h"
#include <stdio.h>
#include <string.h>

Player playerCreate(int number, char name[], Position position, bool mainTeam) {
    Player player;
    
    player.number = (short)number;
    strncpy(player.name, name, 80);
    player.name[80] = '\0';
    player.position = position;
    player.mainTeam = mainTeam;
    
    return player;
}

void playerPrint(Player player) {
    const char *positionStr;
    switch(player.position) {
        case GOALKEEPER:
            positionStr = "Guarda-redes";
            break;
        case DEFENDER:
            positionStr = "Defesa";
            break;
        case MIDFIELDER:
            positionStr = "Médio";
            break;
        case FORWARD:
            positionStr = "Avançado";
            break;
        default:
            positionStr = "Desconhecida";
            break;
    }
    
    printf("========================================\n");
    printf("Jogador #%d\n", player.number);
    printf("Nome: %s\n", player.name);
    printf("Posição: %s\n", positionStr);
    printf("Equipa Principal: %s\n", player.mainTeam ? "Sim" : "Não");
    printf("========================================\n");
}