/*
 * pet.h is the GUI specification file.
 * Author: Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/9/2026
 * To compile, run: g++ -std=c++17 *.cc -o main `pkg-config gtkmm-4.0 --cflags --libs`
*/


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