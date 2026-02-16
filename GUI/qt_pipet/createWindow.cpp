/*
 * createWindow class implementation file.
 * This page of the game is for the Player to create their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/16/2026
 */

#include "createWindow.h"

// subclassing QWidget for the create window
CreateWindow::CreateWindow(QWidget *parent)
    : QWidget{parent}
{
    // set label
    label = new QLabel("Create piPet");

    // initialize buttons
    nameButton = new QPushButton("Choose Pet's Name", this);
    speciesButton = new QPushButton("Choose Pet's Species", this);
    paletteButton = new QPushButton("Choose Pet's Color Palette", this);

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(nameButton);
    buttonLayout->addWidget(speciesButton);
    buttonLayout->addWidget(paletteButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("Create piPet");
}
