#include "Canvas.h"
#include <string.h>
#include <stdio.h>

Canvas* InitCanvas(int width, int height)
{
	Canvas* canvas = (Canvas*)malloc(sizeof(Canvas));
	canvas->width = width;
	canvas->height = height;
	canvas->canvas = (char*)malloc(width * height + 1);
}

void Draw(Canvas* canvas)
{
	for (int i = 0; i < canvas->width; ++i) {
		for (int j = 0; j < canvas->height; ++j) {
			printf("%c", canvas->canvas[i * j]);
		}
		printf("\n");
	}
}

void UpdateCanvas(Canvas* canvas, Player* player, Enemy* enemy)
{

	strcpy_s(canvas->canvas[player->y * canvas->width + player->x], player->size,player->shape);

}

void ClearCanvas(Canvas* canvas)
{
	for (int i = 0; i < canvas->width * canvas->height; ++i) {
		canvas->canvas = 'X';
	}
}

void DeleteCanvas(Canvas* canvas)
{
	canvas->width = 0;
	canvas->height = 0;
	free(canvas->canvas);
	free(canvas);
}
