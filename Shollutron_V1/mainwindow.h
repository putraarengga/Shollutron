#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QTimer>

namespace Ui {
class MainWindow;
class Qlabel;
class QPushButton;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void AddWidget(QPushButton *boxbackground = nullptr,
                   QLabel *lblName = nullptr);

    QTimer *tmrBackground;

private slots:
    void changeBackground();
private:
    Ui::MainWindow *ui;
    Ui::Qlabel *valShubuh,* valShuruq,* valDzuhur,* valAshar,* valMaghrib,* valIsya;
    Ui::QPushButton *boxShubuh, *boxShuruq, *boxDzuhur, *boxAshar, *boxMaghrib, *boxIsya;
    int countTmrBackground=0;
    QString pathBackground[6];
    QStringList pathWallpaper;

};

#endif // MAINWINDOW_H
