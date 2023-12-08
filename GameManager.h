#pragma once
#include "Canvas.h"
#include "Player.h"
#include "BulletPool.h"
#include "PhysicsManager.h"

typedef enum {
	onLoop = 0,
	Win = 1,
	Lose = 2
}GameCondition;

void Update(Canvas* canvas, Player* player, Enemy* enemy, Bullet* bulletPool, int maxBullet, int numberOfEnemies, GameCondition *gamecondition);