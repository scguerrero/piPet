/*
 * ModeWidget class specification file.
 * From here the Player can select which game mode they want to play:
 * Care mode for feeding and grooming the pet, Train mode for choosing a mini-game,
 * Battle mode for playing single-player games versus a bot opponent, and
 * Gear mode for choosing equipment/accessories for the pet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/19/2026
 */
#ifndef MODEWIDGET_H
#define MODEWIDGET_H
#include <QtWidgets>

class ModeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ModeWidget(QWidget *parent = nullptr);
private:
    QVBoxLayout *menu;
    QPushButton *care; // display pet's condition
    QPushButton *train; // display pet's stats
    QPushButton *battle;
    QPushButton *gear;
};

#endif // MODEWIDGET_H
