/*
 * MainWindow class specification file.
 * Author(s): Sasha C. Guerrero
 * Created: 2/9/2026
 * Last Edited: 2/16/2026
 */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
class MainWindow : public QWidget
{
    Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = nullptr);
    private:
        QPushButton *startButton;
        QPushButton *fsOnButton;
        QPushButton *fsOffButton;
        QPushButton *quitButton;
        QVBoxLayout *buttonLayout;
    signals:
        private slots:
            void turnOnFS();
            void turnOffFS();
};

#endif // MAINWINDOW_H
