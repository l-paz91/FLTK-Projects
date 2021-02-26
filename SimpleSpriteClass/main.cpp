// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com
// FLTK
/*
   A simple way to create and display "sprites". This is not the full project, please
   see the zip file for all the graphics like Image and Window.
*/
//	https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//----INCLUDES----//
#include "SimpleTickWindow.h"

// -----------------------------------------------------------------------------

int main()
{
	using namespace Graph_lib;
	//Simple_window win{ Point{100,100}, 600, 400, "My Window" };
	//Sprite itemBlocks(Point(50, 50), "T_itemblock.png", 40, 40, 1, Suffix::Encoding::png);

	SimpleTickWindow win{ Point{100,100}, 600, 400, "Sprite Tests" };

	return gui_main();
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
