#include "QtWidgetsApplication.h"


QtWidgetsApplication::QtWidgetsApplication(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    initUi();
}

void QtWidgetsApplication::initUi()
{
    setWindowTitle(u8"我的世界材质包转换器");
    setWindowIcon(QIcon("./res/OIP-C.jpg"));
    screen =new Screen();
    screeenRect = screen->getScreenRect();
    setFixedSize(screeenRect.width()*0.3,screeenRect.height() * 0.3);
    
    //文本
    QLabel* label1 = new QLabel();
    label1->setParent(this);
    label1->setText(u8"请选择转换模式");
    label1->move(this->width()*0.1, this->height() * 0.1);
    label1->setFixedHeight(this->height() * 0.05);

    MyButton* button1 = new MyButton();
    button1->setParent(this);
    button1->setText(u8"转基岩版");
    button1->move(this->width() * 0.1, label1->y() + label1->height()+10);
    button1->setFixedSize(this->width() * 0.3, this->width() * 0.3);

    MyButton* button2 = new MyButton();
    button2->setParent(this);
    button2->setText(u8"转java版");
    button2->move(this->width() * 0.6, label1->y() + label1->height() + 10);
    button2->setFixedSize(this->width() * 0.3, this->width() * 0.3);


    connect(button1, &QPushButton::clicked, this, [=]() {


    });

    connect(button2, &QPushButton::clicked, this, [=]() {


    });
}

void QtWidgetsApplication::paintEvent(QPaintEvent* e)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(), QPixmap("./res/OIP-C.jpg"));
    
}
