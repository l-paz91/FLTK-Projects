// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Simple Tetris Game using C++ & FLTK

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "Window.h"

#include <Fl/Fl_Box.H>

// -----------------------------------------------------------------------------

int main()
{
	using namespace FltkWrapper;

	FltkWrapper::Window simpleWindow(Point(0, 0), 500, 500, "Simple Window Demonstration");
	Fl_Box box(10, 10, 200, 200, "Hello Simple Window");

	simpleWindow.add(box);

	return Fl::run();
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
