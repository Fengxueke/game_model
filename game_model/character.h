#pragma once
#include "Map.h"
#include "Monster.h"
#include "game_model.h"
class character {
     public:
		 character();
		 static int L_rect_x; //java里面是 final static
		 static int L_rect_y;
		 Map map;
		 Role R;
		 Monster G;
		 Main m;
		 void init();//初始化函数
		 void randomMonster();
		 void mapset();
};
int character::L_rect_x = 300;
int character::L_rect_y = 300;