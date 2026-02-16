/*
 * MainWindow class implementation file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/16/2026
 */

#include "mainWindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QWidget{parent}
{
    // initialize buttons
    startButton = new QPushButton("Start Game", this);
    fsOnButton = new QPushButton("Fullscreen ON", this);
    fsOffButton = new QPushButton("Fullscreen OFF", this);
    quitButton = new QPushButton("Quit Game", this);

    // connect signals to slots
    connect(fsOnButton, SIGNAL(clicked()), this, SLOT(turnOnFS()));
    connect(fsOffButton, SIGNAL(clicked()), this, SLOT(turnOffFS()));
    connect(quitButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(startButton);
    buttonLayout->addWidget(fsOnButton);
    buttonLayout->addWidget(fsOffButton);
    buttonLayout->addWidget(quitButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: blue");
}

void MainWindow::turnOnFS()
{
    this->showFullScreen();
}

void MainWindow::turnOffFS()
{
    this->showNormal();
}
