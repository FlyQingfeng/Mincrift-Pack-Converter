#pragma once

#include <QWidget>
#include "ui_Pc.h"

class Pc : public QWidget
{
	Q_OBJECT

public:
	Pc(QWidget *parent = Q_NULLPTR);
	~Pc();

private:
	Ui::Pc ui;
};
