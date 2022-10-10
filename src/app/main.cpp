#include <iostream>
#include <QApplication>

#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    Window *window = new Window;

    return app.exec();
}