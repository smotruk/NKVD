#ifndef ZEKMAINMENU_H
#define ZEKMAINMENU_H

#include <QMainWindow>

namespace Ui {
class ZekMainMenu;
}

class ZekMainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZekMainMenu(bool user,QWidget *parent = 0);
    ~ZekMainMenu();
public slots:
    void slotUpdateZekList();
    void slotShowZekInfo(int);
    void slotSaveRedackt();
    void slotDeleteZek();
    void slotRedack();
    void slotUnRedack();
    void slotAddZek();
    void slotNewZek(QString s);
    void slotStatia();


private:
    Ui::ZekMainMenu *ui;
    int colZek = 0;
};

#endif // ZEKMAINMENU_H
