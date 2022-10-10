#include <iostream>
#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>

class Window: public QFrame
{
    public:
        Window(): QFrame()
        {
            QVBoxLayout *layout = new QVBoxLayout(this);

            QLabel *test = new QLabel("test");

            layout->addWidget(test);

            this->setLayout(layout);
            this->show();
        }
};
