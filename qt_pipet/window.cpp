/*
 * Window class implementation file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/9/2026
 */

#include "window.h"
#include <QApplication>

Window::Window(QWidget *parent)
    : QWidget{parent}
{
    startButton = new QPushButton("Start Game", this);
    startButton->setGeometry(10,10,80,30);

    fsOnButton = new QPushButton("Fullscreen ON", this);
    fsOnButton->setGeometry(10,50,100,30);
    connect(fsOnButton, SIGNAL(clicked()), this, SLOT(turnOnFS()));

    fsOffButton = new QPushButton("Fullscreen OFF", this);
    fsOffButton->setGeometry(10,90,110,30);
    connect(fsOffButton, SIGNAL(clicked()), this, SLOT(turnOffFS()));

    quitButton = new QPushButton("Quit Game", this);
    quitButton->setGeometry(10,130,90,30);
    connect(quitButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
}

void Window::turnOnFS()
{
    this->showFullScreen();
}

void Window::turnOffFS()
{
    this->showNormal();
}
