#include <qapplication.h>
#include <qpushbutton.h>
#include <qslider.h>
#include <qlcdnumber.h>
#include <qfont.h>
#include "chessboard.h"
#include "qt_app.h"

int main(int argc, char **argv)
{
	QApplication a(argc, argv);

	//ChessBoard board;
	//board.show();

	qt_app app;
	app.show();

	return a.exec();
}