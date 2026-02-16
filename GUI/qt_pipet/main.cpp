/*
 * Main file for Qt application.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/16/2026
 */

#include "mainWindow.h"
//#include "createWindow.h"
#include <QApplication>

int main(int argc, char**argv)
{
    QApplication app(argc, argv);

    MainWindow mainwindow;
    mainwindow.show(); //showFullScreen();

    //CreateWindow createdwindow;
    //createdwindow.show();

    return app.exec(); // launches event loop
}
