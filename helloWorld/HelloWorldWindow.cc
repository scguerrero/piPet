//HelloWorldWindow.cc

#include <iostream>
#include "HelloWorldWindow.h"

HelloWorldWindow::HelloWorldWindow() : hello_world("Hello World")
{
    // Set the title of the window.
    set_title("Hello World");

    // Add the member button to the window.
    set_child(hello_world);

    // Handle the 'clicked' signal.
    hello_world.signal_clicked().connect([] () {
          std::cout << "Hello world" << std::endl;
    });
}
