/*
 * createWindow class implementation file.
 * This page of the game is for the Player to create their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/16/2026
 */

#include "createWindow.h"
#include "nameBankWindow.h"

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
    doneButton = new QPushButton("Done", this);

    // connect signals to slots
    connect(nameButton, SIGNAL(clicked()), this, SLOT(openNameBankWindow()));
    connect(speciesButton, SIGNAL(clicked()), this, SLOT(openSpeciesWindow()));
    connect(paletteButton, SIGNAL(clicked()), this, SLOT(openPaletteWindow()));
    connect(doneButton, SIGNAL(clicked()), this, SLOT(openModeSelectWindow()));

    // add buttons to layout
    buttonLayout = new QVBoxLayout();
    buttonLayout->addWidget(label);
    buttonLayout->addWidget(nameButton);
    buttonLayout->addWidget(speciesButton);
    buttonLayout->addWidget(paletteButton);
    buttonLayout->addWidget(doneButton);

    // add layout to window
    this->setLayout(buttonLayout);
    this->setStyleSheet("background: purple");
    this->setWindowTitle("Create piPet");
}

void CreateWindow::openNameBankWindow() // return true to indicate name is done
{
    namebankwindow = new NameBankWindow();
    namebankwindow->showFullScreen();
}

void CreateWindow::openSpeciesWindow()
{
    specieswindow = new SpeciesWindow();
    specieswindow->showFullScreen();
}

void CreateWindow::openPaletteWindow()
{
    palettewindow = new PaletteWindow();
    palettewindow->showFullScreen();
}

void CreateWindow::openModeSelectWindow()
{
    modeselectwindow = new ModeSelectWindow();
    modeselectwindow->showFullScreen();
    this->close();
}
