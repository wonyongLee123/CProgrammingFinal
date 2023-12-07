#include "GameManager.h"

void Update(Canvas* canvas, Player* player, Enemy* enemy)
{
	ClearCanvas(canvas);
	UpdateCanvas(canvas, player, enemy);
	Draw(canvas);
}
