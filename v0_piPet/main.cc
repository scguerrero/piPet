//main.cc

#include <gtkmm/application.h>
#include "Pet.h"

int main(int argc, char *argv[]) 
{
    // Create an application object.
    auto app = Gtk::Application::create("org.gtkmm.example");

    // Create window object and return when it is closed.
    return app->make_window_and_run<Pet>(argc, argv);
}
