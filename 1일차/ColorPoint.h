#pragma once
#include "Point.h"
class ColorPoint :
	public Point
{
private:
	string color;
public:
	void setColor(string c) {
		this->color = c;
	}
	void showColorPoint() {
		cout << color << ":";
		showPoint();
	}
};

