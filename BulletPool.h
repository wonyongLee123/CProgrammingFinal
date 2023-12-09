#pragma once
#include <stdlib.h>

#include "commonStruct.h"


void InitBulletPool(Bullet* bulletPool,char* shape ,int maxBullet);
void DeleteBulletPool(Bullet* bulletPool, int maxBullet);
void UpdateBulletPosition(Bullet* bulletPool, int maxBullet);
void ShootBullet(Bullet* bulletPool, int posX, int maxBullet, int height);