/********************************************************************************
** Form generated from reading UI file 'qt_app.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_APP_H
#define UI_QT_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_appClass
{
public:
    QAction *actionOpen;
    QAction *actionNew_file;
    QAction *actionNew_fl;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuNew;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt_appClass)
    {
        if (qt_appClass->objectName().isEmpty())
            qt_appClass->setObjectName(QStringLiteral("qt_appClass"));
        qt_appClass->resize(717, 434);
        actionOpen = new QAction(qt_appClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionNew_file = new QAction(qt_appClass);
        actionNew_file->setObjectName(QStringLiteral("actionNew_file"));
        actionNew_fl = new QAction(qt_appClass);
        actionNew_fl->setObjectName(QStringLiteral("actionNew_fl"));
        centralWidget = new QWidget(qt_appClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(15, 9, 691, 351));
        qt_appClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qt_appClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 717, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuNew = new QMenu(menu);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        qt_appClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt_appClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qt_appClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qt_appClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qt_appClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(menuNew->menuAction());
        menu->addSeparator();
        menu->addAction(actionOpen);
        menuNew->addAction(actionNew_file);
        menuNew->addAction(actionNew_fl);
        menuNew->addSeparator();

        retranslateUi(qt_appClass);

        QMetaObject::connectSlotsByName(qt_appClass);
    } // setupUi

    void retranslateUi(QMainWindow *qt_appClass)
    {
        qt_appClass->setWindowTitle(QApplication::translate("qt_appClass", "qt\344\270\255\346\226\207", 0));
        actionOpen->setText(QApplication::translate("qt_appClass", "open", 0));
        actionNew_file->setText(QApplication::translate("qt_appClass", "new file", 0));
        actionNew_fl->setText(QApplication::translate("qt_appClass", "new fl", 0));
        menu->setTitle(QApplication::translate("qt_appClass", "\350\217\234\345\215\225", 0));
        menuNew->setTitle(QApplication::translate("qt_appClass", "new", 0));
    } // retranslateUi

};

namespace Ui {
    class qt_appClass: public Ui_qt_appClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_APP_H
