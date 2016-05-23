// game_model.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include "game_model.h"
using namespace std;

int main()
{


	cout << "输入1开始游戏" << endl;
	int start = 0;
	cin >> start;
	if (start == 1) {
		/*
		Thread thread = new Thread(){
			public void run() {
			s.start();
		}
		};
		thread.start();*/
		cout << "游戏开始" << endl;
		c.init();//对应属性类
		c.randomMonster();
		c.mapset();

		cout << "输入2>>靠近" << c.G.getName() << ",输入3>>远离"
			<< c.G.getName() << "，输入4>>攻击" << c.G.getName() << ",5>>释放技能" << endl;
	}


	while (c.R.getR_xue() > 0 && c.G.getG_xue() > 0) {
		int come = 0;
		cin >> come;
		if (come == 2) {
			ran.randomxue();
			ctg.ComeToGuai();

		}
		if (come == 3) {
			ran.randomxue();
			rm.Remove_1();

		}
		if (come == 4) {
			atk.AttackGuai();
		}
		if (come == 5) {
			dskill.skill(r, g, dskill, c);
		}
	}


    return 0;

}

    