#include "BulletPool.h"

void InitBulletPool(Bullet* bulletPool,char* shape, int maxBullet)
{
	for (int i = 0; i < maxBullet; ++i) {
		bulletPool[i].shape = shape;
		bulletPool[i].x = -1;
		bulletPool[i].y = -1;
		bulletPool[i].isUsable = false;
	}
}

void DeleteBulletPool(Bullet* bulletPool, int maxBullet)
{
	for (int i = 0; i < maxBullet; ++i) {
		bulletPool[i].x = -1;
		bulletPool[i].y = -1;
		bulletPool[i].isUsable = false;
	}
	free(bulletPool);
}

void UpdateBulletPosition(Bullet* bulletPool, int maxBullet)
{
	for (int i = 0; i < maxBullet; ++i) {
		if (bulletPool[i].isUsable) {
			bulletPool[i].y -= 1;
			if (bulletPool[i].y == 0) {
				bulletPool[i].isUsable = false;
			}
		}
	}
}

void ShootBullet(Bullet* bulletPool, int posX, int maxBullet,int height)
{
	for (int i = 0; i < maxBullet; ++i) {
		if (bulletPool[i].isUsable == false) {
			bulletPool[i].x = posX + 1;
			bulletPool[i].y = height - 2;
			bulletPool[i].isUsable = true;
			return;
		}
	}
}
