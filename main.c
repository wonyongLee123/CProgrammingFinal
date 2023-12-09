#include <stdio.h>

#include "GameManager.h"
#include "InputManager.h"
#include "Canvas.h"
#include "Enemy.h"
#include "Player.h"
#include "BulletPool.h"

int main(void) {

	printf("난이도를 직접 설정합니다.\n 적들의 수: ");
	int numberOfEnemies = 5;
	scanf_s("%d", &numberOfEnemies);

	const int width = 10;
	const int height = 21;
	const int bulletMax = 5;
	

	Canvas* canvas = (Canvas*)malloc(sizeof(Canvas));
	InitCanvas(canvas,width, height);

	Player* player;
	player = CreateNewPlayer("<^>", width / 2, height - 1);	

	Enemy* enemies = (Enemy*)malloc(sizeof(Enemy) * numberOfEnemies);
	CreateNewEnemies(enemies,'*', numberOfEnemies, width);

	Bullet* bulletPool = (Bullet*)malloc(sizeof(Bullet) * bulletMax);
	InitBulletPool(bulletPool,'^', bulletMax);

	int gameCondition = 0;

	while (true) {
		InputManager(player,bulletPool,bulletMax,width, height);
		Update(canvas,player, enemies,bulletPool,bulletMax,numberOfEnemies, &gameCondition);
		Sleep(100);

		if (gameCondition == 1 || gameCondition == 2) break;
	}
	
	system("cls");

	if (gameCondition == 1) {
		printf(" WIN ");
	}
	else {
		printf(" LOSE ");
	}


	DeletePlayer(player);
	DeleteEnemies(enemies,numberOfEnemies);
	DeleteCanvas(canvas);
	DeleteBulletPool(bulletPool, bulletMax);

	
	return 0;
}