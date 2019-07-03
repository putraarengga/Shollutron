#include "myconfig.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QTextStream>
#include <QDebug>
#include <QFile>

MyConfig::MyConfig(QObject *parent) : QObject(parent)
{
    QString val;
    QFile file;
    file.setFileName("D:/putra/github/Shollutron/build-Shollutron_V1-Desktop_Qt_5_12_3_MinGW_64_bit-Debug/MyConfig.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();
    qWarning()<<val;
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = d.object();

    QJsonObject setting = d.object();
    QJsonValue valMain = sett2.value((QString("main")));
    QJsonObject itemMain = valMain.toObject();

    username = itemMain["username"].toString();
    password = itemMain["password"].toString();
    name = itemMain["name"].toString();
    address = itemMain["address"].toString();
    city = itemMain["city"].toString();
    province = itemMain["province"].toString();
    country = itemMain["country"].toString();
    coord_lat = itemMain["coord_lat"].toDouble();
    coord_long = itemMain["coord_long"].toDouble();
    elevation = itemMain["elevation"].toInt();
    timezone = itemMain["time_zone"].toInt();
    ashartime = itemMain["ashar_time"].toInt();
    konvensi_gd = itemMain["konvensi_gd"].toDouble();
    konvensi_gn = itemMain["konvensi_gn"].toDouble();
    mytime = itemMain["time"].toString();
    date_gregorian = itemMain["date_gregorian"].toString();
    date_hijriah = itemMain["date_hijriah"].toString();
    enable_beep_adzan = itemMain["enable_beep_adzan"].toBool();
    enable_beep_iqomah = itemMain["enable_beep_iqomah"].toBool();
    moving_text = itemMain["moving_text"].toString();
    wallpaper = itemMain["wallpaper"].toString();

qWarning()<<username<<tr(" ")<<password;
qWarning()<<name<<tr(" ")<<address<<tr(" ")<<city<<tr(" ")<<province<<tr(" ")<<tr(" ")<<country;
qWarning()<<coord_lat<<tr(" ")<<coord_long;
qWarning()<<elevation<<tr(" ")<<timezone<<tr(" ")<<ashartime<<tr(" ");
qWarning()<<konvensi_gd<<tr(" ")<<konvensi_gn;
qWarning()<<time<<tr(" ")<<date_gregorian<<tr(" ")<< date_hijriah;
qWarning()<<enable_beep_adzan<<tr(" ")<<enable_beep_iqomah;
qWarning()<<moving_text<<tr(" ")<<wallpaper;









    QJsonValue value = sett2.value((QString("main")));
    qWarning()<<sett2.size()<<tr(" Objects");
    QJsonObject item = value.toObject();
    qWarning()<<tr("QJsonObject of main ")<<item.size() <<tr(" = ")<<item;

    qWarning() << tr("QJsonObject[coord_lat] of main : ") <<item["coord_lat"];
    QJsonValue subobj = item["coord_lat"];
    qWarning() << subobj.toDouble();


    QJsonValue value2 = sett2.value((QString("adzan")));
    QJsonObject item2 = value2.toObject();
    qWarning()<<tr("QJsonObject of adzan ")<<item2.size() <<tr(" = ")<<item2;

    qWarning() << tr("QJsonObject[pray_ashar] of adzan : ") <<item2["pray_ashar"];
    QJsonValue subobj2 = item2["pray_ashar"];
    qWarning() << subobj2.toInt();



    QJsonValue value3 = sett2.value((QString("theme")));
    QJsonArray item3 = value3.toArray();
    qWarning()<<tr("QJsonArray of theme")<<item3.size() <<tr(" = ")<<value3;

    qWarning() << tr("QJsonObject[1] of theme : ") <<item3[1];
    QJsonValue subobj3 = item3[1];
    qWarning() << subobj3.toString();

//    qWarning() << tr("QJsonObject[appName] of value: ") << item ["imp"];
//    QJsonArray test = item["imp"].toArray();
//    qWarning() << test[1].toString();



}

void MyConfig::read(const QJsonObject &json)
{
}
