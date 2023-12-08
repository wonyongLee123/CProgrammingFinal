#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "GameManager.h"
#include "InputManager.h"
#include "BulletPool.h"

int main(void) {

	const int width = 10;
	const int height = 21;
	const int bulletMax = 5;
	const int numberOfEnemies = 5;

	Canvas* canvas;
	canvas = InitCanvas(width, height);

	Player* player;
	player = CreateNewPlayer("<^>", width / 2, height - 1);	

	Enemy* enemies = (Enemy*)malloc(sizeof(Enemy) * numberOfEnemies);
	CreateNewEnemies(enemies,'*', numberOfEnemies, numberOfEnemies, width);

	Bullet* bulletPool = (Bullet*)malloc(sizeof(Bullet) * bulletMax);
	InitBulletPool(bulletPool,'^', bulletMax);

	GameCondition gameCondition = onLoop;

	while (true) {
		InputManager(player,bulletPool,bulletMax,width, height);
		Update(canvas,player, enemies,bulletPool,bulletMax,numberOfEnemies, &gameCondition);
		Sleep(100);

		if (gameCondition == Win || gameCondition == Lose) break;
	}
	


	DeletePlayer(player);
	DeleteEnemies(enemies,numberOfEnemies);
	DeleteCanvas(canvas);
	DeleteBulletPool(bulletPool, bulletMax);

	
	return 0;
}