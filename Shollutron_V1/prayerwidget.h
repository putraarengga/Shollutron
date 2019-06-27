#ifndef PRAYERWIDGET_H
#define PRAYERWIDGET_H

#include <QWidget>

class QPushButton;
class QLabel;

class PrayerWidget : public  QWidget
{
    Q_OBJECT

public:
    PrayerWidget(QWidget *parent = nullptr);

private slots:

private:
    QLabel* name, * value;
    QPushButton* boxBackground;

};

#endif // PRAYERWIDGET_H
