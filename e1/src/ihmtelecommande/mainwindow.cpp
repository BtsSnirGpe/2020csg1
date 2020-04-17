#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("telecommande");
    m_maindwidget = new QWidget(this);
    m_vlayout = new QVBoxLayout(this);

    m_maindwidget-> setLayout(m_vlayout);


        custombutton* btn=new custombutton(m_maindwidget);
        m_listbtn.append(btn);
        m_vlayout->addWidget(btn);

        custombutton2* btn2=new custombutton2(m_maindwidget);
        m_listbtn2.append(btn2);
        m_vlayout->addWidget(btn2);

        custombutton3* btn3=new custombutton3(m_maindwidget);
        m_listbtn3.append(btn3);
        m_vlayout->addWidget(btn3);

        custombutton4* btn4=new custombutton4(m_maindwidget);
        m_listbtn4.append(btn4);
        m_vlayout->addWidget(btn4);

    setCentralWidget(m_maindwidget);
}

MainWindow::~MainWindow()
{

}
