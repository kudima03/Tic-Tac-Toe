#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include "stylecontainer.h"
#include <QStyleOption>
#include <QFontDatabase>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:

    void paintEvent(QPaintEvent* event);

private slots:
    void on_Cross_button_clicked();

    void on_Zero_button_clicked();

    void on_playButton_clicked();

    void onGameAreaButtonClicked();

    void onComputerSlot();

    void on_aboutGameButton_clicked();

private:
    Ui::MainWindow *ui;
    void setIntefraceStyle();
    void changeButtonStyle(bool change);
    void configurationTabWidget();
    void fontsConfiguration();
    void changeButtonStyle(int row, int column, const QString& style);
    void setGameAreaButtonStyle();
    void configureGameFieldButtons();
    void startGame();
    void lockPlayer();
    void addComputerToGame();
    void checkGameStop();
    void endGame();
    void colorWinButton(int row, int column);
    char gameField[3][3] ={
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
    char playerSymbol = 'X';
    int progress = 0;
    bool isGameStarted = false;
    bool isPlayerLocked = true;
    bool stop;
    char winner;
    QTimer* timer;
};
#endif // MAINWINDOW_H
