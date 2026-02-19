/*
 * CreateWidget class specification file.
 * This page of the game is for the Player to create their piPet.
 * We create a tabbed view of the pages for choosing the pet's name, species, and color palette.
 * Pet creation is only available for new savefiles. Players have only one opportunity to
 * choose their pet's characteristics.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/19/2026
 */
#ifndef CREATEWIDGET_H
#define CREATEWIDGET_H
#include <QtWidgets>

class CreateWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CreateWidget(QWidget *parent = nullptr);
private:
    QVBoxLayout *menu;
    QTabWidget *createTabs;
    QWidget *name;
    QWidget *species;
    QWidget *palette;
    QPushButton *done;
    signals:
    private slots:
};

#endif // CREATEWIDGET_H
