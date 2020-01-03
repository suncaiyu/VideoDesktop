#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Volume,SIGNAL(valueChanged(int)),v.player,SLOT(setVolume(int)));//������������Ƶ������
    ui->checkBox->setCheckState(Qt::Checked);//Ĭ��ѡ��
    a = new AdsWidget2;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Play_clicked()
{
    ui->fileName->clear();
    if(desktopWnd) //���ø�����Ϊ����
    {
        //SetParent((HWND)v.winId(), desktopWnd);
        //SetParent((HWND)g.winId(), desktopWnd);
        //SetParent((HWND)w.winId(), desktopWnd);
        SetParent((HWND)a->winId(), desktopWnd);
    }
    a->hide();
           a->setWindowFlags(Qt::FramelessWindowHint);//�ޱ߿�
       a->setWindowFlags(Qt::Dialog);//����Ϊ��������
       a->showFullScreen();//showtime��ȫ����
       showMinimized();
  //  QRegExp rx("(https?|ftp|file)://[-A-Za-z0-9+&@#/%?=~_|!:,.;]+[-A-Za-z0-9+&@#/%=~_|]");//for url
  //  QString filePath=ui->PathEdit->toPlainText();//get path
  //  ui->PathEdit->clear();//clear edit
  //  filePath.remove("file:///");//�����ק·��������
  //  v.hide();//����
  //  g.hide();//����
  //  w.hide();//����
  //  v.StopPlay();//ֹͣ���ţ�ԭ������Ƶ��
  //  g.StopPlay();//ֹͣ���ţ�ԭ����GIF��
  //  w.StopPlay();//ֹͣ���ţ�ԭ����web��
  //  if(filePath!=""&&filePath.contains(".mp4")||filePath.contains(".avi")||filePath.contains(".mkv"))//videos
  //  {
  ////�����Ϊ��
  //       v.setWindowFlags(Qt::FramelessWindowHint);//�ޱ߿�
  //       v.setWindowFlags(Qt::Dialog);//����Ϊ��������
  //       v.showFullScreen();//showtime��ȫ����
  //       v.StartPlay(filePath);//���ؼ��ı����벥��·��
  //       showMinimized();//��С��
  //       ui->fileName->setText(filePath);//���¿ؼ��ı�
  //  }
  //  else
  //      if(filePath!=""&&filePath.contains(".gif"))//�����Ϊ�գ���gif
  //      {
  //          g.setWindowFlags(Qt::FramelessWindowHint);//�ޱ߿�
  //          g.setWindowFlags(Qt::Dialog);//����Ϊ��������
  //          g.showFullScreen();//showtime��ȫ����
  //          g.StartPlay(filePath);//���ؼ��ı����벥��·��
  //          showMinimized();//��С��
  //          ui->fileName->setText(filePath);//���¿ؼ��ı�
  //      }
  //      else
  //          if(filePath!=""&&filePath.contains(".html")||rx.exactMatch(filePath))//�����Ϊ�գ���html(url)
  //          {
  //              w.setWindowFlags(Qt::FramelessWindowHint);//�ޱ߿�
  //              w.setWindowFlags(Qt::Dialog);//����Ϊ��������
  //              w.StartPlay(filePath);//���ؼ��ı����벥��·��
  //              SetCursorPos(window()->pos().x(), window()->pos().y()+50);  //��Ļ����
  //              mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);//Ϲ��һ�£���ϵͳ��Ӧ
  //              showMinimized();//��С��
  //              ui->fileName->setText(filePath);//���¿ؼ��ı�
  //          }
  //          else
  //              QMessageBox::warning(this,QString::fromLocal8Bit("��"),QString::fromLocal8Bit("<h1>û��ѡ��<font color='red'>ý��</font>��</h1>"));//��֮����

}
void MainWindow::closeEvent(QCloseEvent *event)//��д�ر��¼�
{
    //v.~VideoWindow();//�ر�vidioewindow������ôд�Ļ��ᵼ�´���һֱ����
    //g.~GifWindow();//�ر�gifwindow������ôд�Ļ��ᵼ�´���һֱ����
    //w.deleteLater();//�ر�webwindow������ôд�Ļ��ᵼ�´���һֱ����
    event->accept();
}

void MainWindow::on_FileOpen_clicked()
{
    //�ļ�ѡȡ
    QString media =QFileDialog::getOpenFileName(this,QString::fromLocal8Bit("ѡ����Ϊ��ֽ����Ƶ"),"",QString::fromLocal8Bit("ý���ļ�(*.mp4 *.avi *.mkv *.gif *.html)"));
    ui->PathEdit->setText(media);
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1==Qt::Checked)//��ѡ��
    {
        v.PlayerState = QMediaPlaylist::CurrentItemInLoop;//ѭ������
        if(v.player->state()==QMediaPlayer::StoppedState)
            v.player->play();
        g.PlayerState = QMediaPlaylist::CurrentItemInLoop;//ѭ������
        if(g.filePath!="")//��Ϊ��
        {
            g.movie->setPaused(false);
            g.movie->start();//���ò���
        }
    }
    else
    {
        v.PlayerState = QMediaPlaylist::CurrentItemOnce;//��һ��
        g.PlayerState = QMediaPlaylist::CurrentItemOnce;//��һ��
    }
}
