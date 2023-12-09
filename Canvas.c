#include "Canvas.h"


void InitCanvas(Canvas* canvas,int width, int height)
{
	canvas->width = width;
	canvas->height = height;
	canvas->canvas = (char*)malloc((width * height) + 1);

	for (int i = 0; i < canvas->width* canvas->height; ++i) {
		canvas->canvas[i] = '#';
	}
}

void Draw(Canvas* canvas)
{
	
	for (int i = 0; i < canvas->height; ++i) {
		for (int j = 0; j < canvas->width; ++j) {
			printf(" %c ", canvas->canvas[j + i*canvas->width]);
		}
		printf("\n");
	}
}

void UpdateCanvas(Canvas* canvas, Player* player, Enemy* enemy,Bullet* bulletPool,int maxBullet, int numberOfEnemies)
{
	for (int i = 0; i < player->size; ++i) {
		canvas->canvas[player->y * canvas->width + player->x + i] = player->shape[i];
	}

	for (int i = 0; i < maxBullet; ++i) {
		if (bulletPool[i].isUsable) {
			canvas->canvas[bulletPool[i].y * canvas->width + bulletPool[i].x] = bulletPool[i].shape;
		}
	}

	for (int i = 0; i < numberOfEnemies; ++i) {
		if (enemy[i].isDead == false) {
			canvas->canvas[enemy[i].y * canvas->width + enemy[i].x] = enemy[i].shape;
		}
	}
}

void ClearCanvas(Canvas* canvas)
{
	for (int i = 1; i < canvas->height - 1; ++i) {
		for (int j = 1; j < canvas->width - 1; ++j) {
			canvas->canvas[j + i * canvas->width] = ' ';
		}
	}
}

void DeleteCanvas(Canvas* canvas)
{
	canvas->width = 0;
	canvas->height = 0;
	free(canvas->canvas);
	free(canvas);
}
