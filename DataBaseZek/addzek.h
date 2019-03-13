#ifndef ADDZEK_H
#define ADDZEK_H

#include <QWidget>

namespace Ui {
class AddZek;
}

class AddZek : public QWidget
{
    Q_OBJECT

public:
    explicit AddZek(QWidget *parent = 0);
    ~AddZek();
signals:
    void signalZekName(QString Name);
public slots:
    void slotImg();
    void slotSave();
private:
    Ui::AddZek *ui;
};

#endif // ADDZEK_H
