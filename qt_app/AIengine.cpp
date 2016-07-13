#include "AIengine.h"
#include <iostream>

using namespace std;
void AIengine::Api_init(int size) {
	gboard.Init(size);
	start_flag = 0;
	//gboard.CP.Init();
}

void AIengine::Api_mymove(int x, int y) {
	Api_inputmodify(x, y);
	gboard.Put_piece(x, y);
}

void AIengine::Api_oppomove(int x, int y) {
	Api_inputmodify(x, y);
	gboard.Put_piece(x, y);
}

void AIengine::Api_makemove(int &x, int &y) {

	if (start_flag == 0) gboard.Set_side();
	start_flag = 1;
	gboard.AIgo(x, y);
	Api_outputmodify(x, y);
	//cout << x << " " << y << endl;
}
void AIengine::Api_inputmodify(int &x, int &y) {
	x++; y++;
}
void AIengine::Api_outputmodify(int &x, int &y) {
	x--; y--;
}
void AIengine::Api_set_turntime(int timeml) {
	gboard.TURN_LIM = timeml;
	if (timeml == 5000) {
		gboard.MATCH_LIM = 120000;
	}
	else {
		gboard.MATCH_LIM = 180000;
	}
	
}
void AIengine::Api_debug() {
	//gboard.debug_mod = 1;
}
void AIengine::Api_takeback() {
	//gboard.Revoke();
}
void AIengine::Api_printboard() {
	gboard.Print_plat_board();
	//gboard.Print_lenrec();
}