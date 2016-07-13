#ifndef CHESSBOARDMAP_H
#define CHESSBOARDMAP_H

class ChessBoardMap{

public:
	ChessBoardMap();
	~ChessBoardMap();

	static const int WINCOUNT = 5;
	static const int MAXN = 15;//���̳���15

	static const int COLOR_EMPTY = 0;
	static const int COLOR_BLACK = 1;
	static const int COLOR_WHITE = 2;

	int winner;

	bool isPositionInRange(int x, int y);
	int getChessmanFromPosition(int x, int y);
	bool setChessmanToPosition(int x, int y, int color);
	int getPlayerCurrent();
	bool isWin(int x, int y);//�жϵ�ǰ���Ƿ�win
	//Chessman nextStep();

private:
	int board[MAXN][MAXN];//0:�հף�1���ڣ�2����
	static const int XX[8];
	static const int YY[8];
	int count;//��ǰ�Ѿ����˼���

	int AlphaBeta(int depth, int alpha, int beta);
	int Evaluate();
	//GenerateLegalMoves();
};

struct Chessman{
	int x, y;
	int color;
};


#endif