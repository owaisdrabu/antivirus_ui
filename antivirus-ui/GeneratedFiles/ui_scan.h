/********************************************************************************
** Form generated from reading UI file 'scan.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAN_H
#define UI_SCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *tab_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *tab_3;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *tab_4;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(720, 360);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/MyClass/background.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 60, 721, 311));
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setContextMenuPolicy(Qt::NoContextMenu);
        tabWidget->setAcceptDrops(false);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QLatin1String("background: transparent;\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(26, 86));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 21));
        label->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 14pt \"Times New Roman\";\n"
"\n"
""));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 50, 80, 30));
        pushButton->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: rgb(241, 241, 241);\n"
"image: url(:/MyClass/run.png);\n"
"image-position:left;\n"
"padding-left: 5px;\n"
""));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 130, 571, 91));
        scrollArea->setStyleSheet(QStringLiteral("background: transparent;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 569, 89));
        scrollArea->setWidget(scrollAreaWidgetContents);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MyClass/fullscan.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 91, 21));
        label_2->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 14pt \"Times New Roman\";\n"
"\n"
""));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 50, 80, 30));
        pushButton_2->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: rgb(241, 241, 241);\n"
"image: url(:/MyClass/run.png);\n"
"image-position:left;\n"
"padding-left: 5px;"));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(20, 130, 571, 91));
        scrollArea_2->setStyleSheet(QStringLiteral("background: transparent;"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 569, 89));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MyClass/quick.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon1, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 50, 80, 30));
        pushButton_3->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: rgb(241, 241, 241);\n"
"image: url(:/MyClass/run.png);\n"
"image-position:left;\n"
"padding-left: 5px;"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 73, 21));
        label_3->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 14pt \"Times New Roman\";\n"
"\n"
""));
        scrollArea_3 = new QScrollArea(tab_3);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(20, 130, 571, 91));
        scrollArea_3->setStyleSheet(QStringLiteral("background: transparent;"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 569, 89));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MyClass/usbscan.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 121, 21));
        label_4->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 14pt \"Times New Roman\";\n"
"\n"
""));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 50, 80, 30));
        pushButton_4->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: rgb(241, 241, 241);\n"
"image: url(:/MyClass/add.png);\n"
"image-position:left;\n"
"padding-left: 5px;"));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 50, 80, 30));
        pushButton_5->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: rgb(241, 241, 241);\n"
"image: url(:/MyClass/run.png);\n"
"image-position:left;\n"
"padding-left: 5px;"));
        scrollArea_4 = new QScrollArea(tab_4);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(20, 130, 571, 91));
        scrollArea_4->setStyleSheet(QStringLiteral("background: transparent;"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 569, 89));
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MyClass/selective.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon3, QString());
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 12, 51, 20));
        label_5->setStyleSheet(QLatin1String("background: transparent;\n"
"font: 75 14pt \"Times New Roman\";\n"
"\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 10, 75, 25));
        pushButton_6->setStyleSheet(QLatin1String("background: transparent;\n"
"image: url(:/MyClass/back.png);\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(690, 0, 23, 23));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setMouseTracking(true);
        pushButton_7->setToolTipDuration(-1);
        pushButton_7->setStyleSheet(QStringLiteral("background: transparent;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(670, 0, 23, 23));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QLatin1String("background: transparent;\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Full Scan", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "      Run Scan", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_2->setText(QApplication::translate("MainWindow", "Quick Scan", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "      Run Scan", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "     Run Scan", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Usb Scan", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        label_4->setText(QApplication::translate("MainWindow", "Selective Scan", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "    Run Scan", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
        label_5->setText(QApplication::translate("MainWindow", "Scan", Q_NULLPTR));
        pushButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_7->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_7->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAN_H
