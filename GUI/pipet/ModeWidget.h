/*
 * ModeWidget class specification file.
 * From here the Player can select which game mode they want to play:
 * Care mode for feeding and grooming the pet, Train mode for choosing a mini-game,
 * Battle mode for playing single-player games versus a bot opponent, and
 * Gear mode for choosing equipment/accessories for the pet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/19/2026
 * Last Edited: 2/19/2026
 */
#ifndef MODEWIDGET_H
#define MODEWIDGET_H
#include <QtWidgets>
//#include "CareWidget.h"
//#include "TrainWidget.h"
//#include "BattleWidget.h"
//#include "GearWidget.h"

class ModeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ModeWidget(QWidget *parent = nullptr);
private:
    // button menu for game modes Care, Train, Battle, and Gear
    QVBoxLayout *menu;
    QPushButton *care;
    QPushButton *train;
    QPushButton *battle;
    QPushButton *gear;

    // widgets for all game modes
    /*
    CareWidget *mode_care;
    TrainWidget *mode_train;
    BattleWidget *mode_battle;
    GearWidget *mode_gear;
    */

    signals:
    private slots:
        /*
        void openCareWidget();
        void openTrainWidget();
        void openBattleWidget();
        void openGearWidget();
        */

};

#endif // MODEWIDGET_H
