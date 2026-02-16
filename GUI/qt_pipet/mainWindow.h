/*
 * MainWindow class specification file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/16/2026
 */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets>
#include "createWindow.h"
class MainWindow : public QWidget
{
    Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = nullptr);
    private:
        QLabel *label;
        QPushButton *startButton;
        QPushButton *fsOnButton;
        QPushButton *fsOffButton;
        QPushButton *quitButton;
        QVBoxLayout *buttonLayout;
        CreateWindow *createwindow;
    signals:
        private slots:
            void turnOnFS();
            void turnOffFS();
            void openCreateWindow();
};

#endif // MAINWINDOW_H
