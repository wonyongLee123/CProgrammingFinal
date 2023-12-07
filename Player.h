#pragma once

#include <stdlib.h>
#include <stdbool.h>

struct {
	char* shape;
	int size;
	int x, y;
}typedef Player;

Player* CreateNewPlayer(char* shape);
void DeletePlayer(Player* player);