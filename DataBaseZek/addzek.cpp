#include "addzek.h"
#include "list.h"
#include "ui_addzek.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

AddZek::AddZek(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddZek)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&AddZek::slotImg);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&AddZek::slotSave);
}

AddZek::~AddZek()
{
    delete ui;
}

void AddZek::slotImg()
{
    if(ui->textEdit_9->toPlainText()=="")
    {
        QMessageBox *b = new QMessageBox;
        b->setText("Введите Фамилию и инициалы");
        b->show();
    }
    else
    {
       QImage *i = new QImage(QFileDialog::getOpenFileName());
       i->save("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->textEdit_9->toPlainText()+".jpg");
       QPixmap *p = new QPixmap("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->textEdit_9->toPlainText()+".jpg");
       *p = p->scaled(ui->label_8->width(),ui->label_8->height(),Qt::KeepAspectRatio);
       ui->label_8->setPixmap(*p);

       ui->pushButton_2->setEnabled(true);

    }
}

void AddZek::slotSave()
{
    List<QString> list;
    list.push_back(ui->textEdit->toPlainText());
    list.push_back(ui->textEdit_2->toPlainText());
    list.push_back(ui->textEdit_3->toPlainText());

    list.push_back(ui->textEdit_4->toPlainText());
    list.push_back(ui->textEdit_5->toPlainText());
    list.push_back(ui->textEdit_6->toPlainText());
    list.push_back(ui->textEdit_7->toPlainText());
    list.push_back(ui->textEdit_8->toPlainText());


    try{
    QFile *f = new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/ZekList.txt");
    f->open(QFile::Append|QFile::Text);
    QTextStream *stream = new QTextStream(f);
    *stream << ui->textEdit_9->toPlainText() <<endl;
    f->close();
    f =  new QFile("D:/tritpo project/DataBaseZek/Qt bazaZek/"+ui->textEdit_9->toPlainText()+".txt");
    if(!f->open(QFile::WriteOnly|QFile::Text))
        throw new ErrorOpenFile;
    stream = new QTextStream(f);
    for(int i=0;i<list.size();i++)
        *stream<<list[i]<<endl;
    emit signalZekName(ui->textEdit_9->toPlainText());
    f->close();
    deleteLater();
    }
    catch(Error *e)
    {
        e->isError();
    }
}
