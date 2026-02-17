/*
 * PaletteWindow class specification file.
 * This page of the game is for the Player to choose a color palette for their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/17/2026
 * Last Edited: 2/17/2026
 */
#ifndef PALETTEWINDOW_H
#define PALETTEWINDOW_H
#include <QtWidgets>

class PaletteWindow : public QWidget
{
    Q_OBJECT
public:
    explicit PaletteWindow(QWidget *parent = nullptr);
private:
    QLabel *label;
    QPushButton *naturalButton;
    QPushButton *vividButton;
    QPushButton *pastelButton;
    QPushButton *doneButton;
    // TO DO: display color changes
    QVBoxLayout *buttonLayout;
signals:
};

#endif // PALETTEWINDOW_H
