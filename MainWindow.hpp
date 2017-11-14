/********************************************************************************
** Form generated from reading UI file 'designergq8048.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DESIGNERGQ8048_H
#define DESIGNERGQ8048_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow : public QMainWindow
{
public:
	QWidget *centralwidget;
	QWidget *verticalLayoutWidget;
	QVBoxLayout *verticalLayout;
	QPushButton *pushButton_5;
	QPushButton *pushButton_4;
	QPushButton *pushButton_2;
	QPushButton *pushButton_3;
	QPushButton *pushButton;
	QWidget *horizontalLayoutWidget;
	QHBoxLayout *horizontalLayout;
	QScrollArea *scrollArea;
	QWidget *scrollAreaWidgetContents;
	QMenuBar *menubar;
	QStatusBar *statusbar;

	Ui_MainWindow(QWidget* parent):
		QMainWindow(parent)
	{

	}

	void setupUi(QMainWindow *MainWindow)
	{
		if (MainWindow->objectName().isEmpty())
			MainWindow->setObjectName(QStringLiteral("MainWindow"));
		MainWindow->resize(800, 600);
		centralwidget = new QWidget(MainWindow);
		centralwidget->setObjectName(QStringLiteral("centralwidget"));
		verticalLayoutWidget = new QWidget(centralwidget);
		verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
		verticalLayoutWidget->setGeometry(QRect(0, 0, 251, 551));
		verticalLayout = new QVBoxLayout(verticalLayoutWidget);
		verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
		verticalLayout->setContentsMargins(0, 0, 0, 0);
		pushButton_5 = new QPushButton(verticalLayoutWidget);
		pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

		verticalLayout->addWidget(pushButton_5);

		pushButton_4 = new QPushButton(verticalLayoutWidget);
		pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

		verticalLayout->addWidget(pushButton_4);

		pushButton_2 = new QPushButton(verticalLayoutWidget);
		pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

		verticalLayout->addWidget(pushButton_2);

		pushButton_3 = new QPushButton(verticalLayoutWidget);
		pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

		verticalLayout->addWidget(pushButton_3);

		pushButton = new QPushButton(verticalLayoutWidget);
		pushButton->setObjectName(QStringLiteral("pushButton"));

		verticalLayout->addWidget(pushButton);

		horizontalLayoutWidget = new QWidget(centralwidget);
		horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
		horizontalLayoutWidget->setGeometry(QRect(250, 0, 541, 551));
		horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
		horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
		horizontalLayout->setContentsMargins(0, 0, 0, 0);
		scrollArea = new QScrollArea(horizontalLayoutWidget);
		scrollArea->setObjectName(QStringLiteral("scrollArea"));
		scrollArea->setWidgetResizable(true);
		scrollAreaWidgetContents = new QWidget();
		scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
		scrollAreaWidgetContents->setGeometry(QRect(0, 0, 537, 547));
		scrollArea->setWidget(scrollAreaWidgetContents);

		horizontalLayout->addWidget(scrollArea);

		MainWindow->setCentralWidget(centralwidget);
		menubar = new QMenuBar(MainWindow);
		menubar->setObjectName(QStringLiteral("menubar"));
		menubar->setGeometry(QRect(0, 0, 800, 21));
		MainWindow->setMenuBar(menubar);
		statusbar = new QStatusBar(MainWindow);
		statusbar->setObjectName(QStringLiteral("statusbar"));
		MainWindow->setStatusBar(statusbar);

		retranslateUi(MainWindow);

		QMetaObject::connectSlotsByName(MainWindow);
	} // setupUi

	void retranslateUi(QMainWindow *MainWindow)
	{
		MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
		pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", 0));
		pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", 0));
		pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
		pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
		pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
	} // retranslateUi

};

namespace Ui {
	class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERGQ8048_H
