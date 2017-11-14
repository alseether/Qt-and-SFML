#ifndef MYCANVAS_HPP
#define MYCANVAS_HPP

#include "QSFMLCanvas.hpp"
#include <QMouseEvent>


class MyCanvas : public QSFMLCanvas
{
public:
	enum Tool{
		Circle,
		Square
	};
public:
	MyCanvas(QWidget* parent, const QPoint& position, const QSize& size) :
		QSFMLCanvas(parent, position, size)
	{

	}

	MyCanvas(QWidget* parent) :
		QSFMLCanvas(parent, QPoint(0,0), QSize(10,10))
	{

	}

	void setColor(sf::Color c){
		m_color = c;
	}

private:
	sf::VertexArray* getLine(sf::Vector2f from, sf::Vector2f to, float thickness) const{
		sf::Vector2f direction = to - from;
		sf::Vector2f unitDirection = direction / std::sqrt(direction.x*direction.x + direction.y*direction.y);
		sf::Vector2f unitPerpendicular(-unitDirection.y, unitDirection.x);

		sf::Vector2f offset = (thickness / 2.f)*unitPerpendicular;
		sf::VertexArray* ret = new sf::VertexArray(sf::Quads, 4);
		(*ret)[0].position = from + offset;
		(*ret)[0].color = m_color;
		(*ret)[1].position = to + offset;
		(*ret)[1].color = m_color;
		(*ret)[2].position = to - offset;
		(*ret)[2].color = m_color;
		(*ret)[3].position = from - offset;
		(*ret)[3].color = m_color;

		return ret;
	}

	sf::Shape* getTool() const{
		sf::Shape* ret;
		switch (m_toolType){
		case Circle:
			ret = new sf::CircleShape(m_toolRadius);
			ret->setOrigin(m_toolRadius, m_toolRadius);
			ret->setFillColor(m_color);
			return ret;
		case Square:
			ret = new sf::RectangleShape(sf::Vector2f(m_toolRadius, m_toolRadius));
			ret->setOrigin(m_toolRadius, m_toolRadius);
			ret->setFillColor(m_color);
			return ret;
		default:
			ret = new sf::CircleShape(m_toolRadius);
			ret->setOrigin(m_toolRadius, m_toolRadius);
			ret->setFillColor(m_color);
			return ret;
		}
	}

	void OnInit(){
		m_toolType = Circle;
		m_bgColor = sf::Color::White;
		m_color = sf::Color::Black;
		m_toolRadius = 3.f;
		//m_tool = new sf::CircleShape(m_toolRadius);
		m_mousePressed = false;
		m_lastPoint = sf::Vector2f(-1, -1);
	}

	void OnUpdate(){
		clear(m_bgColor);
		for (sf::Drawable* i: m_items){
			draw(*i);
		}
	}

	void mousePressEvent(QMouseEvent* event){
		m_mousePressed = (event->button() == Qt::MouseButton::LeftButton);
		m_lastPoint = sf::Vector2f(-1, -1);
		mouseMoveEvent(event);
	}

	void mouseMoveEvent(QMouseEvent* event){
		if (!m_mousePressed)
			return;

		float x = event->windowPos().x();
		float y = event->windowPos().y();
		sf::Vector2f p = sf::Vector2f(x, y);
		sf::Shape* tool = getTool();
		tool->setPosition(p);
		m_items.push_back(tool);
		if (m_lastPoint != sf::Vector2f(-1, -1)){
			sf::Vector2f diff = p - m_lastPoint;
			if (abs(diff.x) >= m_toolRadius || (abs(diff.y) >= m_toolRadius)){
				m_items.push_back(getLine(m_lastPoint, p, 2*m_toolRadius));
			}
		}
		m_lastPoint = p;
	}

	void mouseReleaseEvent(QMouseEvent* event){
		m_mousePressed = (event->button() == Qt::MouseButton::LeftButton);
	}

	Tool m_toolType;
	float m_toolRadius;
	sf::Color m_bgColor;
	sf::Color m_color;

	sf::Vector2f m_lastPoint;

	std::vector<sf::Drawable*> m_items;
	bool m_mousePressed;
};

#endif