/*
 * Window class specification file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/9/2026
 */


#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
class Window : public QWidget
{
    Q_OBJECT
    public:
        explicit Window(QWidget *parent = nullptr);
    private:
        QPushButton *startButton;
        QPushButton *fsOnButton;
        QPushButton *fsOffButton;
        QPushButton *quitButton;
    signals:
        private slots:
            void turnOnFS();
            void turnOffFS();
};

#endif // WINDOW_H
