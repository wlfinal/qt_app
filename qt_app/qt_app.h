#ifndef QT_APP_H
#define QT_APP_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_app.h"

class qt_app : public QMainWindow
{
	Q_OBJECT

public:
	qt_app(QWidget *parent = 0);
	~qt_app();

private:
	Ui::qt_appClass ui;

public slots:
	void resetLCD();
	void addLCD();
	void mutiLCD();
signals:
	void getData(int);
	void getData(int,int);
};

#endif // QT_APP_H
