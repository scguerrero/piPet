//Pet.h

#ifndef PET_H
#define PET_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>

// defining Pet window class
class Pet : public Gtk::Window
{
  public:
    Pet();

  protected:
    // buttons for starting and quitting
    Gtk::Button CreatePet;
};

#endif
