/*
 * main.cc is the GUI file.
 * Author: Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/9/2026
 * To compile, run: g++ -std=c++17 *.cc -o main `pkg-config gtkmm-4.0 --cflags --libs`
*/

#include "pet.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.example");

  //Shows the window and returns when it is closed.
  return app->make_window_and_run<Pet>(argc, argv);
}
