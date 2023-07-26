#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

class Storage : public QWidget
{
    Q_OBJECT

public:
    Storage();
    ~Storage();

private:
    QLabel* m_lbl_storage;

    QVBoxLayout* m_vbox_main;
};