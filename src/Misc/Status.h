#pragma once

#include "../Ares.h"
#include <Drawing.h>
#include <LoadProgressManager.h>

class StatusMessages {
public:
	static Point2D TLPoint;
	static Point2D Delta;

	static bool Visible;

	static void Add(const wchar_t * pText, WORD Color) {
		if(Visible) {
			LoadProgressManager::DrawText(pText, TLPoint, Color);
			TLPoint += Delta;
		}
	}

};
