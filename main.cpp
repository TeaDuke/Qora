#include "qora_player.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());

    QoraPlayer w;
    w.resize(900, 500);
    w.showMaximized();
    return a.exec();
}
