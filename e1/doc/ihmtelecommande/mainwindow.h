#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <custombutton.h>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QList<custombutton*> m_listbtn;
    QList<custombutton2*> m_listbtn2;
    QList<custombutton3*> m_listbtn3;
    QList<custombutton4*> m_listbtn4;
    QVBoxLayout* m_vlayout;
    QWidget* m_maindwidget;
};

#endif // MAINWINDOW_H
