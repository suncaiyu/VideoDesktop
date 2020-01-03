#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>

namespace Ui {
class VideoWindow;
}

class VideoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VideoWindow(QWidget *parent = 0);
    ~VideoWindow();
    void StartPlay(QString path);//开始播放
    QMediaPlayer *player;//播放器
    int PlayerState;
    void StopPlay();//新一轮播放开始后，停止对原来内容的播放
private:
    Ui::VideoWindow *ui;
    QVideoWidget *videoWidget;//不解释
    qint64 duration;//持续时间
private slots:
    void setD(qint64 d);//获取持续时间的槽
    void ResetVideo(qint64 currentTime);//获取当前时间，用来进行循环播放的槽
};

#endif // VIDEOWINDOW_H
