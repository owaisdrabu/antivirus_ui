#include "myclass.h"
#include "windows.h"
#include "scan.h"
#include <QtWidgets/QApplication>

Scan::Scan(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	connect(ui.pushButton_7, SIGNAL(clicked()), this, SLOT(exit()));
	connect(ui.pushButton_8, SIGNAL(clicked()), this, SLOT(mini()));
	
}

Scan::~Scan()
{

}
void Scan::exit() {
	QApplication::exit();
}
void Scan::mini() {
	window()->showMinimized();
}


