#pragma once

#include <QPushButton>
#include "ui_MyButton.h"
#include <qpainter.h>

class MyButton : public QPushButton
{
	Q_OBJECT

public:
	MyButton(QWidget *parent = Q_NULLPTR);
	~MyButton();
	void paintEvent(QPaintEvent* e);



private:
	Ui::MyButton ui;
};
