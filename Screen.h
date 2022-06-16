#pragma once

#include <iostream>
#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication.h"
#include <qrect.h>
#include <qscreen.h>
#include <qlist.h>
#include <qapplication.h>
using namespace std;

class Screen
{

public:
    Screen();
    ~Screen();
    QScreen* getScreen(int i = 0);
    int getScreenWidth(int i = 0);
    int getScreenHeight(int i = 0);
    QRect getScreenRect(int i = 0);
private:
    Ui::QtWidgetsApplicationClass ui;
    //ÆÁÄ»´óÐ¡
    QList<QScreen*> screens;
};

