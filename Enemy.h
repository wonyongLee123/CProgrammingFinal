
#pragma once
#include "commonStruct.h"




void CreateNewEnemies(Enemy *enemies,char* shape,int numberOfEnemies, int width);
void DeleteEnemies(Enemy* enemy, int numberOfEnemies);
void UpdateEnemyPosition(Enemy* enemies, int numberOfEnemies, int width, int height, int* gameCondition);