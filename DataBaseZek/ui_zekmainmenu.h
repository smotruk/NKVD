/********************************************************************************
** Form generated from reading UI file 'zekmainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEKMAINMENU_H
#define UI_ZEKMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZekMainMenu
{
public:
    QAction *action;
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLabel *label_8;
    QLabel *label_24;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_23;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit_22;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ZekMainMenu)
    {
        if (ZekMainMenu->objectName().isEmpty())
            ZekMainMenu->setObjectName(QStringLiteral("ZekMainMenu"));
        ZekMainMenu->resize(714, 529);
        action = new QAction(ZekMainMenu);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(ZekMainMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 221, 271));
        listWidget->setStyleSheet(QLatin1String("QListWidget{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 40, 421, 151));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 10, 231, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 320, 221, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 360, 221, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 340, 221, 21));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 380, 221, 21));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 400, 221, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 210, 460, 211));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Lao UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);

        verticalLayout->addWidget(label_23);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(200, 0));
        label_7->setMaximumSize(QSize(200, 16777215));
        label_7->setFont(font);
        label_7->setWordWrap(true);

        verticalLayout->addWidget(label_7);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setMinimumSize(QSize(200, 20));
        textEdit->setMaximumSize(QSize(200, 20));
        textEdit->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setMinimumSize(QSize(200, 20));
        textEdit_2->setMaximumSize(QSize(150, 20));
        textEdit_2->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit_2);

        textEdit_3 = new QTextEdit(layoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setMinimumSize(QSize(200, 20));
        textEdit_3->setMaximumSize(QSize(150, 20));
        textEdit_3->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit_3);

        textEdit_4 = new QTextEdit(layoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setMinimumSize(QSize(200, 20));
        textEdit_4->setMaximumSize(QSize(150, 20));
        textEdit_4->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_4->setUndoRedoEnabled(true);

        verticalLayout_2->addWidget(textEdit_4);

        textEdit_5 = new QTextEdit(layoutWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setMinimumSize(QSize(200, 20));
        textEdit_5->setMaximumSize(QSize(150, 20));
        textEdit_5->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit_5);

        textEdit_6 = new QTextEdit(layoutWidget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setEnabled(false);
        textEdit_6->setMinimumSize(QSize(200, 20));
        textEdit_6->setMaximumSize(QSize(150, 20));
        textEdit_6->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit_6);

        textEdit_7 = new QTextEdit(layoutWidget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setEnabled(false);
        textEdit_7->setMinimumSize(QSize(200, 20));
        textEdit_7->setMaximumSize(QSize(150, 20));
        textEdit_7->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        textEdit_22 = new QTextEdit(layoutWidget);
        textEdit_22->setObjectName(QStringLiteral("textEdit_22"));
        textEdit_22->setEnabled(false);
        textEdit_22->setMinimumSize(QSize(140, 20));
        textEdit_22->setMaximumSize(QSize(140, 20));
        textEdit_22->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_22->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_22->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_22->setUndoRedoEnabled(true);

        horizontalLayout_4->addWidget(textEdit_22);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setMinimumSize(QSize(100, 20));
        pushButton->setMaximumSize(QSize(100, 20));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);

        ZekMainMenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ZekMainMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 714, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        ZekMainMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZekMainMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ZekMainMenu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ZekMainMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ZekMainMenu->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(ZekMainMenu);

        QMetaObject::connectSlotsByName(ZekMainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *ZekMainMenu)
    {
        ZekMainMenu->setWindowTitle(QApplication::translate("ZekMainMenu", "ZekMainMenu", 0));
        action->setText(QApplication::translate("ZekMainMenu", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        label_8->setText(QApplication::translate("ZekMainMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600;\">\320\235\320\265\321\202 \321\204\320\276\321\202\320\276</span></p></body></html>", 0));
        label_24->setText(QApplication::translate("ZekMainMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\320\241\320\277\320\270\321\201\320\276\320\272 \320\267\320\260\320\272\320\273\321\216\321\207\321\221\320\275\320\275\321\213\321\205</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("ZekMainMenu", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        pushButton_3->setText(QApplication::translate("ZekMainMenu", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        pushButton_4->setText(QApplication::translate("ZekMainMenu", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        pushButton_5->setText(QApplication::translate("ZekMainMenu", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        pushButton_6->setText(QApplication::translate("ZekMainMenu", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        label->setText(QApplication::translate("ZekMainMenu", "\320\237\321\200\320\276\320\267\320\262\320\270\321\211\320\265", 0));
        label_2->setText(QApplication::translate("ZekMainMenu", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        label_23->setText(QApplication::translate("ZekMainMenu", "\320\223\321\200\320\260\320\266\320\264\320\260\320\275\321\201\321\202\320\262\320\276", 0));
        label_5->setText(QApplication::translate("ZekMainMenu", "\320\220\320\264\321\200\320\265\321\201 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", 0));
        label_6->setText(QApplication::translate("ZekMainMenu", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", 0));
        label_4->setText(QApplication::translate("ZekMainMenu", "\320\241\320\265\320\274\320\265\320\271\320\275\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", 0));
        label_7->setText(QApplication::translate("ZekMainMenu", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217 \320\277\320\276\320\264 \320\276\321\200\320\265\321\201\321\202", 0));
        label_3->setText(QApplication::translate("ZekMainMenu", "\320\241\321\202\320\260\321\202\321\214\321\217 \320\243\320\232 \320\240\320\221", 0));
        textEdit->setHtml(QApplication::translate("ZekMainMenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit_4->setHtml(QApplication::translate("ZekMainMenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit_22->setHtml(QApplication::translate("ZekMainMenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("ZekMainMenu", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0));
        menu->setTitle(QApplication::translate("ZekMainMenu", "\320\241\320\273\320\265\320\264\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \320\270\320\267\320\276\320\273\321\217\321\202\320\276\321\200 \342\204\226 1", 0));
    } // retranslateUi

};

namespace Ui {
    class ZekMainMenu: public Ui_ZekMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEKMAINMENU_H
