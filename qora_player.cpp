#include "qora_player.h"

QoraPlayer::QoraPlayer(QWidget *parent)
    : QWidget(parent)
{
    m_main = new MainWindow();
    m_player = new Player();
    m_sidebar = new Sidebar(m_main);

    QHBoxLayout* h_layout = new QHBoxLayout();
    h_layout->addWidget(m_sidebar, 1);
    h_layout->addWidget(m_main, 6);

    QVBoxLayout* v_layout = new QVBoxLayout();
    v_layout->addLayout(h_layout, 9);
    v_layout->addWidget(m_player, 1);

    setLayout(v_layout);
}

QoraPlayer::~QoraPlayer()
{}
