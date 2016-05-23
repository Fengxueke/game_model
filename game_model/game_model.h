#pragma once
#include "stdafx.h"
#include "startgame.h"
#include "random.h"
#include "remove.h"
class Main:public startgame {
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
	Main() :startgame(r, m, g, c, false, false, false, 0, 0) {}
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
class attackGuai atk(r, c, 0,0);
class d_skill dskill;
class random ran(r, g, m, c);
class Remove rm(r, m, g, c, false, false, false, 0, 0);
class comeToGuai ctg(r, g, c);
class level l;