#ifndef VHODVZEKBASE_H
#define VHODVZEKBASE_H

#include <QWidget>

namespace Ui {
class VhodVZekBase;
}

class VhodVZekBase : public QWidget
{
    Q_OBJECT

public:
    explicit VhodVZekBase(QWidget *parent = 0);
    ~VhodVZekBase();
public slots:
    void slotOk();
private:
    Ui::VhodVZekBase *ui;
};

#endif // VHODVZEKBASE_H
