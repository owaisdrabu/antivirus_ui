#ifndef SCAN_H
#define SCAN_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include "ui_scan.h"

class Scan : public QMainWindow
{
	Q_OBJECT

public:
	Scan(QWidget *parent = 0);
	~Scan();

private:
	Ui::MainWindow ui;
	private slots:
	void exit();
	void mini();
};

#endif 
