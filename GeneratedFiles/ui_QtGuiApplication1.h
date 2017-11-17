/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyCanvas.hpp"

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    MyCanvas *canvas;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(612, 394);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 330, 611, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCheckable(true);
        pushButton_4->setChecked(false);
        pushButton_4->setAutoExclusive(true);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(false);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoExclusive(true);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCheckable(true);
        pushButton_2->setAutoExclusive(true);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(581, 296, 30, 30));
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Plain);
        canvas = new MyCanvas(centralWidget);
        canvas->setObjectName(QStringLiteral("canvas"));
        canvas->setGeometry(QRect(0, 0, 541, 321));
        verticalLayoutWidget = new QWidget(canvas);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(550, 0, 62, 282));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(brush1);
        __qtablewidgetitem->setForeground(brush);
        __qtablewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(brush2);
        tableWidget->setItem(0, 1, __qtablewidgetitem1);
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(brush3);
        tableWidget->setItem(1, 0, __qtablewidgetitem2);
        QBrush brush4(QColor(255, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(brush4);
        tableWidget->setItem(1, 1, __qtablewidgetitem3);
        QBrush brush5(QColor(0, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(brush5);
        tableWidget->setItem(2, 0, __qtablewidgetitem4);
        QBrush brush6(QColor(85, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(brush6);
        tableWidget->setItem(2, 1, __qtablewidgetitem5);
        QBrush brush7(QColor(0, 0, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setBackground(brush7);
        tableWidget->setItem(3, 0, __qtablewidgetitem6);
        QBrush brush8(QColor(0, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setBackground(brush8);
        tableWidget->setItem(3, 1, __qtablewidgetitem7);
        QBrush brush9(QColor(255, 255, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setBackground(brush9);
        tableWidget->setItem(4, 0, __qtablewidgetitem8);
        QBrush brush10(QColor(255, 255, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setBackground(brush10);
        tableWidget->setItem(4, 1, __qtablewidgetitem9);
        QBrush brush11(QColor(255, 0, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setBackground(brush11);
        tableWidget->setItem(5, 0, __qtablewidgetitem10);
        QBrush brush12(QColor(255, 85, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setBackground(brush12);
        tableWidget->setItem(5, 1, __qtablewidgetitem11);
        QBrush brush13(QColor(170, 0, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setBackground(brush13);
        tableWidget->setItem(6, 0, __qtablewidgetitem12);
        QBrush brush14(QColor(170, 85, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setBackground(brush14);
        tableWidget->setItem(6, 1, __qtablewidgetitem13);
        QBrush brush15(QColor(170, 0, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setBackground(brush15);
        tableWidget->setItem(7, 0, __qtablewidgetitem14);
        QBrush brush16(QColor(170, 85, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setBackground(brush16);
        tableWidget->setItem(7, 1, __qtablewidgetitem15);
        QBrush brush17(QColor(170, 170, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setBackground(brush17);
        tableWidget->setItem(8, 0, __qtablewidgetitem16);
        QBrush brush18(QColor(0, 170, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setBackground(brush18);
        tableWidget->setItem(8, 1, __qtablewidgetitem17);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(550, 0, 60, 180));
        tableWidget->setMinimumSize(QSize(60, 180));
        tableWidget->setMaximumSize(QSize(30, 180));
        tableWidget->setFrameShape(QFrame::WinPanel);
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setLineWidth(2);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(false);
        tableWidget->setEditTriggers(QAbstractItemView::SelectedClicked);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setTextElideMode(Qt::ElideNone);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(9);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(30);
        tableWidget->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);
        tableWidget->verticalHeader()->setMinimumSectionSize(20);
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(tableWidget, SIGNAL(cellClicked(int,int)), label, SLOT(update()));

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", 0));
        pushButton_4->setText(QApplication::translate("QtGuiApplication1Class", "Pencil", 0));
        pushButton_3->setText(QApplication::translate("QtGuiApplication1Class", "Eraser", 0));
        pushButton_2->setText(QApplication::translate("QtGuiApplication1Class", "Fill", 0));
        pushButton->setText(QApplication::translate("QtGuiApplication1Class", "Clear All", 0));
        label->setText(QString());

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
