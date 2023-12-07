#pragma once

struct {
	char* shape;
	int size;
	int x, y;
}typedef Enemy;

Enemy* CreateNewEnemy(char* shape);
void DeleteEnemy(Enemy* enemy);