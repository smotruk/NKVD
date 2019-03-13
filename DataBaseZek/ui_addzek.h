/********************************************************************************
** Form generated from reading UI file 'addzek.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDZEK_H
#define UI_ADDZEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddZek
{
public:
    QLabel *label_8;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_23;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit_8;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AddZek)
    {
        if (AddZek->objectName().isEmpty())
            AddZek->setObjectName(QStringLiteral("AddZek"));
        AddZek->resize(469, 448);
        label_8 = new QLabel(AddZek);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 10, 421, 151));
        layoutWidget = new QWidget(AddZek);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 180, 416, 267));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font;
        font.setFamily(QStringLiteral("Lao UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
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
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit_9 = new QTextEdit(layoutWidget);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setEnabled(true);
        textEdit_9->setMinimumSize(QSize(200, 20));
        textEdit_9->setMaximumSize(QSize(200, 20));
        textEdit_9->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_9->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(textEdit_9);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
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
        textEdit_2->setEnabled(true);
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
        textEdit_3->setEnabled(true);
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
        textEdit_4->setEnabled(true);
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
        textEdit_5->setEnabled(true);
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
        textEdit_6->setEnabled(true);
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
        textEdit_7->setEnabled(true);
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
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        textEdit_8 = new QTextEdit(layoutWidget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setEnabled(true);
        textEdit_8->setMinimumSize(QSize(200, 20));
        textEdit_8->setMaximumSize(QSize(150, 20));
        textEdit_8->setStyleSheet(QLatin1String("QTextEdit{\n"
"	background-color:rgba(0,255,0,0);\n"
"	border : 1px;\n"
"}"));
        textEdit_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_4->addWidget(textEdit_8);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(AddZek);

        QMetaObject::connectSlotsByName(AddZek);
    } // setupUi

    void retranslateUi(QWidget *AddZek)
    {
        AddZek->setWindowTitle(QApplication::translate("AddZek", "Form", 0));
        label_8->setText(QApplication::translate("AddZek", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">\320\235\320\265\321\202 \321\204\320\276\321\202\320\276</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("AddZek", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217, \320\270\320\274\321\217, \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        label->setText(QApplication::translate("AddZek", "\320\237\321\200\320\276\320\267\320\262\320\270\321\211\320\265", 0));
        label_2->setText(QApplication::translate("AddZek", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", 0));
        label_23->setText(QApplication::translate("AddZek", "\320\223\321\200\320\260\320\266\320\264\320\260\320\275\321\201\321\202\320\262\320\276", 0));
        label_5->setText(QApplication::translate("AddZek", "\320\220\320\264\321\200\320\265\321\201 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\275\320\270\321\217", 0));
        label_6->setText(QApplication::translate("AddZek", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", 0));
        label_4->setText(QApplication::translate("AddZek", "\320\241\320\265\320\274\320\265\320\271\320\275\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", 0));
        label_7->setText(QApplication::translate("AddZek", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217 \320\277\320\276\320\264 \320\276\321\200\320\265\321\201\321\202", 0));
        label_3->setText(QApplication::translate("AddZek", "\320\241\321\202\320\260\321\202\321\214\321\217 \320\243\320\232 \320\240\320\221", 0));
        textEdit_9->setHtml(QApplication::translate("AddZek", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit->setHtml(QApplication::translate("AddZek", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textEdit_4->setHtml(QApplication::translate("AddZek", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("AddZek", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", 0));
        pushButton_2->setText(QApplication::translate("AddZek", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270 \320\262\321\213\320\271\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class AddZek: public Ui_AddZek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDZEK_H
