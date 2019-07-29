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

    void SetAddress(const QString ad){address = ad;}
    QString GetAddress(){return address;}

    void SetCity(const QString ct){city = ct;}
    QString GetCity(){return city;}

    void SetProvince(const QString prov){province = prov;}
    QString GetProcince(){return province;}

    void SetCountry(const QString co){country = co;}
    QString GetCountry(){return country;}

    void SetMytime(const QString tm){mytime = tm;}
    QString GetMytime(){return mytime;}

    void SetDateGregorian(const QString gre){date_gregorian = gre;}
    QString GetDateGregorian(){return date_gregorian;}

    void SetDateHijriyah(const QString hij){date_hijriah= hij;}
    QString GetDateHijriyah(){return date_hijriah;}

    void SetMovingText(const QString mov){moving_text = mov;}
    QString GetMovingText(){return moving_text;}

    void SetWallpaper(const QString wp){wallpaper = wp;}
    QString GetWallpaper(){return wallpaper;}

    void SetCoordLong(const double coordlong){coord_long = coordlong;}
    double GetCoordLong(){return coord_long;}

    void SetCoordLat(const double coordlat){coord_long = coordlat;}
    double GetCoordLat(){return coord_lat;}

    void SetKonvensiGd(const double convgd){konvensi_gd= convgd;}
    double GetKonvensiGd(){return konvensi_gd;}

    void SetKonvensiGn(const double convgn){konvensi_gn= convgn;}
    double GetKonvensiGn(){return konvensi_gn;}

    void SetElevation(const int elev){elevation = elev;}
    int GetElevation(){return elevation;}

    void SetTimeZone(const int tz){timezone = tz;}
    int GetTimeZone(){return timezone;}

    void SetAsharTime(const int ashart){ashartime= ashart;}
    int GetAsharTime(){return ashartime;}

    void SetEnaBeepAdzan(const bool beepadzan){enable_beep_adzan= beepadzan;}
    int GetEnaBeepAdzan(){return enable_beep_adzan;}

    void SetEnaBeepIqomah(const bool beepiqomah){enable_beep_iqomah= beepiqomah;}
    int GetEnaBeepIqomah(){return enable_beep_iqomah;}

    void SetTheme(const int indx, const QString themes){theme[indx] =  themes;}
    QString GetTheme(const int indx){return theme[indx];}

    void SetAdzan(const int indx, const int prayAdzan){adzan[indx] =  prayAdzan;}
    int GetAdzan(const int indx){return adzan[indx];}

    void SetIqomah(const int indx, const int prayIqomah){iqomah[indx] =  prayIqomah;}
    int GetIqomah(const int indx){return iqomah[indx];}

    void AddWallpaperPath(QString path){}
    QStringList GetWallpaperPath(){return pathWallpaper;}

private:
    QString username, password, name, address, city, province, country;
    QString mytime, date_gregorian, date_hijriah, moving_text;
    QString wallpaper;
    double coord_long, coord_lat, konvensi_gd, konvensi_gn;
    int elevation, timezone, ashartime;
    bool enable_beep_adzan, enable_beep_iqomah;

    QString theme[3];
    QStringList pathWallpaper;
    QJsonObject mconfig, main;
    int adzan[6],iqomah[6];

    enum ePray{
        isya=0, shubuh, syuruq, dzuhur, ashar, maghrib
    };


signals:


public slots:

};

#endif // MYCONFIG_H
