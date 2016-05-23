#pragma once
#include "game_model.h"

#include "Role.h"
#include "Monster.h"
#include "Map.h"
#include "character.h"
#include "startgame.h"
#include "attackGuai.h"
#include "d_skill.h"
#include "random.h"
#include "Remove.h"
#include "comeToGuai.h"
#include "level.h"
//#define Role r = new Role::Role(NULL, 0, 0, 0, 0, 0, 0, 0, 1);
class Main {
private:
	static bool g_gongji;
	static bool r_gongji;
	static bool canLook;
	static int biao1;
	static int biao2;

	static Role r;
	static Monster g;
	static Main m;
	static Map map;
	static character c;

	static startgame s;
	static attackGuai atk;
	static d_skill dskill;
	static random ran;
	static Remove rm;
	static comeToGuai ctg;
	//	static database db = new database(con, sql, rs, level, exp, skill);
	static level l;

	//Main();
};
bool Main::g_gongji = false;
bool Main::r_gongji = false;
bool Main::canLook = false;
int Main::biao1 = 0;
int Main::biao2 = 0;
class Role r(NULL, 0, 0, 0, 0, 0, 0, 0, 1);
class Monster g(NULL, 0, NULL, 0, 0, 0, 0, 0, 0, 0);
class Main m;
class Map map(0, 0, 0);
class character c;
class startgame s(r, m, g, c, false, false, false, 0, 0);
class attackGuai atk(r, c, 0,0);
class d_skill dskill;
class random ran(r, g, m, c);
class Remove rm(r, m, g, c, false, false, false, 0, 0);
class comeToGuai ctg(r, g, c);
class level l;