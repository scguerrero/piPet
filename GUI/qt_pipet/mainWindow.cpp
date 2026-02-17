/*
 * MainWindow class implementation file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/16/2026
 */

#include "mainWindow.h"
#include <QApplication>

// subclassing QWidget for the main window
MainWindow::MainWindow(QWidget *parent)
    : QWidget{parent}
{
    // set label
    label = new QLabel("piPet");

    // initialize buttons
    startButton = new QPushButton("Start Game", this);
    fsOnButton = new QPushButton("Fullscreen ON", this);
    fsOffButton = new QPushButton("Fullscreen OFF", this);
    quitButton = new QPushButton("Quit Game", this);

    // connect signals to slots
    connect(startButton, SIGNAL(clicked()), this, SLOT(openCreateWindow()));
    connect(fsOnButton, SIGNAL(clicked()), this, SLOT(turnOnFS()));
    connect(fsOffButton, SIGNAL(clicked()), this, SLOT(turnOffFS()));
    connect(quitButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(startButton);
    buttonLayout->addWidget(fsOnButton);
    buttonLayout->addWidget(fsOffButton);
    buttonLayout->addWidget(quitButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("piPet");
}

void MainWindow::turnOnFS()
{
    this->showFullScreen();
}

void MainWindow::turnOffFS()
{
    this->showNormal();
}

void MainWindow::openCreateWindow()
{
    createwindow = new CreateWindow();
    createwindow->showFullScreen();
    this->close();
}
