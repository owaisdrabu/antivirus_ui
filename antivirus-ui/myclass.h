#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include "ui_scan.h"
#include "scan.h"

class MyClass : public QMainWindow
{
	Q_OBJECT

public:
	MyClass(QWidget *parent = 0);
	~MyClass();

private:
	Ui::MyClassClass ui;
	private slots:
	void exit();
	void minimize();
	void gotoscan();



};

#endif // MYCLASS_H
