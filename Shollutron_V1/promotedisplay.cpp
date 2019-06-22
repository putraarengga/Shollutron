#include "promotedisplay.h"
#include "QStackedLayout"
#include "QVBoxLayout"
#include "QComboBox"


PromoteDisplay::PromoteDisplay(QWidget *parent) : QWidget(parent)
{
    QWidget *firstPageWidget = new QWidget;
    QWidget *secondPageWidget = new QWidget;
    QWidget *thirdPageWidget = new QWidget;

    QStackedLayout *stackedLayout = new QStackedLayout;
    stackedLayout->addWidget(firstPageWidget);
    stackedLayout->addWidget(secondPageWidget);
    stackedLayout->addWidget(thirdPageWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackedLayout);
    setLayout(mainLayout);

    QComboBox *pageComboBox = new QComboBox(parent);
    pageComboBox->addItem(tr("Page 1"));
    pageComboBox->addItem(tr("Page 2"));
    pageComboBox->addItem(tr("Page 3"));
    connect(pageComboBox, QOverload<int>::of(&QComboBox::activated),
            stackedLayout, &QStackedLayout::setCurrentIndex);
}
