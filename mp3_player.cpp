#include "mp3_player.h"
#include "ui_mp3_player.h"
#include <QFileDialog>
#include <QToolButton>
#include <QDir>
#include <QSlider>

MP3_Player::MP3_Player(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MP3_Player)
{
    ui->setupUi(this);
    m_playlist_model = new QStandardItemModel(this);
    ui->playlistView->setModel(m_playlist_model);
    m_playlist_model->setHorizontalHeaderLabels(QStringList () << tr("Audio Track") << tr("File Path"));
    ui->playlistView->hideColumn(1);
    ui->playlistView->verticalHeader()->setVisible(false);

    m_player = new QMediaPlayer(this);
    m_playlist = new QMediaPlaylist(m_player);
    m_player->setPlaylist(m_playlist);
    m_player->setVolume(50);
    m_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    ui->volumeSlider->setValue(m_player->volume());

    connect(ui->btn_play, &QToolButton::clicked, m_player, &QMediaPlayer::play);
    connect(ui->btn_pause, &QToolButton::clicked, m_player, &QMediaPlayer::pause);
    connect(ui->btn_stop, &QToolButton::clicked, m_player, &QMediaPlayer::stop);
    connect(ui->btn_next, &QToolButton::clicked, m_playlist, &QMediaPlaylist::next);
    connect(ui->btn_previous, &QToolButton::clicked, m_playlist, &QMediaPlaylist::previous);

    connect(m_playlist, &QMediaPlaylist::currentIndexChanged, [this](int index) {
        ui->currentTrack->setText(m_playlist_model->data(m_playlist_model->index(index, 0)).toString());
    });
}

MP3_Player::~MP3_Player()
{
    delete ui;
    delete m_playlist_model;
    delete m_playlist;
    delete m_player;
}

void MP3_Player::on_add_btn_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this,
                                                tr("Open Files"),
                                                QString(),
                                                tr("Audio Files (*.mp3)"));
    foreach (QString fPath, files)
    {
        QList<QStandardItem *>items;
        items.append(new QStandardItem(QDir(fPath).dirName()));
        items.append(new QStandardItem(fPath));
        m_playlist_model->appendRow(items);
        m_playlist->addMedia(QUrl(fPath));
    }
}

void MP3_Player::on_volumeSlider_valueChanged(int value)
{
    m_player->setVolume(value);
}
