#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include "storage.h"


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private:
    QTabWidget* m_tabw_main;

    Storage* m_storage;

    QVBoxLayout* m_vbox_main;
};
