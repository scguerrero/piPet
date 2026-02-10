/*
 * Main file for Qt application.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/9/2026
 */

#include "window.h"
#include <QApplication>

int main(int argc, char**argv)
{
    QApplication app(argc, argv);

    Window window;
    window.show();

    return app.exec(); // launches event loop
}
