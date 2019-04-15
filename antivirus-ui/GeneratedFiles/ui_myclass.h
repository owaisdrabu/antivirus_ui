/********************************************************************************
** Form generated from reading UI file 'myclass.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASS_H
#define UI_MYCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClassClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QMainWindow *MyClassClass)
    {
        if (MyClassClass->objectName().isEmpty())
            MyClassClass->setObjectName(QStringLiteral("MyClassClass"));
        MyClassClass->resize(720, 360);
        MyClassClass->setStyleSheet(QStringLiteral("background-image: url(:/MyClass/background.png);"));
        centralWidget = new QWidget(MyClassClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 0, 31, 41));
        pushButton_3->setStyleSheet(QLatin1String("background:transparent;\n"
"background-repeat: no-repeat;\n"
"background-image: url(:/MyClass/logo.png);"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 160, 161, 71));
        pushButton_4->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/MyClass/scan.png);\n"
"image-position: left;\n"
"padding: 15px;\n"
"background-color: rgb(241, 241, 241);\n"
""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(690, 0, 23, 23));
        pushButton->setMouseTracking(true);
        pushButton->setToolTipDuration(-1);
        pushButton->setStyleSheet(QStringLiteral("background: transparent;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 0, 23, 23));
        pushButton_2->setStyleSheet(QLatin1String("background: transparent;\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 0, 111, 31));
        label->setStyleSheet(QStringLiteral("background:transparent;"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(260, 160, 161, 71));
        pushButton_6->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: rgb(241, 241, 241);\n"
"image: url(:/MyClass/update.png);\n"
"image-position: left;\n"
"padding-left: 10px;"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(450, 160, 161, 71));
        pushButton_7->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/MyClass/card.png);\n"
"background-color: rgb(241, 241, 241);\n"
"image-position: left;\n"
"padding-left: 15px;\n"
""));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(450, 250, 161, 71));
        pushButton_8->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/MyClass/protection.png);\n"
"background-color: rgb(241, 241, 241);\n"
"image-position: left;\n"
"padding-left: 15px;\n"
"\n"
""));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 250, 161, 71));
        pushButton_9->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/MyClass/parental.png);\n"
"background-color: rgb(241, 241, 241);\n"
"image-position: left;\n"
"padding-left: 15px;\n"
"\n"
""));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(70, 250, 161, 71));
        pushButton_10->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/MyClass/privacy.png);\n"
"background-color: rgb(241, 241, 241);\n"
"image-position: left;\n"
"padding-left: 15px;\n"
""));
        MyClassClass->setCentralWidget(centralWidget);

        retranslateUi(MyClassClass);
        QObject::connect(pushButton_4, SIGNAL(clicked()), pushButton_4, SLOT(click()));

        QMetaObject::connectSlotsByName(MyClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyClassClass)
    {
        MyClassClass->setWindowTitle(QApplication::translate("MyClassClass", "MyClass", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton_4->setText(QApplication::translate("MyClassClass", "Scan", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("MyClassClass", "x", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MyClassClass", "-", Q_NULLPTR));
        label->setText(QApplication::translate("MyClassClass", "Antivirus", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MyClassClass", "  Database Update", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MyClassClass", "Safe Money", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MyClassClass", "Protection For \n"
" All Devices", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MyClassClass", "  Parental Control", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MyClassClass", "   Privacy Protection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
