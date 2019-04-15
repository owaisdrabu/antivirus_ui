#include "myclass.h"
#include "windows.h"

MyClass::MyClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(exit()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(minimize()));
}

MyClass::~MyClass()
{

}

void MyClass::exit() {
	QApplication::exit();
}
void MyClass::minimize() {
	window()->showMinimized();
}