#include "error.h"


#include <QMessageBox>
Error::Error()
{

}

void ErrorNoThisElement::isError()
{
    QMessageBox *b = new QMessageBox;
    b->setText("Ошибка обращения к элементу");
    b->show();
}

void ErrorOpenFile::isError()
{
    QMessageBox *b = new QMessageBox;
    b->setText("Ошибка открытия файла");
    b->show();
}
void ErrorFunction::isError()
{
    QMessageBox *b = new QMessageBox;
    b->setText("Невозможное действие");
    b->show();
}

