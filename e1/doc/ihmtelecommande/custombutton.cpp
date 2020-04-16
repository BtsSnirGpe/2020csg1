#include "custombutton.h"


custombutton::custombutton(QWidget *parent)
    :QPushButton(parent)
{
    setText("on");
    setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

}
custombutton2::custombutton2(QWidget *parent)
    :QPushButton(parent)
{
    setText("off");
    setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

}
custombutton3::custombutton3(QWidget *parent)
    :QPushButton(parent)
{
    setText("+");
    setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

}
custombutton4::custombutton4(QWidget *parent)
    :QPushButton(parent)
{
    setText("--");
    setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);

}
