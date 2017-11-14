#ifndef QSFMLCANVAS_HPP
#define QSFMLCANVAS_HPP

#include <SFML/Graphics.hpp>
#include <QtWidgets/QWidget>
#include <QtCore/qtimer.h>

class QSFMLCanvas : public QWidget, public sf::RenderWindow
{
public:
	QSFMLCanvas(QWidget* parent, const QPoint& position, const QSize& size, unsigned int frameTime = 0);

	//virtual ~QSFMLCanvas() = 0;
private:

	virtual void OnInit() = 0;

	virtual void OnUpdate() = 0;

	virtual void mousePressEvent(QMouseEvent*) = 0;
	virtual void mouseMoveEvent(QMouseEvent*) = 0;
	virtual void mouseReleaseEvent(QMouseEvent*) = 0;

	virtual QPaintEngine* paintEngine() const;

	virtual void showEvent(QShowEvent*);

	virtual void paintEvent(QPaintEvent*);

	QTimer m_timer;
	bool m_initialized;

};

#endif