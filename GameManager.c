#include "GameManager.h"


void Update(Canvas* canvas, Player* player, Enemy* enemy, Bullet* bulletPool, int maxBullet, int numberOfEnemies, GameCondition *gameCondition)
{
	system("cls");
	ClearCanvas(canvas);
	UpdateBulletPosition(bulletPool, maxBullet);
	UpdateEnemyPosition(enemy, numberOfEnemies, canvas->width, canvas->height, gameCondition);
	UpdateCanvas(canvas, player, enemy,bulletPool,maxBullet,numberOfEnemies);
	Draw(canvas);	
	CollisionDetector(enemy, bulletPool, maxBullet, numberOfEnemies);
}
