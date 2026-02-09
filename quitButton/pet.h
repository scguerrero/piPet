#ifndef PET_H
#define PET_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/frame.h>
using namespace Gtk;

class Pet : public Window
{

public:
  Pet();
  ~Pet() override;

protected:
  //Member widgets:
  Button quit_button, fullscreen_on_button, fullscreen_off_button;
  Frame m_frame;

  //Signal handlers:
  void quit_clicked();
  void full_on_clicked();
  void full_off_clicked();

};

#endif // PET_H