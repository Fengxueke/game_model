#pragma once
#include "game_model.h"
class Map{
private:
	int X;
	int Y;
	int MapExp;
	character c;
public:
	Map(int x, int y, int mapExp);
	void mapExp();
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	int getMapExp();
	void setMapExp(int mapExp);
	void show();
};