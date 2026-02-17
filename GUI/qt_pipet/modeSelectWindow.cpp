/*
 * ModeSelectWindow class implementation file.
 * This page of the game is for the Player to select a gameplay mode.
 * Author(s): Sasha C. Guerrero
 * Created: 2/17/2026
 * Last Edited: 2/17/2026
 */

#include "modeSelectWindow.h"

//subclassing QWidget
ModeSelectWindow::ModeSelectWindow(QWidget *parent)
    : QWidget{parent}
{
    // set label
    label = new QLabel("Select a game mode");

    // initialize buttons
    careButton = new QPushButton("Care", this);
    trainButton = new QPushButton("Train", this);
    battleButton = new QPushButton("Battle", this);
    gearButton = new QPushButton("Gear", this);
    quitButton = new QPushButton("Quit", this);

    // connect signals to slots
    connect(quitButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(careButton);
    buttonLayout->addWidget(trainButton);
    buttonLayout->addWidget(battleButton);
    buttonLayout->addWidget(gearButton);
    buttonLayout->addWidget(quitButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("Select Game Mode");
}
