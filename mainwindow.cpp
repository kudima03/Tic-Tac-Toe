#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include "time.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    configurationTabWidget();
    setIntefraceStyle();
    fontsConfiguration();
    setGameAreaButtonStyle();
    configureGameFieldButtons();
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::onComputerSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QStyleOption option;
    option.initFrom(this);
    QPainter painter(this);
    this->style()->drawPrimitive(QStyle::PE_Widget, &option, &painter, this);
    QWidget::paintEvent(event);
}

void MainWindow::setIntefraceStyle()
{
    this->setStyleSheet(StyleContainer::getMainWindowStyle());
    ui->playButton->setStyleSheet(StyleContainer::getPlayButtonStyle());
    ui->aboutGameButton->setStyleSheet((StyleContainer::getAboutGameButtonStyle()));
    ui->Cross_button->setStyleSheet(StyleContainer::getCrossButtonActiveStyle());
    ui->Zero_button->setStyleSheet(StyleContainer::getZeroButtonStyle());
    ui->tabWidget->setStyleSheet(StyleContainer::getTabWidgetStyle());
    ui->tab->setStyleSheet(StyleContainer::getTabStyle());
    ui->message_label->setStyleSheet(StyleContainer::getNormalMessageStyle());
    ui->message_label->setText("");
    ui->message_label->setStyleSheet(StyleContainer::getNormalMessageStyle());
}

void MainWindow::changeButtonStyle(bool change)
{
    if(change)
    {
        ui->Cross_button->setStyleSheet(StyleContainer::getCrossButtonActiveStyle());
        ui->Zero_button->setStyleSheet(StyleContainer::getZeroButtonStyle());
    }
    else
    {
        ui->Cross_button->setStyleSheet(StyleContainer::getCrossButtonStyle());
        ui->Zero_button->setStyleSheet(StyleContainer::getZeroButtonActiveStyle());
    }
}

void MainWindow::configurationTabWidget()
{
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setMaximumHeight(320);
}

void MainWindow::fontsConfiguration()
{
    QFontDatabase::addApplicationFont(":/recourses/fonts/Roboto-Medium.ttf");
    QFontDatabase::addApplicationFont(":/recourses/fonts/Roboto-MediumItalic.ttf");
}

void MainWindow::changeButtonStyle(int row, int column, const QString &style)
{
    QGridLayout* layout = qobject_cast<QGridLayout*>(ui->tab->layout());
    QPushButton* button = qobject_cast<QPushButton*>(layout->itemAtPosition(row, column)->widget());
    button->setStyleSheet(style);
}

void MainWindow::setGameAreaButtonStyle()
{
    auto style = StyleContainer::getBlankButtonStyle();
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            changeButtonStyle(i, j, style);
        }
    }
}

void MainWindow::configureGameFieldButtons()
{
    QGridLayout* grid = qobject_cast<QGridLayout*>(ui->tab->layout());
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            QPushButton* button = qobject_cast<QPushButton*>(grid->itemAtPosition(i, j)->widget());
            button->setProperty("row", i);
            button->setProperty("column", j);
            connect(button, &QPushButton::clicked, this, &MainWindow::onGameAreaButtonClicked);
        }
    }
}

void MainWindow::startGame()
{
    setGameAreaButtonStyle();
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            gameField[i][j] = '-';
        }
    }
    progress = 0;
    isGameStarted = true;
    stop = false;
    winner = '-';
    if(playerSymbol != 'X')
    {
        addComputerToGame();
    }
}

void MainWindow::lockPlayer()
{
    playerSymbol == 'X' ? isPlayerLocked = false: isPlayerLocked = true;
}

void MainWindow::addComputerToGame()
{
    if(stop) { return;}
    QVector<QString> vec{"Хм, дайте подумать", "Так так так...", "Минуточку", "Ох, сложно"};
    srand(time(0));
    int index = rand()%vec.size();
    ui->message_label->setText(vec[index]);
    timer->start(800);
}

void MainWindow::checkGameStop()
{
    winner = '-';
    char symbols[2] = {'X', '0'};
    for(int i = 0; i < 2; i++)
    {
        for(int row = 0; row < 3; row++)
        {
            if((gameField[row][0] == symbols[i]) && (gameField[row][1] == symbols[i])
                    && (gameField[row][2] == symbols[i]))
            {
                stop = true;
                winner = symbols[i];
                colorWinButton(row,0);
                colorWinButton(row,1);
                colorWinButton(row,2);
                return;
            }
        }
        for(int col = 0; col < 3; col++)
        {
            if((gameField[0][col] == symbols[i]) && (gameField[1][col] == symbols[i])
                    && (gameField[2][col] == symbols[i]))
            {
                stop = true;
                winner = symbols[i];
                colorWinButton(0,col);
                colorWinButton(1,col);
                colorWinButton(2,col);
                return;
            }
        }

        if((gameField[0][0] == symbols[i]) && (gameField[1][1] == symbols[i]
                    && (gameField[2][2] == symbols[i])))
        {
            stop=true;
            winner = symbols[i];
            colorWinButton(0,0);
            colorWinButton(1,1);
            colorWinButton(2,2);
            return;
        }

        if((gameField[0][2] == symbols[i]) && (gameField[1][1] == symbols[i]
                    && (gameField[2][0] == symbols[i])))
        {
            stop=true;
            winner = symbols[i];
            colorWinButton(0,2);
            colorWinButton(1,1);
            colorWinButton(2,0);
            return;
        }
    }
    bool flag = false;
    for(int a=0;a<3;a++)
    {
        for(int b = 0;b<3;b++)
        {
            if(gameField[a][b] == '-')
            {
                flag = true;
                return;
            }
        }
    }
    if(!flag)
    {
        stop=true;
        winner='-';
        return;
    }
}

