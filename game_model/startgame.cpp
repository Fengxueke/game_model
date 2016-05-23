#include "stdafx.h"
#include "startgame.h"
#include <iostream>
using namespace std;
startgame::startgame(Role r, Main m, Monster g, character c, bool g_gongji, bool r_gongji, bool canLook, int biao1, int biao2)
{
	startgame::r = r;
	startgame::m = m;
	startgame::g = g;
	startgame::c = c;
	startgame::g_gongji = g_gongji;
	startgame::r_gongji = r_gongji;
	startgame::canLook = canLook;
	startgame::biao1 = biao1;
	startgame::biao2 = biao2;
}

void startgame::ai()
{
	if (c.R.getRo_x() > c.G.getG_x()) {
		if ((c.R.getRo_x() - c.G.getG_x() > g.L_rect_x / 2)) {
			// 逃出可视范围
			canLook = false;
			g_gongji = false;
			return;
		}
		if ((c.R.getRo_x() - c.G.getG_x() <= g.L_rect_x / 2)) {
			// 进入可视范围
			canLook = true;

			c.G.setG_x(c.G.getG_x() + 15);
			if (c.R.getRo_y() > c.G.getG_y()) {
				c.G.setG_y(c.G.getG_y() + 15);
			}
			else {
				c.G.setG_y(c.G.getG_y() - 15);
			}
		}
		if ((c.R.getRo_x() - c.G.getG_x() > c.G.distance / 2)) {
			// 逃出攻击范围
			g_gongji = false;
			return;
		}
		if ((c.R.getRo_x() - c.G.getG_x() <= c.G.distance / 2)) {
			// 进入攻击范围

			// 攻击c.c.R.getName()
			g_gongji = true;
		}

	}
	else {
		if ((c.G.getG_x() - c.R.getRo_x()) > g.L_rect_x / 2) {
			// 逃出可视范围
			canLook = false;
			g_gongji = false;
			return;
		}
		if ((c.G.getG_x() - c.R.getRo_x() <= g.L_rect_x / 2)) {
			// 进入可视范围
			canLook = true;

			c.G.setG_x(c.G.getG_x() - 15);
			if (c.R.getRo_y() > c.G.getG_y()) {
				c.G.setG_y(c.G.getG_y() + 15);
			}
			else {
				c.G.setG_y(c.G.getG_y() - 15);
			}
		}

		if ((c.G.getG_x() - c.R.getRo_x() > c.G.distance / 2)) {
			// 逃出攻击范围
			g_gongji = false;
			return;
		}

		if ((c.G.getG_xue() > 0 && c.G.getG_x() - c.R.getRo_x() <= c.G.distance / 2)) {
			// 进入攻击范围

			// 攻击c.c.R.getName()
			g_gongji = true;

		}

	}
}

void startgame::start()
{
	while (1>0) {
		try {
			//Thread.sleep(1000);

			if (c.R.getR_xue() > 0 && c.G.getG_xue()>0) {
				ai();
			}
			if (canLook && biao1 == 0 && c.G.getG_xue()>0) {
				biao1 = 1;
				cout << "已进入" + c.G.getName() + "的可视范围,"
					+ c.G.getName() + "正在靠近....." << endl;
			}
			while (c.R.getR_xue() > 0 && g_gongji&&c.G.getG_xue()>0) {
				if (g_gongji && biao2 == 0) {
					biao2 = 2;
					cout << "已进入" + c.G.getName() + "的攻击范围,"
						+ c.G.getName() + "正在攻击...." << endl;
				}
				//Thread.sleep(c.G.getTime());
				c.R.setR_xue(c.R.getR_xue() - c.G.getG_skill()
					+ c.R.getR_defence() / 5);
				if (c.G.getG_xue()>0) {
					ai();
				}
				// m.attackGuai(r, g);
				cout << c.G.getName() + "正在攻击，释放技能："
					<< c.G.getSname() << endl;
				cout << c.R.getName() + "的血量剩余为"
					<< c.R.getR_xue() << endl;
				if (c.R.getR_xue() <= 0) {
					cout << "玩家死亡！游戏结束！" << endl;
					//						c.R.setEXP(c.R.getEXP()+c.G.getG_exp() << endl;
					cout << "你共击败了" + c.G.killcount << "个怪物！" << endl;
				}
				if (c.G.getG_xue() <= 0) {
					cout << c.G.getName() + "死亡！" << endl;
					break;
				}
			}
		}

		catch (...) {
               //
		}
	}
}
