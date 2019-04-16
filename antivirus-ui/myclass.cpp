#include "myclass.h"
#include "windows.h"
#include "scan.h"
#include <QtWidgets/QApplication>



MyClass::MyClass(QWidget *parent)
	: QMainWindow(parent)
{
	//*w = new QWidget();
	//ui.setupUi(Scan);
	//Scan w;
	ui.setupUi(this);
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(exit()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(minimize()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(gotoscan()));
	
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

void MyClass::gotoscan(){
	/*newscan = new Scan();
	newscan->show();*/
	//an
}
