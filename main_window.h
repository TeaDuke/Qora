#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include "storage.h"
#include "search.h"


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();
    void SetTabWIndex(int index);

private:
    int m_pr_current_index;

    QTabWidget* m_tabw_main;

    Storage* m_storage;
    Search* m_search;

    QVBoxLayout* m_vbox_main;

    void Settings();
    void Connections();
};
