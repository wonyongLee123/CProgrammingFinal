#include <string.h>

#include "Player.h"

Player* CreateNewPlayer(char* shape)
{
	Player* player = (Player*)malloc(sizeof(Player));
	player->shape = (char*)malloc(strlen(shape)+1);
	player->size = strlen(shape);
	return player;
}

void DeletePlayer(Player* player) {
	player->size = 0;
	player->x = 0;
	player->y = 0;
	free(player->shape);
	free(player);
}