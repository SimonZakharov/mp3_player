#include "mp3_player.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MP3_Player w;
    w.show();

    return a.exec();
}
