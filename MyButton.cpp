#include "MyButton.h"

MyButton::MyButton(QWidget *parent)
	: QPushButton(parent)
{
	ui.setupUi(this);
}

MyButton::~MyButton()
{
}

void MyButton::paintEvent(QPaintEvent* e)
{
	QPainter painter(this);
	painter.drawPixmap(0, 0, this->width(), this->height(), QPixmap("./res/OIP-C.jpg"));
	painter.drawText(0,0,this->text());
}
