#pragma once
#include <stdlib.h>
#include <string.h>

#include "Enemy.h"

void CreateNewEnemies(Enemy* enemies, char* shape, int numberOfEnemies, int width)
{
	for (int i = 0; i < numberOfEnemies; ++i) {
		enemies[i].shape = shape;
		enemies[i].x = (3 * (i % 6)) + 2;
		enemies[i].y = (i / 3) + 1;
		enemies[i].direction = 0; // 0 left 1 right
		enemies[i].isDead = false;
	}
}

void DeleteEnemies(Enemy* enemy, int numberOfEnemies)
{
	for (int i = 0; i < numberOfEnemies; ++i) {
		enemy[i].x = 0;
		enemy[i].y = 0;
		enemy[i].isDead = false;
		free(enemy[i].shape);
	}
	free(enemy);
}

void UpdateEnemyPosition(Enemy* enemies, int numberOfEnemies, int width,int height, GameCondition *gameCondition)
{
	int live = 0;
	for (int i = 0; i < numberOfEnemies; ++i) {
		if (enemies[i].isDead == false) {

			live++;
			switch (enemies[i].direction) {
			case 0: // left
				enemies[i].x -= 1;
				if (enemies[i].x == 1) enemies[i].direction = 2;
				break;
			case 1: // right
				enemies[i].x += 1;
				if (enemies[i].x == width - 2) enemies[i].direction = 3;
				break;
			case 2: // left down
				enemies[i].y += 1;
				enemies[i].direction = 1;
				break;
			case 3: // right down
				enemies[i].y += 1;
				enemies[i].direction = 0;
				break;
			default:
				break;
			}

			if (enemies[i].y == height - 4) {
				gameCondition = Lose;
			}
		}
	}

	if (live == 0) {
		gameCondition = Win;
	}
}
