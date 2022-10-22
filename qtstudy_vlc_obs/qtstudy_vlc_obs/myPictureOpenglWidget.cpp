#include "myPictureOpenglWidget.h"

#include <QPainter>

myPictureOpenglWidget::myPictureOpenglWidget(QWidget* parent) : QOpenGLWidget(parent)
{
}

void myPictureOpenglWidget::paintEvent(QPaintEvent* e)
{
	QPainter pt;

	pt.begin(this);
	QImage img;
	img.load("E:\\lr\\ubuntu\\share\\lr\\qt_vlc_obs\\desktop.png");

	pt.drawImage(QPoint(0,0), img);

	pt.end();
}
