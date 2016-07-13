#include "chessboardmap.h"
#include <iostream>


const int ChessBoardMap::XX[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
const int ChessBoardMap::YY[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

ChessBoardMap::ChessBoardMap(){
	memset(board, 0, sizeof(board));
	count = 0;
	winner = COLOR_EMPTY;
}

ChessBoardMap::~ChessBoardMap(){}

bool ChessBoardMap::isPositionInRange(int x, int y){
	if (x >= 0 && x < MAXN && y >= 0 && y < MAXN)
		return true;
	return false;
}
int ChessBoardMap::getChessmanFromPosition(int x, int y){
	if (isPositionInRange(x, y))
		return board[x][y];
	return -1;
}

bool ChessBoardMap::setChessmanToPosition(int x, int y, int color){
	if (isPositionInRange(x, y) && board[x][y] == COLOR_EMPTY){
		board[x][y] = color;
		count++;
		if (isWin(x, y)){
			winner = color;
			std::cout << "winner:" << winner << std::endl;
		}
		return true;
	}
	return false;
}

int ChessBoardMap::getPlayerCurrent(){
	if (count >= MAXN*MAXN)
		return COLOR_EMPTY;
	if (count % 2 == 0)
		return COLOR_BLACK;
	else
		return COLOR_WHITE;
}

bool ChessBoardMap::isWin(int x, int y){
	int color = getChessmanFromPosition(x, y);
	int result[4];
	memset(result, 0, sizeof(result));
	for (int i = 0; i < 8; i++){
		int xx = x + XX[i];
		int yy = y + YY[i];
		while (isPositionInRange(xx, yy) && getChessmanFromPosition(xx, yy) == color){
			result[i % 4]++;
			xx += XX[i];
			yy += YY[i];
		}
	}
	for (int i = 0; i < 4; i++){
		if (result[i] + 1 >= WINCOUNT){
			return true;
		}
	}
	return false;
}

/*
int ChessBoardMap::AlphaBeta(int depth, int alpha, int beta) {
	if (depth == 0) {
		return Evaluate();
	}
	GenerateLegalMoves();
	while (MovesLeft()) {
		MakeNextMove();
		val = -AlphaBeta(depth - 1, -beta, -alpha);
		UnmakeMove();
		if (val >= beta) {
			return beta;
		}
		if (val > alpha) {
			alpha = val;
		}
	}
	return alpha;
}

*/


