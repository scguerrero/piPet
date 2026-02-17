/*
 * Window class implementation file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/17/2026
 */
#include "window.h"

// Window is a subclass of QWidget
Window::Window(QWidget *parent)
    : QWidget{parent}
{
    // instantiate label, layouts, and buttons
    title = new QLabel("piPet: Digital pet raising game!");
    top = new QVBoxLayout();
    start_layout = new QVBoxLayout();
    start = new QPushButton("Start");
    quit = new QPushButton("Quit");

    // add widgets to layouts
    start_layout->addWidget(title);
    start_layout->addWidget(start);
    // nest start_layout inside top
    top->addLayout(start_layout);
    top->addWidget(quit);

    // connect signals to slots
    connect(quit, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
    connect(start, SIGNAL(clicked()), this, SLOT(openCreateWidget()));

    // style properties
    this->setStyleSheet("font-family: monospace; background: azure; color: navy; letter-spacing: 1px");
    title->setStyleSheet("font-size: 24px; font-weight: bold");
    title->setAlignment(Qt::AlignHCenter);

    // window properties
    this->setLayout(top);
    this->setWindowTitle("piPet");
    this->setContentsMargins(100,100,100,100);
}

void Window::openCreateWidget()
{
    create = new CreateWidget();
    // delete start button
    deleteable = start_layout->replaceWidget(start,create);
    delete deleteable->widget();
    // delete title
    deleteable = start_layout->takeAt(0);
    delete deleteable->widget();
    this->setLayout(top);
}
