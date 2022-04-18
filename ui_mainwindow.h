/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *message_label;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cross_button;
    QPushButton *Zero_button;
    QPushButton *playButton;
    QPushButton *aboutGameButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1_0;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_0_2;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_2_0;
    QPushButton *pushButton_0_1;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_0_0;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 450);
        MainWindow->setMaximumSize(QSize(750, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/recourses/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/recourses/images/name.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        message_label = new QLabel(centralwidget);
        message_label->setObjectName(QString::fromUtf8("message_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(message_label->sizePolicy().hasHeightForWidth());
        message_label->setSizePolicy(sizePolicy);
        message_label->setMinimumSize(QSize(0, 30));
        message_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(message_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Cross_button = new QPushButton(centralwidget);
        Cross_button->setObjectName(QString::fromUtf8("Cross_button"));
        Cross_button->setMinimumSize(QSize(0, 34));
        Cross_button->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Cross_button);

        Zero_button = new QPushButton(centralwidget);
        Zero_button->setObjectName(QString::fromUtf8("Zero_button"));
        Zero_button->setMinimumSize(QSize(0, 34));

        horizontalLayout->addWidget(Zero_button);


        verticalLayout->addLayout(horizontalLayout);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setMinimumSize(QSize(0, 38));
        playButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(playButton);

        aboutGameButton = new QPushButton(centralwidget);
        aboutGameButton->setObjectName(QString::fromUtf8("aboutGameButton"));
        aboutGameButton->setMinimumSize(QSize(0, 38));
        aboutGameButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(aboutGameButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(322, 322));
        tabWidget->setMaximumSize(QSize(320, 320));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        pushButton_1_0 = new QPushButton(tab);
        pushButton_1_0->setObjectName(QString::fromUtf8("pushButton_1_0"));
        sizePolicy1.setHeightForWidth(pushButton_1_0->sizePolicy().hasHeightForWidth());
        pushButton_1_0->setSizePolicy(sizePolicy1);
        pushButton_1_0->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_1_0, 1, 0, 1, 1);

        pushButton_2_1 = new QPushButton(tab);
        pushButton_2_1->setObjectName(QString::fromUtf8("pushButton_2_1"));
        sizePolicy1.setHeightForWidth(pushButton_2_1->sizePolicy().hasHeightForWidth());
        pushButton_2_1->setSizePolicy(sizePolicy1);
        pushButton_2_1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_2_1, 2, 1, 1, 1);

        pushButton_1_2 = new QPushButton(tab);
        pushButton_1_2->setObjectName(QString::fromUtf8("pushButton_1_2"));
        sizePolicy1.setHeightForWidth(pushButton_1_2->sizePolicy().hasHeightForWidth());
        pushButton_1_2->setSizePolicy(sizePolicy1);
        pushButton_1_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_1_2, 1, 2, 1, 1);

        pushButton_0_2 = new QPushButton(tab);
        pushButton_0_2->setObjectName(QString::fromUtf8("pushButton_0_2"));
        sizePolicy1.setHeightForWidth(pushButton_0_2->sizePolicy().hasHeightForWidth());
        pushButton_0_2->setSizePolicy(sizePolicy1);
        pushButton_0_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_0_2, 0, 2, 1, 1);

        pushButton_2_2 = new QPushButton(tab);
        pushButton_2_2->setObjectName(QString::fromUtf8("pushButton_2_2"));
        sizePolicy1.setHeightForWidth(pushButton_2_2->sizePolicy().hasHeightForWidth());
        pushButton_2_2->setSizePolicy(sizePolicy1);
        pushButton_2_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_2_2, 2, 2, 1, 1);

        pushButton_2_0 = new QPushButton(tab);
        pushButton_2_0->setObjectName(QString::fromUtf8("pushButton_2_0"));
        sizePolicy1.setHeightForWidth(pushButton_2_0->sizePolicy().hasHeightForWidth());
        pushButton_2_0->setSizePolicy(sizePolicy1);
        pushButton_2_0->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_2_0, 2, 0, 1, 1);

        pushButton_0_1 = new QPushButton(tab);
        pushButton_0_1->setObjectName(QString::fromUtf8("pushButton_0_1"));
        sizePolicy1.setHeightForWidth(pushButton_0_1->sizePolicy().hasHeightForWidth());
        pushButton_0_1->setSizePolicy(sizePolicy1);
        pushButton_0_1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_0_1, 0, 1, 1, 1);

        pushButton_1_1 = new QPushButton(tab);
        pushButton_1_1->setObjectName(QString::fromUtf8("pushButton_1_1"));
        sizePolicy1.setHeightForWidth(pushButton_1_1->sizePolicy().hasHeightForWidth());
        pushButton_1_1->setSizePolicy(sizePolicy1);
        pushButton_1_1->setMinimumSize(QSize(100, 100));
        pushButton_1_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_1_1, 1, 1, 1, 1);

        pushButton_0_0 = new QPushButton(tab);
        pushButton_0_0->setObjectName(QString::fromUtf8("pushButton_0_0"));
        sizePolicy1.setHeightForWidth(pushButton_0_0->sizePolicy().hasHeightForWidth());
        pushButton_0_0->setSizePolicy(sizePolicy1);
        pushButton_0_0->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_0_0, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\275\320\276\320\273\320\270\320\272\320\270", nullptr));
        label->setText(QString());
        message_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        Cross_button->setText(QString());
        Zero_button->setText(QString());
        playButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        aboutGameButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_1_0->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_1_2->setText(QString());
        pushButton_0_2->setText(QString());
        pushButton_2_2->setText(QString());
        pushButton_2_0->setText(QString());
        pushButton_0_1->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_0_0->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Created with Qt 6.2.4 by Dmitry Kurochkin.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
