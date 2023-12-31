#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtGui>

class Search : public QWidget
{
    Q_OBJECT

public:
    Search();
    ~Search();

private:
    int m_pr_current_index;

    QPushButton* m_btn_tracks;
    QPushButton* m_btn_albums;
    QPushButton* m_btn_artists;
    QPushButton* m_btn_playlists;

    QTabWidget* m_tabw_search;


    QHBoxLayout* m_hbox_tabs;
    QVBoxLayout* m_vbox_main;


    void Settings();
    void Connections();
};