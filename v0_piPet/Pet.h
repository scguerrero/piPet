//Pet.h

#ifndef PET_H
#define PET_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class Pet : public Gtk::Window
{
  public:
    Pet();

  protected:
    Gtk::Button CreatePet;
};

#endif
