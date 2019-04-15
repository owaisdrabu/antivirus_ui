#include "myclass.h"
#include <QtWidgets/QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QSplashScreen *splash = new QSplashScreen;
	splash->setPixmap(QPixmap("C:/spl.jpg"));
	splash->show();

	MyClass w;
	QTimer::singleShot(2500, splash, SLOT(close()));
	QTimer::singleShot(2500, &w, SLOT(show()));
	//w.show();
	return a.exec();
}