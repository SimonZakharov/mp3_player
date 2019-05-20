#ifndef MP3_PLAYER_H
#define MP3_PLAYER_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class MP3_Player;
}

class MP3_Player : public QMainWindow
{
    Q_OBJECT

public:
    explicit MP3_Player(QWidget *parent = nullptr);
    ~MP3_Player();

private slots:
    void on_add_btn_clicked();

    void on_volumeSlider_valueChanged(int value);

private:
    Ui::MP3_Player *ui;
    QStandardItemModel *m_playlist_model;
    QMediaPlayer *m_player;
    QMediaPlaylist *m_playlist;
};

#endif // MP3_PLAYER_H
