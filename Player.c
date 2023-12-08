#include <string.h>

#include "Player.h"

Player* CreateNewPlayer(char* shape, int x, int y)
{
	Player* player = (Player*)malloc(sizeof(Player));
	player->shape = (char*)malloc(strlen(shape) + 1);
	strcpy_s(player->shape, strlen(shape)+1, shape);
	player->size = strlen(shape);
	player->x = x - (player->size/2);
	player->y = y - 1;

	return player;
}

void DeletePlayer(Player* player) {
	player->size = 0;
	player->x = 0;
	player->y = 0;
	free(player->shape);
	free(player);
}