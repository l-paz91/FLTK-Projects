// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "TetrisWindow.h"

// -----------------------------------------------------------------------------

FltkWrapper::TetrisWindow::TetrisWindow(Point pXY, int pWidth, int pHeight, const char* pLabel)
	: Window(pXY, pWidth, pHeight, pLabel)
	, mRestartBtn(Point(double(getWidth()) - 80, 0), 70, 20, "Restart", cb_restartB)
	, mQuitBtn(Point(double(getWidth()) - 80, 40), 70, 20, "Quit", cb_quitB)
{
	attach(mRestartBtn);
	attach(mQuitBtn);
}

// -----------------------------------------------------------------------------

void FltkWrapper::TetrisWindow::tick()
{
	redraw();
}

// -----------------------------------------------------------------------------

void FltkWrapper::TetrisWindow::restartPressed()
{

}

// -----------------------------------------------------------------------------

void FltkWrapper::TetrisWindow::quitPressed()
{
	hide();
}

// -----------------------------------------------------------------------------

void FltkWrapper::TetrisWindow::cb_tick(Address pAddr)
{
	
}

// -----------------------------------------------------------------------------

void FltkWrapper::TetrisWindow::cb_restartB(Address, Address pAddr)
{

}

// -----------------------------------------------------------------------------

void FltkWrapper::TetrisWindow::cb_quitB(Address, Address pAddr)
{
	static_cast<TetrisWindow*>(pAddr)->quitPressed();
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
