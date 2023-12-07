#pragma once
#include <stdlib.h>
#include <string.h>

#include "Enemy.h"

Enemy* CreateNewEnemy(char* shape)
{
	Enemy* enemy = (Enemy*)malloc(sizeof(Enemy));
	enemy->shape = (char*)malloc(strlen(shape) + 1);
	enemy->size = strlen(shape);
}

void DeleteEnemy(Enemy* enemy)
{
	free(enemy->shape);
	enemy->size = 0;
	enemy->x = 0;
	enemy->y = 0;
	free(enemy);
}
