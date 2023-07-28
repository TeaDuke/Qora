#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include "main_window.h"

class Sidebar : public QWidget
{
    Q_OBJECT

public:
    Sidebar(MainWindow* main_window);
    ~Sidebar();

private:
    int m_pr_current_index;

    QPushButton* m_btn_storage;
    QPushButton* m_btn_search;

    MainWindow* m_main_window;

    QVBoxLayout* m_vbox_main;

    void Settings();
    void Connections();
};
