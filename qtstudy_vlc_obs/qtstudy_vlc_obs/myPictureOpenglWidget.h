#pragma once
#include <QOpenglWidget>

class myPictureOpenglWidget : public QOpenGLWidget
{
public:
	myPictureOpenglWidget(QWidget * _ = nullptr);
	void paintEvent(QPaintEvent* e) override;
};

