#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>
#include <QtMultimedia>
#include "album.h"

class Storage : public QWidget
{
    Q_OBJECT

public:
    Storage();
    ~Storage();

private:
    int m_pr_current_index;

    QPushButton* m_btn_albums;
    QPushButton* m_btn_artists;
    QPushButton* m_btn_playlists;

    QTabWidget* m_tabw_storage;

    QHBoxLayout* m_hbox_tabs;
    QVBoxLayout* m_vbox_main;


    void Settings();
    void Connections();
};