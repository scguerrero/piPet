//Pet.cc

#include <iostream>
#include "Pet.h"

Pet::Pet() : CreatePet("Create Pet")
{
    // Set the title of the window.
    set_title("piPet");

    // Add the member button to the window.
    set_child(CreatePet);

    // Handle the 'clicked' signal.
    CreatePet.signal_clicked().connect([] () {
          std::cout << "Create Pet" << std::endl;
    });
}
