// -----------------------------------------------------------------------------
#ifndef SIMPLETICKWINDOW_H_
#define SIMPLETICKWINDOW_H_
// -----------------------------------------------------------------------------

//----INCLUDES----//
#include "Gui.h"
#include "Sprite.h"

// -----------------------------------------------------------------------------

namespace Graph_lib
{
	// -----------------------------------------------------------------------------

	// SimpleTickWindow is a simple window with tick function to test items
	// 

	struct SimpleTickWindow : public Window
	{
	public:
		SimpleTickWindow(Point xy, int w, int h, const char* title);

	private:
		// actions
		void tick();
		void quitPressed();

		// callbacks
		static void cb_tick(Address addr);

		// objects
		Button mQuitB;
		Sprite mItemBlocks;
	};

}  // namespace Graph_lib

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !SIMPLETICKWINDOW_H_
