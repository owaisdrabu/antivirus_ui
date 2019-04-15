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
        pushButton_3->setGeometry(QRect(0, 0, 31, 41));
        pushButton_3->setStyleSheet(QLatin1String("background:transparent;\n"
"background-repeat: no-repeat;\n"
"background-image: url(:/MyClass/logo.png);"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 170, 161, 71));
        pushButton_4->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/helloworld/research (2).png);\n"
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
        label->setGeometry(QRect(40, 0, 111, 31));
        label->setStyleSheet(QStringLiteral("background:transparent;"));
        MyClassClass->setCentralWidget(centralWidget);

        retranslateUi(MyClassClass);

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
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
