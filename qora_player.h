#pragma once

#include "main_window.h"
#include "player.h"
#include "sidebar.h"


class QoraPlayer : public QWidget
{
    Q_OBJECT

public:
    QoraPlayer(QWidget *parent = nullptr);
    ~QoraPlayer();

private:
    Sidebar* m_sidebar;
    MainWindow* m_main;
    Player* m_player;
};
