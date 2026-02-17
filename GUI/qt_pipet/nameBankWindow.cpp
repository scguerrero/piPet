/*
 * NameBankWindow class implementation file.
 * This page of the game is for the Player to choose a name for their piPet from a given bank of names.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/16/2026
 */

#include "nameBankWindow.h"
#include <QtWidgets>

// subclassing QWidget
NameBankWindow::NameBankWindow(QWidget *parent)
    : QWidget{parent}
{
    // set label
    label = new QLabel("Choose a name for your pet");

    // initialize buttons
    aNamesButton = new QPushButton("See letter A names", this);
    doneButton = new QPushButton("Done", this);

    // connect signals to slots
    connect(doneButton, SIGNAL(clicked()), this, SLOT(close()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(aNamesButton);
    buttonLayout->addWidget(doneButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("Name Bank");
}
