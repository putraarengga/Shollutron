#include "mainwindow.h"
#include <QApplication>

#include "QStackedLayout"
#include "QLabel"
#include "videoplayer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showFullScreen();

//    QLabel *img = new QLabel;
//    img->setPixmap(QPixmap("D:/putra/istriQ.jpg"));
//    img->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
//    img->showFullScreen();

//    VideoPlayer *vpl = new VideoPlayer;
//    vpl->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
//    vpl->showMaximized();

//    QStackedLayout *stackedLayout = new QStackedLayout;
//    stackedLayout->addWidget(vpl);
//    stackedLayout->addWidget(img);


    return a.exec();
}

