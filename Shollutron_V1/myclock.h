#ifndef MYCLOCK_H
#define MYCLOCK_H

#include <QLCDNumber>

//! [0]
class myclock : public QLCDNumber
{
    Q_OBJECT

public:
    myclock(QWidget *parent = nullptr);
    void setGeom(int x , int y, int width, int height);
private slots:
    void showTime();
};
//! [0]

#endif // MYCLOCK_H
