// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "Widget.h"
#include "Window.h"

// -----------------------------------------------------------------------------

FltkWrapper::Window::Window(int pX, int pY, const char* pLabel)
	: Fl_Window(pX, pY, pLabel)
	, mWidth(pX)
	, mHeight(pY)
{
	init();
}

// -----------------------------------------------------------------------------

FltkWrapper::Window::Window(const Point& pPoint, int pWidth, int pHeight, const char* pLabel)
	: Fl_Window(int(pPoint.mX), int(pPoint.mY), pWidth, pHeight, pLabel)
	, mWidth(pWidth)
	, mHeight(pHeight)
{
	init();
}

// -----------------------------------------------------------------------------

void FltkWrapper::Window::attach(Widget& pWidget)
{
	Fl_Window::begin();			// FLTK: Begin attaching new Fl_Widgets to this window
	pWidget.attach(*this);			// let the widget create its own Fl_Widgets
	Fl_Window::end();			// FLTK: Stop attaching new Fl_Widgets to this window
}

// -----------------------------------------------------------------------------

void FltkWrapper::Window::detach(Widget& pWidget)
{
	pWidget.hide();
}

// -----------------------------------------------------------------------------

void FltkWrapper::Window::draw()
{
	Fl_Window::draw();
}

// -----------------------------------------------------------------------------

void FltkWrapper::Window::init()
{
	Fl_Window::resizable(this);
	Fl_Window::show();
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
