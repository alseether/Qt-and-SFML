#ifndef MYCANVAS_HPP
#define MYCANVAS_HPP

#include "QSFMLCanvas.hpp"

class MyCanvas : public QSFMLCanvas
{
public:
	MyCanvas(QWidget* parent, const QPoint& position, const QSize& size) :
		QSFMLCanvas(parent, position, size)
	{

	}

	MyCanvas(QWidget* parent) :
		QSFMLCanvas(parent, QPoint(0,0), QSize(10,10))
	{

	}

private:
	void OnInit(){
		m_rect.setPosition(20, 20);
		m_rect.setSize(sf::Vector2f(100, 100));
		m_rect.setFillColor(sf::Color::Black);
	}

	void OnUpdate(){
		clear(sf::Color::Blue);
		draw(m_rect);
	}

	sf::RectangleShape m_rect;
};

#endif