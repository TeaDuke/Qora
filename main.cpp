#include "qora_player.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QoraPlayer w;
    w.show();
    return a.exec();
}
