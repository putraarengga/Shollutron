#include "mainwindow.h"
#include <QApplication>

#include <QPushButton>
#include <QScreen>
#include "math.h"
#include "myclock.h"
#include "runningtext.h"
#include "promotedisplay.h"

void setBoxHeader(double posX, double posY, double height, double width, QWidget *parent)
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
void setLabelHeader( QString text,double posX, double posY, double height, double width, QWidget *parent,int font)
{

    QPushButton *button1 = new QPushButton(text, parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size:  " +QString::number(font)+"px;"
                          "background-color: rgba(255, 255, 255, 0);");
}

void setBoxWaktuSholat(double posX, double posY, double height, double width, QWidget *parent)
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
                          "background-color: rgba(255, 255, 255, 45);");
}
void setLabelWaktuSholat( QString text,double posX, double posY, double height, double width, QWidget *parent,int font)
{

    QPushButton *button1 = new QPushButton(text, parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 0px solid black;"  //outline"
                          "color: white; "        //text
                          "font-size:  " +QString::number(font)+"px;"
                          "background-color: rgba(255, 255, 255, 0);");
}

void setBoxPengumuman(double posX, double posY, double height, double width, QWidget *parent)
{

    QPushButton *button1 = new QPushButton( parent);
    button1->setGeometry(static_cast<int> (round(posX)), static_cast<int>(round(posY))  ,  width,  height);
    button1->setStyleSheet("border: 2px solid transparent;"  //outline"
                          "color: white; "        //text
                          "font-size: 22px;"
                          "background-color: rgba(255, 255, 255, 50);");
}
void setLabelPengumuman( QString text,double posX, double posY, double height, double width, QWidget *parent,int font)
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
    double heigthPrayerTime = height/9; //9.9960629921259842519685039370079;

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

    double posYTime = height / 2.2793897696679629075680526473228;
    double posXTime = width / 1.3610180843938379102478231748158;

    double widthTime = width / 3.9177377892030848329048843187661;
    double heightTime = height / 5;

    double posYAcqTime = height / 1.303009575923392612859097127223;
    double posXAcqTime = width / 1.3610180843938379102478231748158;

    double widthAcqTime = width / 3.9177377892030848329048843187661;
    double heightAcqTime = height / 9;


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
//    setLabelPengumuman("PENGUMUMAN :  SALDO BULAN INI Rp. 1.0000.000",
//                       posXPengumunan,posYPengumuman,heigthPengumunan,width,&w,40);
\
    setBoxWaktuSholat(posXTime,posYTime,heightTime ,widthTime,&w);
    //setLabelWaktuSholat("16:40",posXTime,posYTime ,70,widthTime,&w,65);
    setLabelWaktuSholat("19 Juni 2019",posXTime,posYTime+70,(heightTime-70)/2,widthTime,&w,32);
    setLabelWaktuSholat("15 Syawal 1440 H",posXTime,posYTime+(70+(heightTime-70)/2) ,(heightTime-70)/2,widthTime,&w,32);

    setBoxWaktuSholat(posXAcqTime,posYAcqTime,heightAcqTime,widthAcqTime,&w);
    setLabelWaktuSholat("50 Menit Menuju",posXAcqTime,posYAcqTime ,40,widthAcqTime,&w,33);
    setLabelWaktuSholat("Sholat Maghrib",posXAcqTime,posYAcqTime+40 ,heightAcqTime-40,widthAcqTime,&w,33);


    myclock *clock = new myclock(&w);
    clock->setGeom(posXTime,posYTime ,widthTime,70);
    clock->show();
    w.showFullScreen();


    RunningText *runtext = new RunningText(&w);
    runtext->show();

//    PromoteDisplay *promote = new PromoteDisplay(&w);
//    promote->show();

    return a.exec();
}

