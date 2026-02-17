/*
 * createWindow class specification file.
 * This page of the game is for the Player to create their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/16/2026
 */
#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H
#include <QtWidgets>
#include "nameBankWindow.h"
#include "speciesWindow.h"
#include "paletteWindow.h"
#include "modeSelectWindow.h"
class CreateWindow : public QWidget
{
    Q_OBJECT
    public:
        explicit CreateWindow(QWidget *parent = nullptr);
    private:
        QLabel *label;
        QPushButton *nameButton;
        QPushButton *speciesButton;
        QPushButton *paletteButton;
        QPushButton *doneButton;
        QVBoxLayout *buttonLayout;
        NameBankWindow *namebankwindow;
        SpeciesWindow *specieswindow;
        PaletteWindow *palettewindow;
        ModeSelectWindow *modeselectwindow;
    signals:
        private slots:
            void openNameBankWindow();
            void openSpeciesWindow();
            void openPaletteWindow();
            void openModeSelectWindow();
};

#endif // CREATEWINDOW_H
