#pragma once

#include "commonStruct.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



void InitCanvas(Canvas* canvas, int width, int height);
void Draw(Canvas* canvas);
void UpdateCanvas(Canvas* canvas, Player* player, Enemy* enemy, Bullet* bulletPool, int maxBullet, int numberOfEnemies);
void ClearCanvas(Canvas* canvas);
void DeleteCanvas(Canvas* canvas);