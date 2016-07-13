#include "chessboard.h"
#include "chessboardmap.h"
#include <QPainter> 
#include <iostream>
#include <algorithm>
ChessBoard::ChessBoard(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

}

ChessBoard::~ChessBoard()
{

}

void ChessBoard::paintEvent(QPaintEvent* p){
	QPainter painter(this);
	QPen pen;                                 //创建一个画笔  
	
	pen.setColor(Qt::black);
	pen.setWidth(2);
	painter.setPen(pen);
	
	int maxWidth = width();
	int maxHeigth = height();

	int step = std::min(maxHeigth, maxWidth) / ChessBoardMap::MAXN;
	int halfStep = step >> 1;
	int sumStep = step*(ChessBoardMap::MAXN - 1);

	//划横线
	for (int i = 0; i<ChessBoardMap::MAXN; i++){
		painter.drawLine(halfStep, halfStep + i*step, halfStep + sumStep, halfStep + i*step);
	}
	//画竖线
	for (int i = 0; i<ChessBoardMap::MAXN; i++){
		painter.drawLine(halfStep + i*step, halfStep, halfStep + i*step, halfStep + sumStep);
	}


	int radius = step * 0.4;

	for (int i = 0; i < ChessBoardMap::MAXN; i++){
		for (int j = 0; j < ChessBoardMap::MAXN; j++){
			int color = chessBoardMap.getChessmanFromPosition(i, j);
			if (ChessBoardMap::COLOR_BLACK == color){
				painter.setBrush(Qt::black);
			}
			else if (ChessBoardMap::COLOR_WHITE == color){
				painter.setBrush(Qt::white);
			}
			else{
				continue;
			}
			painter.drawEllipse(halfStep + i*step - radius, halfStep + j*step-radius, radius*2, radius*2);
		}
	}

}
void ChessBoard::mousePressEvent(QMouseEvent *e){

	std::cout << "cout" << std::endl;

	int maxWidth = width();
	int maxHeigth = height();

	int step = std::min(maxHeigth,maxWidth) / ChessBoardMap::MAXN;
	int halfStep = step >> 1;
	int sumStep = step*(ChessBoardMap::MAXN - 1);
	int maxn = ChessBoardMap::MAXN;

	QPoint mousePoint = QWidget::mapFromGlobal(QCursor::pos());

	int positionX = mousePoint.x();
	int positionY = mousePoint.y();
	std::cout << "position" << std::endl;
	std::cout << positionX << std::endl;
	std::cout << positionY << std::endl;
	std::cout << "step:" << step << std::endl;

	int x = positionX / step;
	int y = positionY / step;
	
	std::cout << x << std::endl;
	std::cout << y << std::endl;


	if (chessBoardMap.setChessmanToPosition(x, y, chessBoardMap.getPlayerCurrent())){
		repaint();
	}
}

void ChessBoard::putChessman(){

}
