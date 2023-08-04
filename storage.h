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
    int m_pr_current_index;

    QPushButton* m_btn_albums;
    QPushButton* m_btn_artists;
    QPushButton* m_btn_playlists;

    QTabWidget* m_tabw_storage;

    QMediaPlayer* m_player;

    Album* m_album;

    QHBoxLayout* m_hbox_tabs;
    QVBoxLayout* m_vbox_main;


    void Settings();
    void Connections();
};