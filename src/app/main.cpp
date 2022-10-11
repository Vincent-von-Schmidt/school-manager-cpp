#include <iostream>
#include <QApplication>

#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    MainWidget *window = new MainWidget;

    return app.exec();
}