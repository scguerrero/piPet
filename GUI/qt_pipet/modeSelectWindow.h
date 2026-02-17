/*
 * ModeSelectWindow class specification file.
 * This page of the game is for the Player to select a gameplay mode.
 * Author(s): Sasha C. Guerrero
 * Created: 2/17/2026
 * Last Edited: 2/17/2026
 */

#ifndef MODESELECTWINDOW_H
#define MODESELECTWINDOW_H
#include <QtWidgets>

class ModeSelectWindow : public QWidget
{
    Q_OBJECT
public:
    explicit ModeSelectWindow(QWidget *parent = nullptr);
private:
    QLabel *label;
    QPushButton *careButton;
    QPushButton *trainButton;
    QPushButton *battleButton;
    QPushButton *gearButton;
    QPushButton *quitButton;
    QVBoxLayout *buttonLayout;
};

#endif // MODESELECTWINDOW_H
