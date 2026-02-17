/*
 * CreateWidget class specification file.
 * This page of the game is for the Player to create their piPet.
 * Author(s): Sasha C. Guerrero
 * Created: 2/16/2026
 * Last Edited: 2/17/2026
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
    QPushButton *name;
    QPushButton *species;
    QPushButton *palette;
    QVBoxLayout *menu;
signals:
private slots:
};

#endif // CREATEWIDGET_H
