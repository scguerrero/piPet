//HelloWorldWindow.h

#ifndef HELLOWORLDWINDOW_H
#define HELLOWORLDWINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>

// Derive a new window widget from an existing one.
// This window will only contain a button labelled "Hello World"
class HelloWorldWindow : public Gtk::Window
{
  public:
    HelloWorldWindow();

  protected:
    Gtk::Button hello_world;
};

#endif
