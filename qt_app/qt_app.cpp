#include "qt_app.h"

qt_app::qt_app(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

	//ui.tableView->set
}

qt_app::~qt_app()
{

}

void qt_app::resetLCD(){
	emit getData(5);
	emit getData(0, 10);
}
void qt_app::addLCD(){
}
void qt_app::mutiLCD(){
}