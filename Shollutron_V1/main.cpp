#include "mainwindow.h"
#include <QApplication>

#include <QPushButton>
#include <QScreen>
#include "math.h"

void setBoxHeader(int posX, int posY, int height, int width, QWidget *parent)
{

    QPushButton *button1 = new QPushButton( parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size: 22px;"
                          "border-style: solid;"
                          "border-color: transparent;"
                          "border-width: 5px;"
                          "border-radius: 10px;"
                          "background-color: rgba(255, 255, 255, 50);");
}
void setLabelHeader( QString text,int posX, int posY, int height, int width, QWidget *parent,int font)
{

    QPushButton *button1 = new QPushButton(text, parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size:  " +QString::number(font)+"px;"
                          "background-color: rgba(255, 255, 255, 0);");
}

void setBoxWaktuSholat(int posX, int posY, int height, int width, QWidget *parent)
{

    QPushButton *button1 = new QPushButton( parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size: 22px;"
                          "border-style: solid;"
                          "border-color: transparent;"
                          "border-width: 5px;"
                          "border-radius: 10px;"
                          "background-color: rgba(255, 255, 255, 50);");
}
void setLabelWaktuSholat( QString text,int posX, int posY, int height, int width, QWidget *parent,int font)
{

    QPushButton *button1 = new QPushButton(text, parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size:  " +QString::number(font)+"px;"
                          "background-color: rgba(255, 255, 255, 0);");
}

