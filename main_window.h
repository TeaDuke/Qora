#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    QTabWidget* m_tabw_main;

    QLabel* m_lbl_storage_album;
    QLabel* m_lbl_search_trecks;

    QVBoxLayout* m_vbox_main;
    QVBoxLayout* m_vbox_storage;
    QVBoxLayout* m_vbox_search;
};
