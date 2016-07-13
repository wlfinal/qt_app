#ifndef AIENGINE_H
#define AIENGINE_H
#include "Cboard.h"

class AIengine {
public:
	AIengine(){};
	Cboard gboard;
	int start_flag;
	//初始大小为size的棋盘
	void Api_init(int size);

	//己方做出落子
	void Api_mymove(int x, int y);

	//对方做出落子
	void Api_oppomove(int x, int y);
	void Api_makemove(int &x, int &y);
	void Api_inputmodify(int &x, int &y);
	void Api_outputmodify(int &x, int &y);
	void Api_set_turntime(int timeml);
	void Api_printboard();
	void Api_takeback();
	void Api_debug();
};
#endif