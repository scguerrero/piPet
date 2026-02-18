/*
 * CreateWidget class implementation file.
 * This page of the game is for the Player to create their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/18/2026
 */
#include "CreateWidget.h"

CreateWidget::CreateWidget(QWidget *parent)
    : QWidget{parent}
{
    // initialize widgets
    name = new QPushButton("Name", this);
    species = new QPushButton("Species", this);
    palette = new QPushButton("Palette", this);
    menu = new QVBoxLayout();

    // connect signals to slots
    connect(name, SIGNAL(clicked()), this, SLOT(openNameWidget()));

    // add widgets to layout
    menu->addWidget(name);
    menu->addWidget(species);
    menu->addWidget(palette);
    this->setLayout(menu);
}

void CreateWidget::openNameWidget()
{
    namewidget = new NameWidget();
    // delete all widgets from menu
    while ((deleteable = menu->takeAt(0)) != nullptr)
    {
        delete deleteable->widget();
        delete deleteable;
    }
    // add new widget to cleared layout
    menu->addWidget(namewidget);
}
