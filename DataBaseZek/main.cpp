#include "vhodvzekbase.h"
#include "zekmainmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    VhodVZekBase *w =new VhodVZekBase;
    w->show();
    return a.exec();
}
