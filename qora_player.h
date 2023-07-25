#pragma once

#include <QtWidgets/QWidget>

class QoraPlayer : public QWidget
{
    Q_OBJECT

public:
    QoraPlayer(QWidget* parent = nullptr);
    ~QoraPlayer();

private:
    void Settings();
    void Connections();
};