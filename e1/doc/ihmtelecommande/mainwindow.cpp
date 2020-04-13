#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("telecommande");
    for(int i=0; i<4; i++)
     {
        custombutton* btn=new custombutton(this);
        m_listbtn.append(btn);
        btn->move(0,i*30);
    }
}

MainWindow::~MainWindow()
{

}
