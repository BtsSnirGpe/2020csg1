#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <custombutton.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QList<custombutton*> m_listbtn;
};

#endif // MAINWINDOW_H
