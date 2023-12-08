#include "InputManager.h";

void InputManager(Player* player,Bullet *bulletPool, int maxBullet, int width, int height)
{
	if (_kbhit()) {
		char ch;
		ch = _getch();

        switch (ch) {
        case 32: // space == shoot 
            ShootBullet(bulletPool, player->x, maxBullet,height);
            break;
        case 75: // left arrow
            if (player->x > 1) {
                player->x -= 1;
            }            
            break;
        case 77: // right arrow
            if (player->x+player->size < width-1) {
                player->x += 1;
            }
            break;
        default:
            break;
        }
	}

}
