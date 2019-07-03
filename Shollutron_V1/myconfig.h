#ifndef MYCONFIG_H
#define MYCONFIG_H

#include <QObject>
#include <QJsonObject>
#include <QVector>

class MyConfig : public QObject
{
    Q_OBJECT
public:
    explicit MyConfig(QObject *parent = nullptr);

    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;

    void print(int indentation = 0) const;

    void SetUsername(const QString usr){username = usr;}
    QString GetUsername(){return username;}

    void SetPassword(const QString pswd){password = pswd;}
    QString GetPassword(){return password;}

    void SetName(const QString nm){name = nm;}
    QString GetName(){return name;}


private:
    QString username, password, name, address, city, province, country;
    QString mytime, date_gregorian, date_hijriah, moving_text;
    QString wallpaper;
    double coord_long, coord_lat, konvensi_gd, konvensi_gn;
    int elevation, timezone, ashartime;
    bool enable_beep_adzan, enable_beep_iqomah;

    int  pray_shubuh, shuruq, pray_dzuhur, pray_ashar, pray_maghrib,pray_isya;

    QString theme[3];
    QJsonObject mconfig, main, adzan, iqomah;




signals:


public slots:

};

#endif // MYCONFIG_H
