#ifndef RUNNINGTEXT_H
#define RUNNINGTEXT_H

#include <QWidget>

class QLabel;
class QPushButton;
class QPropertyAnimation;

class RunningText : public QWidget
{
    Q_OBJECT

    public:
    explicit RunningText(QWidget *parent = 0);
    ~RunningText();

    public slots:
    void startStopAnimaiton();
    void changeDirection();

    private:
    QLabel* mMovingLabel;
    QPushButton* mStartButton;
    QPropertyAnimation* mMoveAnimation;
};

#endif // RUNNINGTEXT_H
