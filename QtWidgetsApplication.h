#pragma once
#include <iostream>
#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication.h"
#include "Screen.h"
#include <qdebug.h>
#include <qrect.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qpainter.h>
#include "MyButton.h"

using namespace std;


class QtWidgetsApplication : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication(QWidget *parent = Q_NULLPTR);
    void initUi();//≥ı ºªØUI
    void paintEvent(QPaintEvent *e);

private:
    Ui::QtWidgetsApplicationClass ui;
    Screen* screen;
    QRect screeenRect;
};
