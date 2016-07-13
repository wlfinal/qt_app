#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QWidget>
#include "ui_chessboard.h"
#include "chessboardmap.h"

class ChessBoard : public QWidget
{
	Q_OBJECT

public:
	ChessBoard(QWidget *parent = 0);
	~ChessBoard();
	void paintEvent(QPaintEvent* p);
	void mousePressEvent(QMouseEvent *e);
private:
	Ui::ChessBoard ui;
	ChessBoardMap chessBoardMap;

public slots:
	void putChessman();



};

#endif // CHESSBOARD_H