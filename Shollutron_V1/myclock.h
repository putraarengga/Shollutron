#ifndef MYCLOCK_H
#define MYCLOCK_H

#include <QLCDNumber>

//! [0]
class myclock : public QLCDNumber
{
    Q_OBJECT

public:
    myclock(QWidget *parent = 0);

private slots:
    void showTime();
};
//! [0]

#endif // MYCLOCK_H
