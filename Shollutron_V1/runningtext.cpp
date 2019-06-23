#include <QLabel>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QRect>
#include "runningtext.h"
#include <QScreen>
#include <QApplication>

RunningText::RunningText(QWidget *parent) :
QWidget(parent)
{
    mStartButton = new QPushButton(this);
    mStartButton->setText("Start");

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();

    double posYPengumuman = screenGeometry.height() / 1.1111597374179431072210065645514;
    mMovingLabel = new QLabel(parent);
    QFont font("times", 40);
    mMovingLabel->setStyleSheet("QLabel { color : white; }");
    QFontMetrics fm(font);
    int pixelsWide = fm.width("PENGUMUMAN :  SALDO BULAN INI Rp. 1.0000.000");
    mMovingLabel->setText("PENGUMUMAN :  SALDO BULAN INI Rp. 1.0000.000");
    mMovingLabel->move(screenGeometry.width(), posYPengumuman);
    mMovingLabel->setFixedWidth(pixelsWide);
    mMovingLabel->setFixedHeight(screenGeometry.height() - posYPengumuman);
    mMovingLabel->setFont(font);
    mMovingLabel->show();

    mMoveAnimation = new QPropertyAnimation(mMovingLabel, "geometry");
    mMoveAnimation->setDuration(pixelsWide / 0.06666666666666666666666666666667 );  // -> 1000/15000
    mMoveAnimation->setStartValue( QRect( QPoint(screenGeometry.width(), posYPengumuman), mMovingLabel->size()) );
    mMoveAnimation->setEndValue( QRect( QPoint(pixelsWide*-1, posYPengumuman), mMovingLabel->size()) );
    mMoveAnimation->start();

   // connect( mStartButton, SIGNAL(clicked()), this, SLOT(startStopAnimaiton()) );
    connect( mMoveAnimation, SIGNAL(finished()), this, SLOT(changeDirection()) );

}

RunningText::~RunningText()
{

}

void RunningText::startStopAnimaiton()
{
    if( mMoveAnimation->state() == QVariantAnimation::Running)
    {
        mMoveAnimation->stop();
        mStartButton->setText("Start");
    }
    else
    {
        mMoveAnimation->start();
        mStartButton->setText("Stop");
    }
}

void RunningText::changeDirection()
{
//    if( mMoveAnimation->direction() == QVariantAnimation::Forward)
//    {
//        mMoveAnimation->setDirection(QVariantAnimation::Backward);

//    }
//    else
//    {
//        mMoveAnimation->setDirection(QVariantAnimation::Forward);

//    }

    mMoveAnimation->start();
}
