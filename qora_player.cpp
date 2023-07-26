#include "qora_player.h"

QoraPlayer::QoraPlayer(QWidget *parent)
    : QWidget(parent)
{
    m_main = new MainWindow(this);
    m_player = new Player(this);
    m_sidebar = new Sidebar(this);

    QHBoxLayout* h_layout = new QHBoxLayout();
    h_layout->addWidget(m_sidebar, 1);
    h_layout->addWidget(m_main, 4);
    QWidget* top_widget = new QWidget(this);
    top_widget->setLayout(h_layout);

    QVBoxLayout* v_layout = new QVBoxLayout();
    v_layout->addWidget(top_widget, 9);
    v_layout->addWidget(m_player, 1);

    setLayout(v_layout);
}

QoraPlayer::~QoraPlayer()
{}
