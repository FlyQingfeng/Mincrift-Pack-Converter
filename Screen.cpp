#include "Screen.h"
#include "Screen.h"
Screen::Screen() {
	//QDesktopWidget *desktop = QApplication::desktop();
	screens = QApplication::screens();


}

QScreen* Screen::getScreen(int i) 
{
	QScreen *screen = screens.at(i);

	return screen;
}

int Screen::getScreenWidth(int i)
{
	QRect screenRect = getScreenRect(i);
	int w = screenRect.width();
	return w;
}

int Screen::getScreenHeight(int i)
{
	QRect screenRect = getScreenRect(i);
	int h = screenRect.width();
	return h;
}

QRect Screen::getScreenRect(int i)
{
	QScreen* screen = getScreen(i);
	QRect screenRect = screen->geometry();

	return screenRect;
}

Screen::~Screen()
{
	delete this;
}
