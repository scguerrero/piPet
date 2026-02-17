/*
 * SpeciesWindow class implementation file.
 * This page of the game is for the Player to choose a species for their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/17/2026
 * Last Edited: 2/17/2026
 */
#include "speciesWindow.h"
#include <QtWidgets>

// subclassing QWidget
SpeciesWindow::SpeciesWindow(QWidget *parent)
    : QWidget{parent}
{
    // set label
    label = new QLabel("Choose the species of your pet");

    // initialize buttons
    axolotlButton = new QPushButton("Electric Axolotl", this);
    dogButton = new QPushButton("Dragon Dog", this);
    catButton = new QPushButton("Seal Cat", this);
    doneButton = new QPushButton("Done", this);

    // connect signals to slots
    connect(doneButton, SIGNAL(clicked()), this, SLOT(close()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(axolotlButton);
    buttonLayout->addWidget(dogButton);
    buttonLayout->addWidget(catButton);
    buttonLayout->addWidget(doneButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("Species");
}
