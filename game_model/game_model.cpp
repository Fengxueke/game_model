// game_model.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
#include "game_model.h"
using namespace std;

int main()
{


	cout << "����1��ʼ��Ϸ" << endl;
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
		cout << "��Ϸ��ʼ" << endl;
		c.init();//��Ӧ������
		c.randomMonster();
		c.mapset();

		cout << "����2>>����" << c.G.getName() << ",����3>>Զ��"
			<< c.G.getName() << "������4>>����" << c.G.getName() << ",5>>�ͷż���" << endl;
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

    