void MainWindow::endGame()
{
    isPlayerLocked = true;
    if(stop)
    {
      if(winner == playerSymbol)
      {
          ui->message_label->setText("Победа!");
          ui->message_label->setStyleSheet(StyleContainer::getVictoryMessageStyle());
          ui->playButton->setText("Играть");
          ui->playButton->setStyleSheet(StyleContainer::getPlayButtonStyle());
      }
      else if(winner == '-')
      {
          ui->message_label->setText("Ничья!");
          ui->message_label->setStyleSheet(StyleContainer::getStandoffMessageStyle());
          ui->playButton->setText("Играть");
          ui->playButton->setStyleSheet(StyleContainer::getPlayButtonStyle());
      }
      else
      {
          ui->message_label->setText("Вы проиграли :(");
          ui->message_label->setStyleSheet(StyleContainer::getLooseMessageStyle());
          ui->playButton->setText("Играть");
          ui->playButton->setStyleSheet(StyleContainer::getPlayButtonStyle());
      }
      ui->Cross_button->setDisabled(false);
      ui->Zero_button->setDisabled(false);
      isGameStarted = false;
    }
}

void MainWindow::colorWinButton(int row, int column)
{
    QString style;
    if(winner == playerSymbol)
    {
        if(playerSymbol == 'X')
            style = StyleContainer::getCrossVictoryStyle();
        else style = StyleContainer::getZeroVictoryStyle();
    }
    else if(playerSymbol == 'X')
            style = StyleContainer::getZeroLoseStyle();
          else style = StyleContainer::getCrossLoseStyle();
    changeButtonStyle(row, column, style);
}

void MainWindow::on_Cross_button_clicked()
{
    changeButtonStyle(true);
    playerSymbol = 'X';
}

void MainWindow::on_Zero_button_clicked()
{
    changeButtonStyle(false);
    playerSymbol = '0';
}

void MainWindow::on_playButton_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
    if(isGameStarted)
    {
        isPlayerLocked = true;
        ui->playButton->setText("Играть");
        ui->playButton->setStyleSheet(StyleContainer::getPlayButtonStyle());
        ui->Cross_button->setDisabled(false);
        ui->Zero_button->setDisabled(false);
        ui->message_label->setText("Вы проиграли");
        ui->message_label->setStyleSheet(StyleContainer::getLooseMessageStyle());
        isGameStarted = false;
        endGame();
    }
    else
    {
        ui->message_label->setText("Поехали!");
        ui->message_label->setStyleSheet(StyleContainer::getNormalMessageStyle());
        startGame();
        lockPlayer();
        ui->playButton->setText("Сдаться");
        ui->playButton->setStyleSheet(StyleContainer::getPlayButtonStyle());
        ui->message_label->setStyleSheet(StyleContainer::getNormalMessageStyle());
        ui->Cross_button->setDisabled(true);
        ui->Zero_button->setDisabled(true);
        ui->playButton->setStyleSheet(StyleContainer::getGiveUpButtonStyle());
    }
}

void MainWindow::onGameAreaButtonClicked()
{
    if(!isPlayerLocked && isGameStarted)
    {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    auto row = button->property("row").toInt();
    auto column = button->property("column").toInt();
    qDebug() << "Row: " <<row;
    qDebug() << "Column: "<<column;
    if(gameField[row][column] != '-'){return;}
    QString style;
    if(playerSymbol == 'X')
    {
        style = StyleContainer::getCrossNormalStyle();
        gameField[row][column] = 'X';
    }
    else
    {
        style = StyleContainer::getZeroNormalStyle();
        gameField[row][column] = '0';
    }
    button->setStyleSheet(style);
    isPlayerLocked = true;
    checkGameStop();
    endGame();
    addComputerToGame();
    }
}

void MainWindow::onComputerSlot()
{
    char computerSymbol;
    QString style;
    if(playerSymbol == 'X')
    {
        computerSymbol = '0';
        style = StyleContainer::getZeroNormalStyle();
    }
    else
    {
        computerSymbol = 'X';
        style = StyleContainer::getCrossNormalStyle();
    }
    while (true)
    {
        int row = rand()%3;
        int column = rand()%3;
        if(gameField[row][column] == '-')
        {
            gameField[row][column] = computerSymbol;
            ui->message_label->setText("Ваш ход.");
            changeButtonStyle(row, column, style);
            checkGameStop();
            endGame();
            isPlayerLocked = false;
            break;
        }
    }
    timer->stop();
}

void MainWindow::on_aboutGameButton_clicked()
{
    if(!isGameStarted)
    {
    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->setStyleSheet(StyleContainer::getAboutTextStyle());
    }

}
