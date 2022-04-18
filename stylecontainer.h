#ifndef STYLECONTAINER_H
#define STYLECONTAINER_H
#include <QString>

class StyleContainer
{
public:
    static QString getMainWindowStyle();
    static QString getPlayButtonStyle();
    static QString getGiveUpButtonStyle();
    static QString getAboutGameButtonStyle();
    static QString getCrossButtonStyle();
    static QString getZeroButtonStyle();
    static QString getCrossButtonActiveStyle();
    static QString getZeroButtonActiveStyle();
    static QString getTabWidgetStyle();
    static QString getTabStyle();

    static QString getBlankButtonStyle();
    static QString getCrossNormalStyle();
    static QString getCrossVictoryStyle();
    static QString getCrossLoseStyle();

    static QString getZeroNormalStyle();
    static QString getZeroVictoryStyle();
    static QString getZeroLoseStyle();

    static QString getNormalMessageStyle();
    static QString getLooseMessageStyle();
    static QString getVictoryMessageStyle();
    static QString getStandoffMessageStyle();

    static QString getAboutTextStyle();

};

#endif // STYLECONTAINER_H
