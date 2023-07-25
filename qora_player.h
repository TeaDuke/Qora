#pragma once

#include <QtWidgets/QWidget>
#include "ui_qora_player.h"

class QoraPlayer : public QWidget
{
    Q_OBJECT

public:
    QoraPlayer(QWidget *parent = nullptr);
    ~QoraPlayer();

private:
    Ui::QoraPlayerClass ui;
};
