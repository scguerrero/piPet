/*
 * ModeWidget class implementation file.
 * We create a button menu to open each game mode.
 * Author(s): Sasha C. Guerrero
 * Created: 2/19/2026
 * Last Edited: 2/19/2026
 */

#include "ModeWidget.h"

ModeWidget::ModeWidget(QWidget *parent)
    : QWidget{parent}
{
    // initializing buttons and menu layout widgets
    menu = new QVBoxLayout();
    care = new QPushButton("Care");
    train = new QPushButton("Train");
    battle = new QPushButton("Battle");
    gear = new QPushButton("Gear");

    // when a mode button is clicked, open the widget for that corresponding mode

    // add buttons to menu layout
    menu->addWidget(care);
    menu->addWidget(train);
    menu->addWidget(battle);
    menu->addWidget(gear);
    this->setLayout(menu);
}
