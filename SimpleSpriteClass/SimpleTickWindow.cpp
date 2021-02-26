// -----------------------------------------------------------------------------

//----INCLUDES----//
#include "SimpleTickWindow.h"

// -----------------------------------------------------------------------------

namespace Graph_lib
{
	// -----------------------------------------------------------------------------

	SimpleTickWindow::SimpleTickWindow(Point xy, int w, int h, const char * title)
		: Window(xy, w, h, title)
		, mQuitB(Point(x_max() - 70, 0), 70, 20, "Quit",
			[](Address, Address addr) { reference_to<SimpleTickWindow>(addr).quitPressed(); })
		, mItemBlocks(Point(50, 50), "T_itemblock.png", 40, 40, 1, Suffix::Encoding::png)
	{
		attach(mQuitB);
		attach(mItemBlocks);
		mItemBlocks.drawFrame(1);

		// add tick function to FLTKs callback system
		Fl::add_timeout(0.05, cb_tick, (void*)this);
	}

	// -----------------------------------------------------------------------------
	
	void SimpleTickWindow::tick()
	{
		// do ticking things here
		static int frame = 1;
		if (frame > 4)
			frame = 1;
		mItemBlocks.drawFrame(frame++);
		
		// end frame and redraw all objects in window
		redraw();
	}

	// -----------------------------------------------------------------------------
	
	void SimpleTickWindow::quitPressed()
	{
		hide();
	}

	// -----------------------------------------------------------------------------

	void SimpleTickWindow::cb_tick(Address addr)
	{
		static_cast<SimpleTickWindow*>(addr)->tick();
		Fl::repeat_timeout(0.1, cb_tick, (void*)addr);
	}

	// -----------------------------------------------------------------------------

}  // namespace Graph_lib

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
