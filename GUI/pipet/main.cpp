/*
 * Main file for Qt application.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/17/2026
 */

#include "window.h"
#include <QApplication>

int main(int argc, char**argv)
{
    // Initialize application and window
    QApplication app(argc, argv);

    // Set style properties
    app.setStyleSheet("QPushButton { font-weight: bold }");

    // Initialize main window
    Window window;
    window.showFullScreen();

    return app.exec(); // launches event loop
}
