#include "pet.h"
#include <iostream>

Pet::Pet() : 
  quit_button("Quit Game"), // button labels
  fullscreen_on_button("Enter Fullscreen"),
  fullscreen_off_button("Exit Fullscreen")
{
  // title of window
  set_title("piPet");

  // set margin around frame
  m_frame.set_margin(10);
  set_child(m_frame);
  m_frame.set_label("Quit/Fullscreen Widget");
  m_frame.set_label_align(Align::END);

  // Sets the margin around the button.
  quit_button.set_margin(10);
  fullscreen_on_button.set_margin(10);
  fullscreen_off_button.set_margin(10);

  // When the button receives the "clicked" signal, it will call the
  // on_button_clicked() method defined below.
  quit_button.signal_clicked().connect(sigc::mem_fun(*this, &Pet::quit_clicked));
  fullscreen_on_button.signal_clicked().connect(sigc::mem_fun(*this, &Pet::full_on_clicked));
  fullscreen_off_button.signal_clicked().connect(sigc::mem_fun(*this, &Pet::full_off_clicked));

  // This packs the button into the Window (a container).
  m_frame.set_child(quit_button);
  m_frame.set_child(fullscreen_on_button);
  m_frame.set_child(fullscreen_off_button);
}

Pet::~Pet()
{
}

void Pet::quit_clicked()
{
  std::cout << "Quitting the game." << std::endl;
  close();
}

void Pet::full_on_clicked()
{
  std::cout << "Enabling fullscreen." << std::endl;
  close();
}

void Pet::full_off_clicked()
{
  std::cout << "Disabling fullscreen." << std::endl;
  close();
}