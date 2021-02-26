// -----------------------------------------------------------------------------

//----INCLUDES----//
#include "Sprite.h"

#include "fltk.h"

// -----------------------------------------------------------------------------

namespace Graph_lib
{
	// -----------------------------------------------------------------------------

	Sprite::Sprite(Point xy, string name, int frameW, int frameH, int rows, Suffix::Encoding e)
		: mWidth(frameW)
		, mHeight(frameH)
		, mRows(rows)
		, mFrame(0)
	{
		// add the top-most co-ords to the Shape
		add(xy);
		mSpriteSheet = new Fl_PNG_Image(name.c_str());
	}

	// -----------------------------------------------------------------------------

	void Sprite::drawFrame(int frame)
	{
		mFrame = frame;
	}

	// -----------------------------------------------------------------------------

	void Sprite::draw_lines() const
	{
		// p->draw(int(point(0).x), int(point(0).y), w, h, cx, cy);
		//mSpriteSheet->draw(int());

		// x screen pos, y screen pos, width, height, xoffset, yoffset

		if (mFrame >= 0)
		{
			int xoffset = mWidth * mFrame;
			int yoffset = mHeight * mFrame;
			int x = int(point(0).x) + xoffset;
			//int y = int(point(0).y) + yoffset;
			mSpriteSheet->draw(int(point(0).x), int(point(0).y), 40, 40, xoffset, 0);
		}
		else
		{
			mSpriteSheet->draw(int(point(0).x), int(point(0).y));
		}

	}

	// -----------------------------------------------------------------------------

}	// END namespace Graph_lib

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
