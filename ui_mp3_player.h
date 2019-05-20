/********************************************************************************
** Form generated from reading UI file 'mp3_player.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MP3_PLAYER_H
#define UI_MP3_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MP3_Player
{
public:
    QWidget *centralWidget;
    QPushButton *add_btn;
    QPushButton *btn_previous;
    QPushButton *btn_play;
    QPushButton *btn_pause;
    QPushButton *btn_stop;
    QPushButton *btn_next;
    QTableView *playlistView;
    QLabel *currentTrack;
    QSlider *volumeSlider;
    QLabel *label;
    QSlider *lengthSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MP3_Player)
    {
        if (MP3_Player->objectName().isEmpty())
            MP3_Player->setObjectName(QStringLiteral("MP3_Player"));
        MP3_Player->resize(397, 362);
        centralWidget = new QWidget(MP3_Player);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        add_btn = new QPushButton(centralWidget);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(10, 10, 35, 35));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        add_btn->setFont(font);
        btn_previous = new QPushButton(centralWidget);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        btn_previous->setGeometry(QRect(60, 10, 35, 35));
        btn_previous->setFont(font);
        btn_play = new QPushButton(centralWidget);
        btn_play->setObjectName(QStringLiteral("btn_play"));
        btn_play->setGeometry(QRect(110, 10, 35, 35));
        btn_play->setFont(font);
        btn_pause = new QPushButton(centralWidget);
        btn_pause->setObjectName(QStringLiteral("btn_pause"));
        btn_pause->setGeometry(QRect(160, 10, 35, 35));
        btn_pause->setFont(font);
        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setGeometry(QRect(210, 10, 35, 35));
        btn_stop->setFont(font);
        btn_next = new QPushButton(centralWidget);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(260, 10, 35, 35));
        btn_next->setFont(font);
        playlistView = new QTableView(centralWidget);
        playlistView->setObjectName(QStringLiteral("playlistView"));
        playlistView->setGeometry(QRect(10, 71, 381, 141));
        currentTrack = new QLabel(centralWidget);
        currentTrack->setObjectName(QStringLiteral("currentTrack"));
        currentTrack->setGeometry(QRect(10, 50, 381, 16));
        volumeSlider = new QSlider(centralWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setGeometry(QRect(10, 280, 371, 22));
        volumeSlider->setMinimum(1);
        volumeSlider->setMaximum(100);
        volumeSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 260, 47, 13));
        lengthSlider = new QSlider(centralWidget);
        lengthSlider->setObjectName(QStringLiteral("lengthSlider"));
        lengthSlider->setGeometry(QRect(10, 220, 371, 22));
        lengthSlider->setOrientation(Qt::Horizontal);
        MP3_Player->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MP3_Player);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 397, 21));
        MP3_Player->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MP3_Player);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MP3_Player->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MP3_Player);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MP3_Player->setStatusBar(statusBar);

        retranslateUi(MP3_Player);

        QMetaObject::connectSlotsByName(MP3_Player);
    } // setupUi

    void retranslateUi(QMainWindow *MP3_Player)
    {
        MP3_Player->setWindowTitle(QApplication::translate("MP3_Player", "MP3_Player", 0));
        add_btn->setText(QApplication::translate("MP3_Player", "+", 0));
        btn_previous->setText(QApplication::translate("MP3_Player", "|<", 0));
        btn_play->setText(QApplication::translate("MP3_Player", "|>", 0));
        btn_pause->setText(QApplication::translate("MP3_Player", "||", 0));
        btn_stop->setText(QApplication::translate("MP3_Player", "STOP", 0));
        btn_next->setText(QApplication::translate("MP3_Player", ">|", 0));
        currentTrack->setText(QApplication::translate("MP3_Player", "Audio Track", 0));
        label->setText(QApplication::translate("MP3_Player", "Volume", 0));
    } // retranslateUi

};

namespace Ui {
    class MP3_Player: public Ui_MP3_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MP3_PLAYER_H
