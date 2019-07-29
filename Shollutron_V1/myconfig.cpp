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

    QJsonValue valMain = setting.value((QString("main")));
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
    qWarning()<<mytime<<tr(" ")<<date_gregorian<<tr(" ")<< date_hijriah;
    qWarning()<<enable_beep_adzan<<tr(" ")<<enable_beep_iqomah;
    qWarning()<<moving_text<<tr(" ")<<wallpaper;


    QJsonValue valAdzan = setting.value((QString("adzan")));
    QJsonObject itemAdzan = valAdzan.toObject();
    qWarning()<<itemAdzan;
    adzan[ePray::isya] = itemAdzan["pray_isya"].toInt();
    adzan[ePray::shubuh] = itemAdzan["pray_shubuh"].toInt();
    adzan[ePray::syuruq] = itemAdzan["shuruq"].toInt();
    adzan[ePray::dzuhur] = itemAdzan["pray_dzuhur"].toInt();
    adzan[ePray::ashar] = itemAdzan["pray_ashar"].toInt();
    adzan[ePray::maghrib] = itemAdzan["pray_maghrib"].toInt();
    for (int x = 0;x<=5;x++) {
        qWarning()<<adzan[x];
    }

    QJsonValue valIqomah = setting.value((QString("iqomah")));
    QJsonObject itemIqomah = valIqomah.toObject();
    qWarning()<<itemIqomah;
    iqomah[isya] = itemIqomah["pray_isya"].toInt();
    iqomah[shubuh] = itemIqomah["pray_shubuh"].toInt();
    iqomah[syuruq] = itemIqomah["shuruq"].toInt();
    iqomah[dzuhur] = itemIqomah["pray_dzuhur"].toInt();
    iqomah[ashar] = itemIqomah["pray_ashar"].toInt();
    iqomah[maghrib] = itemIqomah["pray_maghrib"].toInt();
    for (unsigned int x = 0;x<=5;x++) {
        qWarning()<<iqomah[x];
    }


    QJsonValue valTheme= setting.value((QString("theme")));
    QJsonArray itemTheme = valTheme.toArray();
    qWarning()<<itemTheme;
    theme[0] = itemTheme[0].toString();
    theme[1] = itemTheme[1].toString();
    theme[2] = itemTheme[2].toString();
    for (unsigned int x = 0;x<=2;x++) {
        qWarning()<<theme[x];
    }

    QFile csvfile("D:/putra/github/Shollutron/build-Shollutron_V1-Desktop_Qt_5_12_3_MinGW_64_bit-Debug/wallpapers.csv");
    if(!csvfile.open(QIODevice::ReadOnly))
    {
        qWarning()<<csvfile.errorString();
    }

    while (!csvfile.atEnd()) {
        QByteArray line = csvfile.readLine();
        pathWallpaper.append(line.split(',').first());
    }
    qWarning()<<pathWallpaper;
}

void MyConfig::read(const QJsonObject &json)
{

}
void MyConfig::write(QJsonObject &json) const
{


}