void setBoxPengumuman(int posX, int posY, int height, int width, QWidget *parent)
{

    QPushButton *button1 = new QPushButton( parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 2px solid transparent;"  //outline"
                          "color: white; "        //text
                          "font-size: 22px;"
                          "background-color: rgba(255, 255, 255, 50);"
                           "border-style: solid;"
                          " border-color: transparent;"
                           "border-width: 5px;"
                           "border-radius: 10px;");
}
void setLabelPengumuman( QString text,int posX, int posY, int height, int width, QWidget *parent,int font)
{

    QPushButton *button1 = new QPushButton(text, parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size:  " +QString::number(font)+"px;"
                          "text-align:right;"
                          "background-color: rgba(255, 255, 255, 0);");
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();


    double widthHeader  = width / 1.5318507350169619298906897851489;
    double heigthHeader = height/6.6815789473684210526315789473684;
    double posXHeader   = (width /2) - (widthHeader/2);
    double posYHeader   = 0;

    double widthPrayerTime = width / 6.6659376708583925642427556041553;
    double heigthPrayerTime = height/9.9960629921259842519685039370079;

    double posYPrayerTime = 0;
    double posXPrayerTime = width/83.506849315068493150684931506849;

    double posYShubuh = height/5.125841184387617765814266487214;
    double posXShubuh = posXPrayerTime;

    double posYTerbit = height/3.2274459974587039390088945362135;
    double posXTerbit = posXPrayerTime;

    double posYDzuhur = height/2.3569440148468914321064027219301;
    double posXDzuhur = posXPrayerTime;

    double posYAshar = height/1.8562728380024360535931790499391;
    double posXAshar = posXPrayerTime;

    double posYMaghrib = height/1.531042796865581675708257986739;
    double posXMaghrib = posXPrayerTime;

    double posYIsya = height/1.3022738929731578047529492220892;
    double posXIsya = posXPrayerTime;

    double posYPengumuman = height / 1.1111597374179431072210065645514;
    double posXPengumunan = 0;

    double widthPengumuman = width ;
    double heigthPengumunan = height - posYPengumuman;

//    QPushButton *button1 = new QPushButton("",&w);
//    button1->setGeometry(static_cast<int> (round(posXbtn)), static_cast<int>(round(posYbtn))  ,  widthBtn,  (height/9.9960629921259842519685039370079));
//    button1->setStyleSheet("border: 1px solid black;"  //outline"
//                          "color: white; "        //text
//                          "font-size: 22px;"
//                          "background-color: rgba(255, 255, 255, 50);");

    //    double posY = posYbtn;
    //    double posX = posXbtn;
    //    QPushButton *button = new QPushButton("SHUBUH",&w);
    //    button->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  widthBtn, 30);
    //    button->setStyleSheet("border: 0px solid black;"  //outline"
    //                          "color: white; "        //text
    //                          "font-size: 22px;"
    //                          "background-color: rgba(255, 255, 255, 0);");

    //    double posY2 = (height/5.125841184387617765814266487214)+30;
    //    double posX2 = posX;
    //    QPushButton *button2 = new QPushButton("04:00",&w);
    //    button2->setGeometry(static_cast<int>( round(posX2)), static_cast<int> ( round(posY2))  ,  widthBtn, (height/9.9960629921259842519685039370079) -30);
    //    button2->setStyleSheet("border: 0px solid black;"  //outline"
    //                          "color: white; "        //text
    //                          "font-size: 50px;"
    //                          "background-color: rgba(255, 255, 255, 0);");

    setBoxHeader(posXHeader,posYHeader,heigthHeader,widthHeader,&w);
    setLabelHeader("MASJID NURUL HUDA",posXHeader,posYHeader,60,widthHeader,&w,50);
    setLabelHeader("Jl. Tambak Medokan Ayu Gg 2 Kav 218 Surabaya ",posXHeader,posYHeader+60,heigthHeader -60,widthHeader,&w,30);

    setBoxWaktuSholat(posXShubuh,posYShubuh,heigthPrayerTime,widthPrayerTime,&w);
    setLabelWaktuSholat("SHUBUH",posXShubuh,posYShubuh,30,widthPrayerTime,&w,22);
    setLabelWaktuSholat("04:00",posXShubuh,posYShubuh+30,heigthPrayerTime -30,widthPrayerTime,&w,50);

    setBoxWaktuSholat(posXTerbit,posYTerbit,heigthPrayerTime,widthPrayerTime,&w);
    setLabelWaktuSholat("TERBIT",posXTerbit,posYTerbit,30,widthPrayerTime,&w,22);
    setLabelWaktuSholat("04:50",posXTerbit,posYTerbit+30,heigthPrayerTime-30,widthPrayerTime,&w,50);

    setBoxWaktuSholat(posXDzuhur,posYDzuhur,heigthPrayerTime,widthPrayerTime,&w);
    setLabelWaktuSholat("DZUHUR",posXDzuhur,posYDzuhur,30,widthPrayerTime,&w,22);
    setLabelWaktuSholat("12:00",posXDzuhur,posYDzuhur+30,heigthPrayerTime-30,widthPrayerTime,&w,50);

    setBoxWaktuSholat(posXAshar,posYAshar,heigthPrayerTime,widthPrayerTime,&w);
    setLabelWaktuSholat("ASHAR",posXAshar,posYAshar,30,widthPrayerTime,&w,22);
    setLabelWaktuSholat("15:50",posXAshar,posYAshar+30,heigthPrayerTime-30,widthPrayerTime,&w,50);

    setBoxWaktuSholat(posXMaghrib,posYMaghrib,heigthPrayerTime,widthPrayerTime,&w);
    setLabelWaktuSholat("MAGHRIB",posXMaghrib,posYMaghrib,30,widthPrayerTime,&w,22);
    setLabelWaktuSholat("18:00",posXMaghrib,posYMaghrib +30,heigthPrayerTime-30,widthPrayerTime,&w,50);

    setBoxWaktuSholat(posXIsya,posYIsya,heigthPrayerTime,widthPrayerTime,&w);
    setLabelWaktuSholat("ISYA",posXIsya,posYIsya ,30,widthPrayerTime,&w,22);
    setLabelWaktuSholat("18:50",posXIsya,posYIsya+30,heigthPrayerTime-30,widthPrayerTime,&w,50);

    setBoxPengumuman(posXPengumunan,posYPengumuman,heigthPengumunan,width,&w);
    setLabelPengumuman("PENGUMUMAN :  SALDO BULAN INI Rp. 1.0000.000",
                       posXIsya,posYPengumuman,heigthPengumunan,width,&w,40);

    w.showFullScreen();
    return a.exec();
}

