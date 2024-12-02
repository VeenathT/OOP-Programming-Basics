#include "shapeArea.h"
#include <iostream>

using namespace std;


float areaCircle(float r) {
	return (22.0 / 7 * r * r);
}

float areaRectangle(float l, float w) {
	return l * w;
}

float areaSquare(float l) {
	return l * l;
}