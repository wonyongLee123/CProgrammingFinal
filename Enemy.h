#pragma once
#include <stdbool.h>
#include "GameManager.h"

struct {
	char* shape;
	int x, y;
	bool isDead;
	int direction;

}typedef Enemy;


void CreateNewEnemies(Enemy *enemies,char* shape,int numberOfEnemies, int width);
void DeleteEnemies(Enemy* enemy, int numberOfEnemies);
void UpdateEnemyPosition(Enemy* enemies, int numberOfEnemies, int width, int height ,GameCondition* gameCondition);