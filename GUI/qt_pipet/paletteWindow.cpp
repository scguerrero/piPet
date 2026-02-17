/*
 * Palette class implementation file.
 * This page of the game is for the Player to choose a color palette for their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/17/2026
 * Last Edited: 2/17/2026
 */
#include "paletteWindow.h"
#include <QtWidgets>

// subclassing QWidget
PaletteWindow::PaletteWindow(QWidget *parent)
    : QWidget{parent}
{
    // set label
    label = new QLabel("Choose the species of your pet");

    // initialize buttons
    naturalButton = new QPushButton("Natural", this);
    vividButton = new QPushButton("Vivid", this);
    pastelButton = new QPushButton("Pastel", this);
    doneButton = new QPushButton("Done", this);

    // connect signals to slots
    connect(doneButton, SIGNAL(clicked()), this, SLOT(close()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(naturalButton);
    buttonLayout->addWidget(vividButton);
    buttonLayout->addWidget(pastelButton);
    buttonLayout->addWidget(doneButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("Color Palette");
}
