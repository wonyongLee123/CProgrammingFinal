#pragma once

#include <stdlib.h>

#include "commonStruct.h"

Player* CreateNewPlayer(char* shape, int x, int y);
void DeletePlayer(Player* player);