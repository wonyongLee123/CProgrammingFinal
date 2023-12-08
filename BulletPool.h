#pragma once
#include <stdbool.h>


struct {
	char* shape;
	int x;
	int y;
	bool isUsable;
}typedef Bullet;

void InitBulletPool(Bullet* bulletPool,char* shape ,int maxBullet);
void DeleteBulletPool(Bullet* bulletPool, int maxBullet);
void UpdateBulletPosition(Bullet* bulletPool, int maxBullet);
void ShootBullet(Bullet* bulletPool, int posX, int maxBullet, int height);