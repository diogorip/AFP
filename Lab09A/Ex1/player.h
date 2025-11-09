#pragma once

#include <stdbool.h>

typedef enum {
    GOALKEEPER,
    DEFENDER,
    MIDFIELDER,
    FORWARD
} Position;

typedef struct {
    short number;
    char name[81];
    Position position;
    bool mainTeam;
} Player;

Player playerCreate(int number, char name[], Position position, bool mainTeam);

void playerPrint(Player player);