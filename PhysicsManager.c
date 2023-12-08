#include "PhysicsManager.h"

void CollisionDetector(Enemy* enemies, Bullet* bulletPool, int maxBullet, int numberOfEnemies)
{
	for (int i = 0; i < numberOfEnemies; ++i) {
		if (enemies[i].isDead == false) {
			for (int j = 0; j < maxBullet; ++j) {
				if (bulletPool[j].x == enemies[i].x &&
					bulletPool[j].y == enemies[i].y) { // collided
					
					enemies[i].isDead = true;
					bulletPool[j].isUsable = false;
				}
			}
		}
	}
}
