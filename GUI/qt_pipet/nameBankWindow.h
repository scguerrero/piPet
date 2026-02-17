/*
 * NameBankWindow class specification file.
 * This page of the game is for the Player to choose a name for their piPet from a given bank of names.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/16/2026
 */

#ifndef NAMEBANKWINDOW_H
#define NAMEBANKWINDOW_H
#include <QtWidgets>

class NameBankWindow : public QWidget
{
    Q_OBJECT
    public:
        explicit NameBankWindow(QWidget *parent = nullptr);
    private:
        QLabel *label;
        QPushButton *aNamesButton;
        // TO DO: scrolling list where they can select a name
        QPushButton *doneButton;
        QVBoxLayout *buttonLayout;
    signals:
};

#endif // NAMEBANKWINDOW_H
