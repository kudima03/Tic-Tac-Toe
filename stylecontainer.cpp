#include "stylecontainer.h"

QString StyleContainer::getMainWindowStyle()
{
    return "MainWindow{ background-image: url(:/recourses/images/bg.png);}";
}

QString StyleContainer::getPlayButtonStyle()
{
   return "QPushButton{ "
          "border:none;"
          "color:#fff;"
          "border-radius:19px;"
          "font-family: 'Roboto-Medium';"
          "font-size: 16px;"
          "background-color: qlineargradient"
          "(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(40, 138, 224, 255), stop:1 rgba(0, 0, 166, 255));}"
          "QPushButton::hover"
          "{background-color: qlineargradient"
          "(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(35, 141, 255, 255), stop:1 rgba(0, 0, 195, 255));};"
          "QPushButton::pressed"
          "{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 59, 130, 255), stop:1 rgba(0, 94, 127, 255));}";
}

QString StyleContainer::getGiveUpButtonStyle()
{
    return "QPushButton{ "
           "border:none;"
           "color:#fff;"
           "border-radius:19px;"
           "font-family: 'Roboto-Medium';"
           "font-size: 16px;"
           "background-color:"
           "qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(255, 140, 142, 255), stop:1 rgba(255, 28, 32, 255)) ;}"
           "QPushButton::pressed"
           "{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 59, 130, 255), stop:1 rgba(0, 94, 127, 255));}";
}

QString StyleContainer::getAboutGameButtonStyle()
{
    return "QPushButton{ "
           "border:none;"
           "color:#fff;"
           "border-radius:19px;"
           "font-family: 'Roboto-Medium';"
           "font-size: 16px;"
           "background-color: qlineargradient"
           "(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(40, 138, 224, 255), stop:1 rgba(0, 0, 166, 255));}"
           "QPushButton::hover"
           "{background-color: qlineargradient"
           "(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(35, 141, 255, 255), stop:1 rgba(0, 0, 195, 255))};"
           "QPushButton::pressed"
           "{background-color: qlineargradient"
           "(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 59, 130, 255), stop:1 rgba(0, 94, 127, 255));}";
}

QString StyleContainer::getCrossButtonStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient"
           "(spread:pad, x1:0.905, y1:0.010989, x2:1, y2:1, stop:0 rgba(117, 117, 117, 255), stop:1 rgba(70, 70, 70, 255));"
           "background-image: url(:/recourses/images/cross_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border: 1px solid #333;"
           "border-top-left-radius: 5px;"
           "border-bottom-left-radius: 5px;};";
}

QString StyleContainer::getZeroButtonStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient"
           "(spread:pad, x1:0.905, y1:0.010989, x2:1, y2:1, stop:0 rgba(117, 117, 117, 255), stop:1 rgba(70, 70, 70, 255));;"
           "background-image: url(:/recourses/images/zero_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border: 1px solid #333;"
           "border-top-right-radius: 5px;"
           "border-bottom-right-radius: 5px;};";
}

QString StyleContainer::getCrossButtonActiveStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient"
           "(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(90, 90, 90, 255), stop:1 rgba(47, 47, 47, 255));"
           "background-image: url(:/recourses/images/cross_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border: 1px solid #333;"
           "border-top-left-radius: 5px;"
           "border-bottom-left-radius: 5px;};";
}

QString StyleContainer::getZeroButtonActiveStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient"
           "(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(90, 90, 90, 255), stop:1 rgba(47, 47, 47, 255));"
           "background-image: url(:/recourses/images/zero_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border: 1px solid #333;"
           "border-top-right-radius: 5px;"
           "border-bottom-right-radius: 5px;};";
}

QString StyleContainer::getTabWidgetStyle()
{
    return "QTabWidget{"
            "border::none;}"
            "QTabWidget::pane{"
            "border: 1px solid #222;"
            "border-radius: 3px;}";
}

QString StyleContainer::getTabStyle()
{
    return "QWidget#tab{"
            "background: rgb(33, 40, 50);}";
}

QString StyleContainer::getBlankButtonStyle()
{
    return "QPushButton{"
           "border:none;"
            "background: #272D39;}"
            "QPushButton::hover"
            "{background: #373D49;}";
}

QString StyleContainer::getCrossNormalStyle()
{
    return "QPushButton"
            "{border:none;"
            "background: #272D39 url(:/recourses/images/cross_large.png) no-repeat center center;}"
            "QPushButton::hover"
            "{background-color: #373D49;}";
}

QString StyleContainer::getCrossVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
            "background: #055922 url(:/recourses/images/cross_large.png) no-repeat center center;}"
            "QPushButton::hover{"
            "background-color: #373D49;}";
}

QString StyleContainer::getCrossLoseStyle()
{
    return "QPushButton{"
           "border:none;"
            "background: rgb(204, 60, 62) url(:/recourses/images/cross_large.png) no-repeat center center;}"
            "QPushButton::hover"
            "{background-color: #373D49;}";
}

QString StyleContainer::getZeroNormalStyle()
{
    return "QPushButton{"
           "border:none;"
            "background: #272D39 url(:/recourses/images/zero_large.png) no-repeat center center;}"
            "QPushButton::hover{"
            "background-color: #373D49;}";
}

QString StyleContainer::getZeroVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
            "background: #055922 url(:/recourses/images/zero_large.png) no-repeat center center;}"
            "QPushButton::hover{"
            "background-color: #373D49;}";
}

QString StyleContainer::getZeroLoseStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: rgb(204, 60, 62) url(:/recourses/images/zero_large.png) no-repeat center center;}"
           "QPushButton::hover{"
           "background-color: #373D49;}";
}

QString StyleContainer::getNormalMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto  Medium';"
           "font-size: 15px;"
           "background: none;"
           "color:#ffffff;}";
}

QString StyleContainer::getLooseMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto  Medium';"
           "font-size: 15px;"
           "background: rgb(255, 82, 85);"
           "color:#ffffff;"
           "border: 1px solid rgb(255, 82, 85);"
           "border-radius: 5px;}";
}

QString StyleContainer::getVictoryMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto  Medium';"
           "font-size: 15px;"
           "background: #055922;"
           "color:#ffffff;"
           "border: 1px solid #055922;"
           "border-radius: 5px;}";
}

QString StyleContainer::getStandoffMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto  Medium';"
           "font-size: 15px;"
           "background: rgb(242, 188, 44);"
           "color:#ffffff;"
           "border: 1px solid rgb(242, 188, 44);"
           "border-radius: 5px;}";
}

QString StyleContainer::getAboutTextStyle()
{
    return "QLabel{"
           "font-family: 'Roboto  Medium';"
           "font-size: 15px;"
           "font-style:italic;"
           "color: #ffffff;"
           "background: #333333;}"
           "QTabWidget::pane{"
           "border: 0px;"
           "border-radius: 10px;}";
}
