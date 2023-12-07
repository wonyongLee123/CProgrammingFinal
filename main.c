#include <stdio.h>

#include "GameManager.h"


int main(void) {

	Player* player;
	Enemy* enemy;
	Canvas* canvas;
	
	player = CreateNewPlayer("<^>");
	enemy = CreateNewEnemy("O");
	canvas = InitCanvas(10, 20);

	while (true) {
		Update(canvas,player,enemy);
	}
	
	DeletePlayer(player);
	DeleteEnemy(enemy);
	DeleteCanvas(canvas);

	return 0;
}