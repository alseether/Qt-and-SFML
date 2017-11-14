#include "QSFMLCanvas.hpp"

#ifdef Q_WS_X11
	#include <Qt/qx11info_x11.h>
	#include <X11/lib.h>
#endif

QSFMLCanvas::QSFMLCanvas(QWidget* parent, const QPoint& position, const QSize& size, unsigned int frameTime) :
QWidget(parent),
m_initialized(false)
{
	this->setAttribute(Qt::WA_PaintOnScreen);
	this->setAttribute(Qt::WA_OpaquePaintEvent);
	this->setAttribute(Qt::WA_NoSystemBackground);

	setFocusPolicy(Qt::StrongFocus);

	move(position);
	resize(size);

	m_timer.setInterval(frameTime);
}

void QSFMLCanvas::showEvent(QShowEvent*){
	if (!m_initialized){
		#ifdef Q_WS_X11
			XFlush(QX11Info::display());
		#endif

		sf::RenderWindow* t = this;
		t->create((sf::WindowHandle)winId());

		OnInit();

		connect(&m_timer, SIGNAL(timeout()), this, SLOT(repaint()));

		m_timer.start();

		m_initialized = true;
	}
}

QPaintEngine* QSFMLCanvas::paintEngine() const{
	return 0;
}

void QSFMLCanvas::paintEvent(QPaintEvent*){
	OnUpdate();

	display();
}