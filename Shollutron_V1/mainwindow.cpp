#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->centralWidget()->setStyleSheet(
                "#centralWidget { "
                //" border-image: url(\"C:/Users/ACER-PC/Documents/Shollutron_V1/design/DESIGN SHOLLUTRON 1.jpg\") "
                " border-image: url(\"D:/titip putra/github/Shollutron/Shollutron_V1/design/interface program.jpg\") "
                "0 0 0 0 stretch stretch;"
                "}");


}

MainWindow::~MainWindow()
{
    delete ui;
}
