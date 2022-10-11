#include <iostream>
#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>

class MainWidget: public QFrame
{
    public:
        MainWidget();
};

MainWidget::MainWidget()
{
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *test = new QLabel("test");

    layout->addWidget(test);

    this->setLayout(layout);
    this->show();
}
