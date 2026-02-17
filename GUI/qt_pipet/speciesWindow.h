/*
 * SpeciesWindow class specification file.
 * This page of the game is for the Player to choose a species for their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/17/2026
 * Last Edited: 2/17/2026
 */
#ifndef SPECIESWINDOW_H
#define SPECIESWINDOW_H
#include <QtWidgets>

class SpeciesWindow : public QWidget
{
    Q_OBJECT
    public:
        explicit SpeciesWindow(QWidget *parent = nullptr);
    private:
        QLabel *label;
        QPushButton *axolotlButton;
        QPushButton *dogButton;
        QPushButton *catButton;
        QPushButton *doneButton;
        // TO DO: read about each species' strength/weakness
        QVBoxLayout *buttonLayout;
    signals:
};

#endif // SPECIESWINDOW_H
