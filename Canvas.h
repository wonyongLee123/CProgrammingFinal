#pragma once

#include "Player.h"
#include "Enemy.h"
#include "BulletPool.h"


struct {
	char* canvas;
	int width;
	int height;
}typedef Canvas;

Canvas* InitCanvas(int width, int height);
void Draw(Canvas* canvas);
void UpdateCanvas(Canvas* canvas, Player* player, Enemy* enemy, Bullet* bulletPool, int maxBullet, int numberOfEnemies);
void ClearCanvas(Canvas* canvas);
void DeleteCanvas(Canvas* canvas);