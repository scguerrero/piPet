//main.cc

#include <gtkmm/application.h>
#include "HelloWorldWindow.h"

int main(int argc, char *argv[]) 
{
    // Create an application object.
    auto app = Gtk::Application::create("org.gtkmm.example");

    // Create a hello world window object and return when it is closed.
    return app->make_window_and_run<HelloWorldWindow>(argc, argv);
}
