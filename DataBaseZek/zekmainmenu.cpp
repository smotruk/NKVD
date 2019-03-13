#include "zekmainmenu.h"
#include "ui_zekmainmenu.h"
#include "addzek.h"
#include "error.h"
#include "list.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>
ZekMainMenu::ZekMainMenu(bool user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZekMainMenu)
{

    ui->setupUi(this);
    ui->pushButton_2->setEnabled(user);
    ui->pushButton_3->setEnabled(user);
    ui->pushButton_4->setEnabled(user);
    ui->pushButton_5->setEnabled(user);
    ui->pushButton_6->setEnabled(user);


    slotUpdateZekList();
    slotShowZekInfo(0);
    connect(ui->listWidget,&QListWidget::currentRowChanged,this,&ZekMainMenu::slotShowZekInfo);
    connect(ui->pushButton,&QPushButton::clicked,this,&ZekMainMenu::slotStatia);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&ZekMainMenu::slotAddZek);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&ZekMainMenu::slotDeleteZek);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&ZekMainMenu::slotRedack);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&ZekMainMenu::slotShowZekInfo);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&ZekMainMenu::slotSaveRedackt);


}

ZekMainMenu::~ZekMainMenu()
{
    delete ui;
}

void ZekMainMenu::slotUpdateZekList()
{
    try{
    QFile *f = new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/ZekList.txt");
    if(!f->open(QFile::ReadOnly|QFile::Text))
        throw new ErrorOpenFile;
    QTextStream *stream = new QTextStream(f);
    while(!stream->atEnd())
    {
        colZek++;
        ui->listWidget->addItem(stream->readLine());
    }
    if(colZek)
    {
        ui->listWidget->setCurrentRow(0);
    }
    f->close();
    slotUnRedack();
    }
    catch(Error *e)
    {
        e->isError();
    }
}

void ZekMainMenu::slotShowZekInfo(int i)
{
    try
    {
    if(colZek)
    {

        QFile *f = new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->listWidget->currentItem()->text()+".txt");
        if(!f->open(QFile::ReadOnly|QFile::Text))
            throw new ErrorOpenFile;
        QTextStream *stream = new QTextStream(f);
        ui->textEdit->setText(stream->readLine());
        ui->textEdit_2->setText(stream->readLine());
        ui->textEdit_3->setText(stream->readLine());
        ui->textEdit_4->setText(stream->readLine());
        ui->textEdit_5->setText(stream->readLine());
        ui->textEdit_6->setText(stream->readLine());
        ui->textEdit_7->setText(stream->readLine());
        ui->textEdit_22->setText(stream->readLine());
        f->close();
        QPixmap *p = new QPixmap("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->listWidget->currentItem()->text()+".jpg");
        *p = p->scaled(ui->label_8->width(),ui->label_8->height(),Qt::KeepAspectRatio);
        ui->label_8->setPixmap(*p);
    }
    slotUnRedack();
    }
    catch(Error *e)
    {
        e->isError();
    }
}

void ZekMainMenu::slotSaveRedackt()
{
    QFile *f = new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->listWidget->currentItem()->text()+".txt");
    try{
        if(!f->open(QFile::WriteOnly|QFile::Text))
            new ErrorOpenFile;
    }
    catch(Error *e)
    {
        e->isError();
    }
    QTextStream *stream = new QTextStream(f);
    *stream << ui->textEdit->toPlainText()<<endl;
    *stream << ui->textEdit_2->toPlainText()<<endl;
    *stream << ui->textEdit_3->toPlainText()<<endl;
    *stream << ui->textEdit_4->toPlainText()<<endl;
    *stream << ui->textEdit_5->toPlainText()<<endl;
    *stream << ui->textEdit_6->toPlainText()<<endl;
    *stream << ui->textEdit_7->toPlainText()<<endl;
    *stream << ui->textEdit_22->toPlainText()<<endl;
    f->close();
    slotUnRedack();
}

void ZekMainMenu::slotDeleteZek()
{
    if(colZek>0)
    {
    QFile *f = new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/ZekList.txt");
    f->open(QFile::WriteOnly|QFile::Text);
    QTextStream *stream = new QTextStream(f);
    for(int i=0;i<colZek;i++)
    {
        if(i!=ui->listWidget->currentRow())
        {
            *stream<<ui->listWidget->item(i)->text() <<endl;

        }
    }
    QFile::remove("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->listWidget->currentItem()->text()+".txt");
    QFile::remove("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->listWidget->currentItem()->text()+".jpg");

    f->close();
    colZek--;
    delete ui->listWidget->currentItem();
    slotShowZekInfo(0);
    }
}



void ZekMainMenu::slotRedack()
{
    ui->textEdit->setEnabled(true);
    ui->textEdit_2->setEnabled(true);
    ui->textEdit_3->setEnabled(true);
    ui->textEdit_4->setEnabled(true);
    ui->textEdit_5->setEnabled(true);
    ui->textEdit_6->setEnabled(true);
    ui->textEdit_7->setEnabled(true);
    ui->textEdit_22->setEnabled(true);

}

void ZekMainMenu::slotUnRedack()
{
    ui->textEdit->setEnabled(false);
    ui->textEdit_2->setEnabled(false);
    ui->textEdit_3->setEnabled(false);
    ui->textEdit_4->setEnabled(false);
    ui->textEdit_5->setEnabled(false);
    ui->textEdit_6->setEnabled(false);
    ui->textEdit_7->setEnabled(false);
    ui->textEdit_22->setEnabled(false);
}

void ZekMainMenu::slotAddZek()
{
    AddZek *z = new AddZek;
    z->show();
    connect(z,&AddZek::signalZekName,this,&ZekMainMenu::slotNewZek);
}

void ZekMainMenu::slotNewZek(QString s)
{
    ui->listWidget->addItem(s);
    colZek++;
}

void ZekMainMenu::slotStatia()
{
    try
    {
    QMessageBox *b = new QMessageBox;
    QFile *f = new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/Statii/"+ui->textEdit_22->toPlainText()+".txt");
    if(f->open(QFile::ReadOnly|QFile::Text)){
    QTextStream *stream = new QTextStream(f);
    b->setText((stream->readAll()));
    f->close();
    b->show();
    }
    else
        throw new ErrorOpenFile;
    }
        catch(Error *e)
    {
        e->isError();
    }
}


