#pragma once
#include <stdbool.h>

struct {
	char* shape;
	int size;
	int x, y;
}typedef Player;

struct {
	char* shape;
	int x;
	int y;
	bool isUsable;
}typedef Bullet;

struct {
	char* canvas;
	int width;
	int height;
}typedef Canvas;

struct {
	char* shape;
	int x, y;
	bool isDead;
	int direction;
}typedef Enemy;