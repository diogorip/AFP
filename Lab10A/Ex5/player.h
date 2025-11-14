#pragma once

#include <stdbool.h>

typedef enum {
    GOALKEEPER,
    DEFENDER,
    MIDFIELDER,
    FORWARD
} Position;

typedef struct {
    int number;
    char name[81];
    Position position;
    bool mainTeam;
} Player;

#define PLAYER_LIST_MAX 100
typedef struct playerList {
    Player elements[PLAYER_LIST_MAX];
    int actualSize;
} PlayerList;

Player playerCreate(int *number, char *name, Position *position, bool *mainTeam);

void playerPrint(Player *player);

void playerListPrint(PlayerList *list);