#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QObject>
#include <QPushButton>

class custombutton : public QPushButton
{
    Q_OBJECT

public:
    custombutton(QWidget *parent = 0);
};

#endif // CUSTOMBUTTON_H
