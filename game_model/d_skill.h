#pragma once
#include "Role.h"
#include "Monster.h"
#include "character.h"
#include "level.h"
class d_skill {
private:
	level l;
	static bool inCD; // ººƒ‹¿‰»¥ =false
public:
	bool isInCD();
	static void StartCD();
	static void EndCD();
	void skill(Role r, Monster g, d_skill d_skill, character c);
};
bool d_skill::inCD = false;