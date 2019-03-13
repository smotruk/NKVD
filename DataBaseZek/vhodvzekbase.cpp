#include "vhodvzekbase.h"
#include "ui_vhodvzekbase.h"
#include "zekmainmenu.h"

#include <QMessageBox>

VhodVZekBase::VhodVZekBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VhodVZekBase)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&VhodVZekBase::slotOk);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&VhodVZekBase::deleteLater);

}

VhodVZekBase::~VhodVZekBase()
{
    delete ui;
}

void VhodVZekBase::slotOk()
{
    if(ui->textEdit->toPlainText()=="a"&&ui->textEdit_2->toPlainText()=="1")
    {   ZekMainMenu *w = new ZekMainMenu(true);
        w->show();
        deleteLater();
    }
    else
    if(ui->textEdit->toPlainText()=="b"&&ui->textEdit_2->toPlainText()=="2")
    {
        ZekMainMenu *w = new ZekMainMenu(false);
        w->show();
       deleteLater();
    }
    else
    {
        QMessageBox *b = new QMessageBox;
        b->setText("Неверный логин или пароль");
        b->show();
    }

}
